#include "global.h"
#include "gba/m4a_internal.h"
#include "gba/flash_internal.h"
#include <math.h>
#include <string.h>

// Mock GBA memory areas
unsigned char gREG_BASE[0x400] __attribute__ ((aligned (8)));
unsigned char gEWRAM[0x40000] __attribute__ ((aligned (8)));
unsigned char gIWRAM[0x8000] __attribute__ ((aligned (8)));
unsigned char gVRAM[0x18000] __attribute__ ((aligned (8)));
unsigned char gFLASH_BASE[FLASH_SIZE] __attribute__ ((aligned (8)));

struct SoundInfo * SOUND_INFO_PTR __attribute__ ((aligned (8)));
unsigned short INTR_CHECK __attribute__ ((aligned (8)));
void * gINTR_VECTOR[1] __attribute__ ((aligned (8)));

// GBA BIOS Functions Implementations for PC/Switch

u16 Sqrt(u32 num) {
    return (u16)sqrt((double)num);
}

u16 ArcTan2(s16 x, s16 y) {
    return (u16)(atan2((double)y, (double)x) * (32768.0 / M_PI));
}

void ObjAffineSet(struct ObjAffineSrcData *src, void *dest, s32 count, s32 offset) {
    for (s32 i = 0; i < count; i++) {
        s32 sx = src[i].xScale;
        s32 sy = src[i].yScale;
        u16 theta = src[i].rotation;
        
        double angle = (double)theta * (M_PI / 32768.0);
        s16 sn = (s16)(sin(angle) * 256.0);
        s16 cs = (s16)(cos(angle) * 256.0);
        
        s16 *d = (s16 *)((u8 *)dest + i * offset);
        d[0] = (s16)((sx * cs) >> 8);
        d[1] = (s16)((sx * sn) >> 8);
        d[2] = (s16)((sy * -sn) >> 8);
        d[3] = (s16)((sy * cs) >> 8);
    }
}

void BgAffineSet(struct BgAffineSrcData *src, struct BgAffineDstData *dest, s32 count) {
    for (s32 i = 0; i < count; i++) {
        double angle = (double)src[i].alpha * (M_PI / 32768.0);
        s32 sx = src[i].sx;
        s32 sy = src[i].sy;
        
        s16 sn = (s16)(sin(angle) * 256.0);
        s16 cs = (s16)(cos(angle) * 256.0);
        
        dest[i].pa = (s16)((sx * cs) >> 8);
        dest[i].pb = (s16)((sx * sn) >> 8);
        dest[i].pc = (s16)((sy * -sn) >> 8);
        dest[i].pd = (s16)((sy * cs) >> 8);
        dest[i].dx = src[i].scrX;
        dest[i].dy = src[i].scrY;
    }
}

void LZ77UnCompWram(const u32 *src, void *dest) {
    const u8 *s = (const u8 *)src;
    u8 *d = (u8 *)dest;
    u32 header = *src;
    s += 4;
    u32 size = header >> 8;
    
    while (size > 0) {
        u8 flags = *s++;
        for (int i = 0; i < 8 && size > 0; i++) {
            if (flags & 0x80) {
                int length = (s[0] >> 4) + 3;
                int offset = (((s[0] & 0xF) << 8) | s[1]) + 1;
                s += 2;
                for (int j = 0; j < length && size > 0; j++) {
                    *d = *(d - offset);
                    d++;
                    size--;
                }
            } else {
                *d++ = *s++;
                size--;
            }
            flags <<= 1;
        }
    }
}

void LZ77UnCompVram(const u32 *src, void *dest) {
    LZ77UnCompWram(src, dest);
}

void RLUnCompWram(const void *src, void *dest) {
    const u8 *s = (const u8 *)src;
    u8 *d = (u8 *)dest;
    u32 header = *(const u32 *)s;
    s += 4;
    u32 size = header >> 8;
    
    while (size > 0) {
        u8 flags = *s++;
        int count = flags & 0x7F;
        if (flags & 0x80) {
            u8 data = *s++;
            for (int i = 0; i < count + 3 && size > 0; i++) {
                *d++ = data;
                size--;
            }
        } else {
            for (int i = 0; i < count + 1 && size > 0; i++) {
                *d++ = *s++;
                size--;
            }
        }
    }
}

void RLUnCompVram(const void *src, void *dest) {
    RLUnCompWram(src, dest);
}