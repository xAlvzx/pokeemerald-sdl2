#ifndef GUARD_MAIN_H
#define GUARD_MAIN_H

typedef void (*MainCallback)(void);
typedef void (*IntrCallback)(void);
typedef void (*IntrFunc)(void);

struct Main
{
    /*0x000*/ MainCallback callback1;
    /*0x008*/ MainCallback callback2;

    /*0x010*/ MainCallback savedCallback;

    /*0x018*/ IntrCallback vblankCallback;
    /*0x020*/ IntrCallback hblankCallback;
    /*0x028*/ IntrCallback serialCallback;

    /*0x030*/ vu16 intrCheck;

    /*0x034*/ u32 vblankCounter1;
    /*0x038*/ u32 vblankCounter2;

    /*0x03C*/ u16 heldKeysRaw;           // held keys without L=A remapping
    /*0x03E*/ u16 newKeysRaw;            // newly pressed keys without L=A remapping
    /*0x040*/ u16 heldKeys;              // held keys with L=A remapping
    /*0x042*/ u16 newKeys;               // newly pressed keys with L=A remapping
    /*0x044*/ u16 newAndRepeatedKeys;    // newly pressed keys plus key repeat
    /*0x046*/ u16 keyRepeatCounter;      // counts down to 0, triggering key repeat
    /*0x048*/ bool16 watchedKeysPressed; // whether one of the watched keys was pressed
    /*0x04A*/ u16 watchedKeysMask;       // bit mask for watched keys

    /*0x04C*/ struct OamData oamBuffer[128];

    /*0x44C*/ u8 state;

    /*0x44D*/ u8 oamLoadDisabled:1;
    /*0x44D*/ u8 inBattle:1;
    /*0x44D*/ u8 anyLinkBattlerHasFrontierPass:1;
} ALIGNED(8);

#define GAME_CODE_LENGTH 4
extern const u8 gGameVersion;
extern const u8 gGameLanguage;
extern const u8 RomHeaderGameCode[GAME_CODE_LENGTH];
extern const u8 RomHeaderSoftwareVersion;

extern u16 gKeyRepeatStartDelay;
extern bool8 gLinkTransferringData;
extern struct Main gMain;
extern u16 gKeyRepeatContinueDelay;
extern bool8 gSoftResetDisabled;
extern u8 gLinkVSyncDisabled;
extern u32 IntrMain_Buffer[];
extern s8 gPcmDmaCounter;

enum
{
    GAME_BORDER_EMERALD,
    GAME_BORDER_EMERALD_MENU,
    GAME_BORDER_BATTLE,
    GAME_BORDER_INTRO_1,
    GAME_BORDER_INTRO_2,
    GAME_BORDER_INTRO_3,
    GAME_BORDER_INTRO_4,
    GAME_BORDER_INTRO_5,
    GAME_BORDER_OVERLAY,
    NUM_GAME_BORDERS
};

#define BORDER_REPEAT_X 1
#define BORDER_REPEAT_Y 2
#define BORDER_CLAMP_X  4
#define BORDER_CLAMP_Y  8

struct GameBorder {
    const char *name;
    int paletteIndex;
    u8 repeatFlags;
};

extern struct GameBorder borderList[NUM_GAME_BORDERS];

void GameInit(void);
void GameLoop(void);
void AgbMain(void);
void FrameUpdate(void);
void DoHBlankUpdate(void);
void SetMainCallback2(MainCallback callback);
void InitKeys(void);
void SetVBlankCallback(IntrCallback callback);
void SetHBlankCallback(IntrCallback callback);
void SetSerialCallback(IntrCallback callback);
void InitFlashTimer(void);
void SetTrainerHillVBlankCounter(u32 *var);
void ClearTrainerHillVBlankCounter(void);
void DoSoftReset(void);
void ClearPokemonCrySongs(void);
void RestoreSerialTimer3IntrHandlers(void);
void StartTimer1(void);
void SeedRngAndSetTrainerId(void);
u16 GetGeneratedTrainerIdLower(void);

#endif // GUARD_MAIN_H
