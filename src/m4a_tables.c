#include "global.h"
#include "gba/m4a_internal.h"

extern struct MusicPlayerInfo gMPlayInfo_BGM;
extern struct MusicPlayerInfo gMPlayInfo_SE1;
extern struct MusicPlayerInfo gMPlayInfo_SE2;
extern struct MusicPlayerInfo gMPlayInfo_SE3;
extern struct MusicPlayerTrack gMPlayTrack_BGM[];
extern struct MusicPlayerTrack gMPlayTrack_SE1[];
extern struct MusicPlayerTrack gMPlayTrack_SE2[];
extern struct MusicPlayerTrack gMPlayTrack_SE3[];

// Song headers
extern struct SongHeader mus_dummy;
extern struct SongHeader se_use_item;
extern struct SongHeader se_pc_login;
extern struct SongHeader se_pc_off;
extern struct SongHeader se_pc_on;
extern struct SongHeader se_select;
extern struct SongHeader se_win_open;
extern struct SongHeader se_wall_hit;
extern struct SongHeader se_door;
extern struct SongHeader se_exit;
extern struct SongHeader se_ledge;
extern struct SongHeader se_bike_bell;
extern struct SongHeader se_not_effective;
extern struct SongHeader se_effective;
extern struct SongHeader se_super_effective;
extern struct SongHeader se_ball_open;
extern struct SongHeader se_faint;
extern struct SongHeader se_flee;
extern struct SongHeader se_sliding_door;
extern struct SongHeader se_ship;
extern struct SongHeader se_bang;
extern struct SongHeader se_pin;
extern struct SongHeader se_boo;
extern struct SongHeader se_ball;
extern struct SongHeader se_contest_place;
extern struct SongHeader se_a;
extern struct SongHeader se_i;
extern struct SongHeader se_u;
extern struct SongHeader se_e;
extern struct SongHeader se_o;
extern struct SongHeader se_n;
extern struct SongHeader se_success;
extern struct SongHeader se_failure;
extern struct SongHeader se_exp;
extern struct SongHeader se_bike_hop;
extern struct SongHeader se_switch;
extern struct SongHeader se_click;
extern struct SongHeader se_fu_zaku;
extern struct SongHeader se_contest_condition_lose;
extern struct SongHeader se_lavaridge_fall_warp;
extern struct SongHeader se_ice_stairs;
extern struct SongHeader se_ice_break;
extern struct SongHeader se_ice_crack;
extern struct SongHeader se_fall;
extern struct SongHeader se_unlock;
extern struct SongHeader se_warp_in;
extern struct SongHeader se_warp_out;
extern struct SongHeader se_repel;
extern struct SongHeader se_rotating_gate;
extern struct SongHeader se_truck_move;
extern struct SongHeader se_truck_stop;
extern struct SongHeader se_truck_unload;
extern struct SongHeader se_truck_door;
extern struct SongHeader se_berry_blender;
extern struct SongHeader se_card;
extern struct SongHeader se_save;
extern struct SongHeader se_ball_bounce_1;
extern struct SongHeader se_ball_bounce_2;
extern struct SongHeader se_ball_bounce_3;
extern struct SongHeader se_ball_bounce_4;
extern struct SongHeader se_ball_trade;
extern struct SongHeader se_ball_throw;
extern struct SongHeader se_note_c;
extern struct SongHeader se_note_d;
extern struct SongHeader se_note_e;
extern struct SongHeader se_note_f;
extern struct SongHeader se_note_g;
extern struct SongHeader se_note_a;
extern struct SongHeader se_note_b;
extern struct SongHeader se_note_c_high;
extern struct SongHeader se_puddle;
extern struct SongHeader se_bridge_walk;
extern struct SongHeader se_itemfinder;
extern struct SongHeader se_ding_dong;
extern struct SongHeader se_balloon_red;
extern struct SongHeader se_balloon_blue;
extern struct SongHeader se_balloon_yellow;
extern struct SongHeader se_breakable_door;
extern struct SongHeader se_mud_ball;
extern struct SongHeader se_field_poison;
extern struct SongHeader se_escalator;
extern struct SongHeader se_thunderstorm;
extern struct SongHeader se_thunderstorm_stop;
extern struct SongHeader se_downpour;
extern struct SongHeader se_downpour_stop;
extern struct SongHeader se_rain;
extern struct SongHeader se_rain_stop;
extern struct SongHeader se_thunder;
extern struct SongHeader se_thunder2;
extern struct SongHeader se_elevator;
extern struct SongHeader se_low_health;
extern struct SongHeader se_exp_max;
extern struct SongHeader se_roulette_ball;
extern struct SongHeader se_roulette_ball2;
extern struct SongHeader se_taillow_wing_flap;
extern struct SongHeader se_shop;
extern struct SongHeader se_contest_heart;
extern struct SongHeader se_contest_curtain_rise;
extern struct SongHeader se_contest_curtain_fall;
extern struct SongHeader se_contest_icon_change;
extern struct SongHeader se_contest_icon_clear;
extern struct SongHeader se_contest_mons_turn;
extern struct SongHeader se_shiny;
extern struct SongHeader se_intro_blast;
extern struct SongHeader se_mugshot;
extern struct SongHeader se_applause;
extern struct SongHeader se_vend;
extern struct SongHeader se_orb;
extern struct SongHeader se_dex_scroll;
extern struct SongHeader se_dex_page;
extern struct SongHeader se_pokenav_on;
extern struct SongHeader se_pokenav_off;
extern struct SongHeader se_dex_search;
extern struct SongHeader se_egg_hatch;
extern struct SongHeader se_ball_tray_enter;
extern struct SongHeader se_ball_tray_ball;
extern struct SongHeader se_ball_tray_exit;
extern struct SongHeader se_glass_flute;
extern struct SongHeader se_m_thunderbolt;
extern struct SongHeader se_m_thunderbolt2;
extern struct SongHeader se_m_harden;
extern struct SongHeader se_m_nightmare;
extern struct SongHeader se_m_vital_throw;
extern struct SongHeader se_m_vital_throw2;
extern struct SongHeader se_m_bubble;
extern struct SongHeader se_m_bubble2;
extern struct SongHeader se_m_bubble3;
extern struct SongHeader se_m_rain_dance;
extern struct SongHeader se_m_cut;
extern struct SongHeader se_m_string_shot;
extern struct SongHeader se_m_string_shot2;
extern struct SongHeader se_m_rock_throw;
extern struct SongHeader se_m_gust;
extern struct SongHeader se_m_gust2;
extern struct SongHeader se_m_double_slap;
extern struct SongHeader se_m_double_team;
extern struct SongHeader se_m_razor_wind;
extern struct SongHeader se_m_icy_wind;
extern struct SongHeader se_m_thunder_wave;
extern struct SongHeader se_m_comet_punch;
extern struct SongHeader se_m_mega_kick;
extern struct SongHeader se_m_mega_kick2;
extern struct SongHeader se_m_crabhammer;
extern struct SongHeader se_m_jump_kick;
extern struct SongHeader se_m_flame_wheel;
extern struct SongHeader se_m_flame_wheel2;
extern struct SongHeader se_m_flamethrower;
extern struct SongHeader se_m_fire_punch;
extern struct SongHeader se_m_toxic;
extern struct SongHeader se_m_sacred_fire;
extern struct SongHeader se_m_sacred_fire2;
extern struct SongHeader se_m_ember;
extern struct SongHeader se_m_take_down;
extern struct SongHeader se_m_blizzard;
extern struct SongHeader se_m_blizzard2;
extern struct SongHeader se_m_scratch;
extern struct SongHeader se_m_vicegrip;
extern struct SongHeader se_m_wing_attack;
extern struct SongHeader se_m_fly;
extern struct SongHeader se_m_sand_attack;
extern struct SongHeader se_m_razor_wind2;
extern struct SongHeader se_m_bite;
extern struct SongHeader se_m_headbutt;
extern struct SongHeader se_m_surf;
extern struct SongHeader se_m_hydro_pump;
extern struct SongHeader se_m_whirlpool;
extern struct SongHeader se_m_horn_attack;
extern struct SongHeader se_m_tail_whip;
extern struct SongHeader se_m_mist;
extern struct SongHeader se_m_poison_powder;
extern struct SongHeader se_m_bind;
extern struct SongHeader se_m_dragon_rage;
extern struct SongHeader se_m_sing;
extern struct SongHeader se_m_perish_song;
extern struct SongHeader se_m_pay_day;
extern struct SongHeader se_m_dig;
extern struct SongHeader se_m_dizzy_punch;
extern struct SongHeader se_m_self_destruct;
extern struct SongHeader se_m_explosion;
extern struct SongHeader se_m_absorb_2;
extern struct SongHeader se_m_absorb;
extern struct SongHeader se_m_screech;
extern struct SongHeader se_m_bubble_beam;
extern struct SongHeader se_m_bubble_beam2;
extern struct SongHeader se_m_supersonic;
extern struct SongHeader se_m_belly_drum;
extern struct SongHeader se_m_metronome;
extern struct SongHeader se_m_bonemerang;
extern struct SongHeader se_m_lick;
extern struct SongHeader se_m_psybeam;
extern struct SongHeader se_m_faint_attack;
extern struct SongHeader se_m_swords_dance;
extern struct SongHeader se_m_leer;
extern struct SongHeader se_m_swagger;
extern struct SongHeader se_m_swagger2;
extern struct SongHeader se_m_heal_bell;
extern struct SongHeader se_m_confuse_ray;
extern struct SongHeader se_m_snore;
extern struct SongHeader se_m_brick_break;
extern struct SongHeader se_m_giga_drain;
extern struct SongHeader se_m_psybeam2;
extern struct SongHeader se_m_solar_beam;
extern struct SongHeader se_m_petal_dance;
extern struct SongHeader se_m_teleport;
extern struct SongHeader se_m_minimize;
extern struct SongHeader se_m_sketch;
extern struct SongHeader se_m_swift;
extern struct SongHeader se_m_reflect;
extern struct SongHeader se_m_barrier;
extern struct SongHeader se_m_detect;
extern struct SongHeader se_m_lock_on;
extern struct SongHeader se_m_moonlight;
extern struct SongHeader se_m_charm;
extern struct SongHeader se_m_charge;
extern struct SongHeader se_m_strength;
extern struct SongHeader se_m_hyper_beam;
extern struct SongHeader se_m_waterfall;
extern struct SongHeader se_m_reversal;
extern struct SongHeader se_m_acid_armor;
extern struct SongHeader se_m_sandstorm;
extern struct SongHeader se_m_tri_attack;
extern struct SongHeader se_m_tri_attack2;
extern struct SongHeader se_m_encore;
extern struct SongHeader se_m_encore2;
extern struct SongHeader se_m_baton_pass;
extern struct SongHeader se_m_milk_drink;
extern struct SongHeader se_m_attract;
extern struct SongHeader se_m_attract2;
extern struct SongHeader se_m_morning_sun;
extern struct SongHeader se_m_flatter;
extern struct SongHeader se_m_sand_tomb;
extern struct SongHeader se_m_grasswhistle;
extern struct SongHeader se_m_spit_up;
extern struct SongHeader se_m_dive;
extern struct SongHeader se_m_earthquake;
extern struct SongHeader se_m_twister;
extern struct SongHeader se_m_sweet_scent;
extern struct SongHeader se_m_yawn;
extern struct SongHeader se_m_sky_uppercut;
extern struct SongHeader se_m_stat_increase;
extern struct SongHeader se_m_heat_wave;
extern struct SongHeader se_m_uproar;
extern struct SongHeader se_m_hail;
extern struct SongHeader se_m_cosmic_power;
extern struct SongHeader se_m_teeter_dance;
extern struct SongHeader se_m_stat_decrease;
extern struct SongHeader se_m_haze;
extern struct SongHeader se_m_hyper_beam2;
extern struct SongHeader se_rg_door;
extern struct SongHeader se_rg_card_flip;
extern struct SongHeader se_rg_card_flipping;
extern struct SongHeader se_rg_card_open;
extern struct SongHeader se_rg_bag_cursor;
extern struct SongHeader se_rg_bag_pocket;
extern struct SongHeader se_rg_ball_click;
extern struct SongHeader se_rg_shop;
extern struct SongHeader se_rg_ss_anne_horn;
extern struct SongHeader se_rg_help_open;
extern struct SongHeader se_rg_help_close;
extern struct SongHeader se_rg_help_error;
extern struct SongHeader se_rg_deoxys_move;
extern struct SongHeader se_rg_poke_jump_success;
extern struct SongHeader se_rg_poke_jump_failure;
extern struct SongHeader se_pokenav_call;
extern struct SongHeader se_pokenav_hang_up;
extern struct SongHeader se_arena_timeup1;
extern struct SongHeader se_arena_timeup2;
extern struct SongHeader se_pike_curtain_close;
extern struct SongHeader se_pike_curtain_open;
extern struct SongHeader se_sudowoodo_shake;
// extern struct SongHeader dummy_song_header; // Already defined below as const
extern struct SongHeader mus_littleroot_test;
extern struct SongHeader mus_gsc_route38;
extern struct SongHeader mus_caught;
extern struct SongHeader mus_victory_wild;
extern struct SongHeader mus_victory_gym_leader;
extern struct SongHeader mus_victory_league;
extern struct SongHeader mus_c_comm_center;
extern struct SongHeader mus_gsc_pewter;
extern struct SongHeader mus_c_vs_legend_beast;
extern struct SongHeader mus_route101;
extern struct SongHeader mus_route110;
extern struct SongHeader mus_route120;
extern struct SongHeader mus_petalburg;
extern struct SongHeader mus_oldale;
extern struct SongHeader mus_gym;
extern struct SongHeader mus_surf;
extern struct SongHeader mus_petalburg_woods;
extern struct SongHeader mus_level_up;
extern struct SongHeader mus_heal;
extern struct SongHeader mus_obtain_badge;
extern struct SongHeader mus_obtain_item;
extern struct SongHeader mus_evolved;
extern struct SongHeader mus_obtain_tmhm;
extern struct SongHeader mus_lilycove_museum;
extern struct SongHeader mus_route122;
extern struct SongHeader mus_oceanic_museum;
extern struct SongHeader mus_evolution_intro;
extern struct SongHeader mus_evolution;
extern struct SongHeader mus_move_deleted;
extern struct SongHeader mus_encounter_girl;
extern struct SongHeader mus_encounter_male;
extern struct SongHeader mus_abandoned_ship;
extern struct SongHeader mus_fortree;
extern struct SongHeader mus_birch_lab;
extern struct SongHeader mus_b_tower_rs;
extern struct SongHeader mus_encounter_swimmer;
extern struct SongHeader mus_cave_of_origin;
extern struct SongHeader mus_obtain_berry;
extern struct SongHeader mus_awaken_legend;
extern struct SongHeader mus_slots_jackpot;
extern struct SongHeader mus_slots_win;
extern struct SongHeader mus_too_bad;
extern struct SongHeader mus_roulette;
extern struct SongHeader mus_link_contest_p1;
extern struct SongHeader mus_link_contest_p2;
extern struct SongHeader mus_link_contest_p3;
extern struct SongHeader mus_link_contest_p4;
extern struct SongHeader mus_encounter_rich;
extern struct SongHeader mus_verdanturf;
extern struct SongHeader mus_rustboro;
extern struct SongHeader mus_poke_center;
extern struct SongHeader mus_route104;
extern struct SongHeader mus_route119;
extern struct SongHeader mus_cycling;
extern struct SongHeader mus_poke_mart;
extern struct SongHeader mus_littleroot;
extern struct SongHeader mus_mt_chimney;
extern struct SongHeader mus_encounter_female;
extern struct SongHeader mus_lilycove;
extern struct SongHeader mus_route111;
extern struct SongHeader mus_help;
extern struct SongHeader mus_underwater;
extern struct SongHeader mus_victory_trainer;
extern struct SongHeader mus_title;
extern struct SongHeader mus_intro;
extern struct SongHeader mus_encounter_may;
extern struct SongHeader mus_encounter_intense;
extern struct SongHeader mus_encounter_cool;
extern struct SongHeader mus_route113;
extern struct SongHeader mus_encounter_aqua;
extern struct SongHeader mus_follow_me;
extern struct SongHeader mus_encounter_brendan;
extern struct SongHeader mus_ever_grande;
extern struct SongHeader mus_encounter_suspicious;
extern struct SongHeader mus_victory_aqua_magma;
extern struct SongHeader mus_cable_car;
extern struct SongHeader mus_game_corner;
extern struct SongHeader mus_dewford;
extern struct SongHeader mus_safari_zone;
extern struct SongHeader mus_victory_road;
extern struct SongHeader mus_aqua_magma_hideout;
extern struct SongHeader mus_sailing;
extern struct SongHeader mus_mt_pyre;
extern struct SongHeader mus_slateport;
extern struct SongHeader mus_mt_pyre_exterior;
extern struct SongHeader mus_school;
extern struct SongHeader mus_hall_of_fame;
extern struct SongHeader mus_fallarbor;
extern struct SongHeader mus_sealed_chamber;
extern struct SongHeader mus_contest_winner;
extern struct SongHeader mus_contest;
extern struct SongHeader mus_encounter_magma;
extern struct SongHeader mus_intro_battle;
extern struct SongHeader mus_abnormal_weather;
extern struct SongHeader mus_weather_groudon;
extern struct SongHeader mus_sootopolis;
extern struct SongHeader mus_contest_results;
extern struct SongHeader mus_hall_of_fame_room;
extern struct SongHeader mus_trick_house;
extern struct SongHeader mus_encounter_twins;
extern struct SongHeader mus_encounter_elite_four;
extern struct SongHeader mus_encounter_hiker;
extern struct SongHeader mus_contest_lobby;
extern struct SongHeader mus_encounter_interviewer;
extern struct SongHeader mus_encounter_champion;
extern struct SongHeader mus_credits;
extern struct SongHeader mus_end;
extern struct SongHeader mus_b_frontier;
extern struct SongHeader mus_b_arena;
extern struct SongHeader mus_obtain_b_points;
extern struct SongHeader mus_register_match_call;
extern struct SongHeader mus_b_pyramid;
extern struct SongHeader mus_b_pyramid_top;
extern struct SongHeader mus_b_palace;
extern struct SongHeader mus_rayquaza_appears;
extern struct SongHeader mus_b_tower;
extern struct SongHeader mus_obtain_symbol;
extern struct SongHeader mus_b_dome;
extern struct SongHeader mus_b_pike;
extern struct SongHeader mus_b_factory;
extern struct SongHeader mus_vs_rayquaza;
extern struct SongHeader mus_vs_frontier_brain;
extern struct SongHeader mus_vs_mew;
extern struct SongHeader mus_b_dome_lobby;
extern struct SongHeader mus_vs_wild;
extern struct SongHeader mus_vs_aqua_magma;
extern struct SongHeader mus_vs_trainer;
extern struct SongHeader mus_vs_gym_leader;
extern struct SongHeader mus_vs_champion;
extern struct SongHeader mus_vs_regi;
extern struct SongHeader mus_vs_kyogre_groudon;
extern struct SongHeader mus_vs_rival;
extern struct SongHeader mus_vs_elite_four;
extern struct SongHeader mus_vs_aqua_magma_leader;
extern struct SongHeader mus_rg_follow_me;
extern struct SongHeader mus_rg_game_corner;
extern struct SongHeader mus_rg_rocket_hideout;
extern struct SongHeader mus_rg_gym;
extern struct SongHeader mus_rg_jigglypuff;
extern struct SongHeader mus_rg_intro_fight;
extern struct SongHeader mus_rg_title;
extern struct SongHeader mus_rg_cinnabar;
extern struct SongHeader mus_rg_lavender;
extern struct SongHeader mus_rg_heal;
extern struct SongHeader mus_rg_cycling;
extern struct SongHeader mus_rg_encounter_rocket;
extern struct SongHeader mus_rg_encounter_girl;
extern struct SongHeader mus_rg_encounter_boy;
extern struct SongHeader mus_rg_hall_of_fame;
extern struct SongHeader mus_rg_viridian_forest;
extern struct SongHeader mus_rg_mt_moon;
extern struct SongHeader mus_rg_poke_mansion;
extern struct SongHeader mus_rg_credits;
extern struct SongHeader mus_rg_route1;
extern struct SongHeader mus_rg_route24;
extern struct SongHeader mus_rg_route3;
extern struct SongHeader mus_rg_route11;
extern struct SongHeader mus_rg_victory_road;
extern struct SongHeader mus_rg_vs_gym_leader;
extern struct SongHeader mus_rg_vs_trainer;
extern struct SongHeader mus_rg_vs_wild;
extern struct SongHeader mus_rg_vs_champion;
extern struct SongHeader mus_rg_pallet;
extern struct SongHeader mus_rg_oak_lab;
extern struct SongHeader mus_rg_oak;
extern struct SongHeader mus_rg_poke_center;
extern struct SongHeader mus_rg_ss_anne;
extern struct SongHeader mus_rg_surf;
extern struct SongHeader mus_rg_poke_tower;
extern struct SongHeader mus_rg_silph;
extern struct SongHeader mus_rg_fuchsia;
extern struct SongHeader mus_rg_celadon;
extern struct SongHeader mus_rg_victory_trainer;
extern struct SongHeader mus_rg_victory_wild;
extern struct SongHeader mus_rg_victory_gym_leader;
extern struct SongHeader mus_rg_vermillion;
extern struct SongHeader mus_rg_pewter;
extern struct SongHeader mus_rg_encounter_rival;
extern struct SongHeader mus_rg_rival_exit;
extern struct SongHeader mus_rg_dex_rating;
extern struct SongHeader mus_rg_obtain_key_item;
extern struct SongHeader mus_rg_caught_intro;
extern struct SongHeader mus_rg_photo;
extern struct SongHeader mus_rg_game_freak;
extern struct SongHeader mus_rg_caught;
extern struct SongHeader mus_rg_new_game_instruct;
extern struct SongHeader mus_rg_new_game_intro;
extern struct SongHeader mus_rg_new_game_exit;
extern struct SongHeader mus_rg_poke_jump;
extern struct SongHeader mus_rg_union_room;
extern struct SongHeader mus_rg_net_center;
extern struct SongHeader mus_rg_mystery_gift;
extern struct SongHeader mus_rg_berry_pick;
extern struct SongHeader mus_rg_sevii_cave;
extern struct SongHeader mus_rg_teachy_tv_show;
extern struct SongHeader mus_rg_sevii_route;
extern struct SongHeader mus_rg_sevii_dungeon;
extern struct SongHeader mus_rg_sevii_123;
extern struct SongHeader mus_rg_sevii_45;
extern struct SongHeader mus_rg_sevii_67;
extern struct SongHeader mus_rg_poke_flute;
extern struct SongHeader mus_rg_vs_deoxys;
extern struct SongHeader mus_rg_vs_mewtwo;
extern struct SongHeader mus_rg_vs_legend;
extern struct SongHeader mus_rg_encounter_gym_leader;
extern struct SongHeader mus_rg_encounter_deoxys;
extern struct SongHeader mus_rg_trainer_tower;
extern struct SongHeader mus_rg_slow_pallet;
extern struct SongHeader mus_rg_teachy_tv_menu;
extern struct SongHeader ph_trap_blend;
extern struct SongHeader ph_trap_held;
extern struct SongHeader ph_trap_solo;
extern struct SongHeader ph_face_blend;
extern struct SongHeader ph_face_held;
extern struct SongHeader ph_face_solo;
extern struct SongHeader ph_cloth_blend;
extern struct SongHeader ph_cloth_held;
extern struct SongHeader ph_cloth_solo;
extern struct SongHeader ph_dress_blend;
extern struct SongHeader ph_dress_held;
extern struct SongHeader ph_dress_solo;
extern struct SongHeader ph_fleece_blend;
extern struct SongHeader ph_fleece_held;
extern struct SongHeader ph_fleece_solo;
extern struct SongHeader ph_kit_blend;
extern struct SongHeader ph_kit_held;
extern struct SongHeader ph_kit_solo;
extern struct SongHeader ph_price_blend;
extern struct SongHeader ph_price_held;
extern struct SongHeader ph_price_solo;
extern struct SongHeader ph_lot_blend;
extern struct SongHeader ph_lot_held;
extern struct SongHeader ph_lot_solo;
extern struct SongHeader ph_goat_blend;
extern struct SongHeader ph_goat_held;
extern struct SongHeader ph_goat_solo;
extern struct SongHeader ph_thought_blend;
extern struct SongHeader ph_thought_held;
extern struct SongHeader ph_thought_solo;
extern struct SongHeader ph_choice_blend;
extern struct SongHeader ph_choice_held;
extern struct SongHeader ph_choice_solo;
extern struct SongHeader ph_mouth_blend;
extern struct SongHeader ph_mouth_held;
extern struct SongHeader ph_mouth_solo;
extern struct SongHeader ph_foot_blend;
extern struct SongHeader ph_foot_held;
extern struct SongHeader ph_foot_solo;
extern struct SongHeader ph_goose_blend;
extern struct SongHeader ph_goose_held;
extern struct SongHeader ph_goose_solo;
extern struct SongHeader ph_strut_blend;
extern struct SongHeader ph_strut_held;
extern struct SongHeader ph_strut_solo;
extern struct SongHeader ph_cure_blend;
extern struct SongHeader ph_cure_held;
extern struct SongHeader ph_cure_solo;
extern struct SongHeader ph_nurse_blend;
extern struct SongHeader ph_nurse_held;
extern struct SongHeader ph_nurse_solo;

const u8 gCgb3Vol[] ALIGNED(8) = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
};

const struct PokemonCrySong gPokemonCrySongTemplate ALIGNED(8) = {
    .trackCount = 1,
    .priority = 0x80,
    .part0 = 0x80,
    .gotoCmd = 0xBD,
    .part1 = 0x80,
    .volCmd = 0xBE,
    .unkCmd0D = {0x0D, 0x00},
    .xreleCmd = {0xBB, 0x00},
    .panCmd = 0xBD,
    .tieCmd = 0x90,
    .tieVelocityValue = 0x7F,
    .unkCmd0C = {0x0C, 0x00},
    .end = {0xB1, 0x00}
};

const struct SongHeader dummy_song_header = {
    .trackCount = 0,
    .blockCount = 0,
    .priority = 0,
    .reverb = 0,
    .tone = NULL,
    .part = {NULL}
};

const u8 gCgbScaleTable[] ALIGNED(8) = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B,
    0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC
};

const s16 gCgbFreqTable[] ALIGNED(8) = {
    -2048, -1933, -1824, -1722, -1625, -1534, -1448, -1367, -1290, -1290, -1217, -1149, -1085, -1024
};

const u8 gNoiseTable[] ALIGNED(8) = {
    0x3F, 0x3E, 0x3D, 0x3C, 0x3B, 0x3A, 0x39, 0x38, 0x2F, 0x2E, 0x2D, 0x2C, 0x2B, 0x2A, 0x29, 0x28,
    0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x0F, 0x0E, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08,
    0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const u8 gScaleTable[] ALIGNED(8) = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B,
    0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B,
    0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B,
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B,
    0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B,
    0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB
};

const u32 gFreqTable[] ALIGNED(8) = {
    0x00000100, 0x0000010F, 0x0000011F, 0x00000130, 0x00000142, 0x00000155,
    0x0000016A, 0x00000180, 0x00000197, 0x000001AF, 0x000001C9, 0x000001E4,
    0x00000200, 0x0000021E, 0x0000023E, 0x00000260, 0x00000284, 0x000002AA,
    0x000002D4, 0x00000300, 0x0000032F, 0x0000035F, 0x00000392, 0x000003C8
};

// Clock table
const u8 gClockTable[] ALIGNED(8) = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 28, 30, 32, 36, 40, 42, 44,
    48, 52, 54, 56, 60, 64, 66, 68, 72, 76,
    78, 80, 84, 88, 90, 92, 96
};

// Extended command table
const XcmdFunc gXcmdTable[] ALIGNED(8) = {
    ply_xxx,
    ply_xwave,
    ply_xtype,
    ply_xatta,
    ply_xdeca,
    ply_xsust,
    ply_xrele,
    ply_xiecv,
    ply_xiecl,
    ply_xleng,
    ply_xswee,
    ply_xxx,
    ply_xcmd_0C,
    ply_xcmd_0D
};

// Music Player Tables
struct MusicPlayer gMPlayTable[] ALIGNED(8) = {
    { &gMPlayInfo_BGM, gMPlayTrack_BGM, 16, 0 },
    { &gMPlayInfo_SE1, gMPlayTrack_SE1, 2, 0 },
    { &gMPlayInfo_SE2, gMPlayTrack_SE2, 2, 0 },
    { &gMPlayInfo_SE3, gMPlayTrack_SE3, 1, 0 },
};

// Song Table
struct Song gSongTable[] ALIGNED(8) = {
    { (struct SongHeader *)&mus_dummy, 0, 0 },
    { (struct SongHeader *)&se_use_item, 1, 1 },
    { (struct SongHeader *)&se_pc_login, 1, 1 },
    { (struct SongHeader *)&se_pc_off, 1, 1 },
    { (struct SongHeader *)&se_pc_on, 1, 1 },
    { (struct SongHeader *)&se_select, 2, 2 },
    { (struct SongHeader *)&se_win_open, 1, 1 },
    { (struct SongHeader *)&se_wall_hit, 2, 2 },
    { (struct SongHeader *)&se_door, 1, 1 },
    { (struct SongHeader *)&se_exit, 1, 1 },
    { (struct SongHeader *)&se_ledge, 1, 1 },
    { (struct SongHeader *)&se_bike_bell, 1, 1 },
    { (struct SongHeader *)&se_not_effective, 1, 1 },
    { (struct SongHeader *)&se_effective, 1, 1 },
    { (struct SongHeader *)&se_super_effective, 1, 1 },
    { (struct SongHeader *)&se_ball_open, 1, 1 },
    { (struct SongHeader *)&se_faint, 1, 1 },
    { (struct SongHeader *)&se_flee, 1, 1 },
    { (struct SongHeader *)&se_sliding_door, 1, 1 },
    { (struct SongHeader *)&se_ship, 1, 1 },
    { (struct SongHeader *)&se_bang, 1, 1 },
    { (struct SongHeader *)&se_pin, 1, 1 },
    { (struct SongHeader *)&se_boo, 1, 1 },
    { (struct SongHeader *)&se_ball, 1, 1 },
    { (struct SongHeader *)&se_contest_place, 2, 2 },
    { (struct SongHeader *)&se_a, 1, 1 },
    { (struct SongHeader *)&se_i, 1, 1 },
    { (struct SongHeader *)&se_u, 1, 1 },
    { (struct SongHeader *)&se_e, 1, 1 },
    { (struct SongHeader *)&se_o, 1, 1 },
    { (struct SongHeader *)&se_n, 1, 1 },
    { (struct SongHeader *)&se_success, 1, 1 },
    { (struct SongHeader *)&se_failure, 1, 1 },
    { (struct SongHeader *)&se_exp, 1, 1 },
    { (struct SongHeader *)&se_bike_hop, 1, 1 },
    { (struct SongHeader *)&se_switch, 1, 1 },
    { (struct SongHeader *)&se_click, 1, 1 },
    { (struct SongHeader *)&se_fu_zaku, 1, 1 },
    { (struct SongHeader *)&se_contest_condition_lose, 1, 1 },
    { (struct SongHeader *)&se_lavaridge_fall_warp, 1, 1 },
    { (struct SongHeader *)&se_ice_stairs, 1, 1 },
    { (struct SongHeader *)&se_ice_break, 1, 1 },
    { (struct SongHeader *)&se_ice_crack, 1, 1 },
    { (struct SongHeader *)&se_fall, 1, 1 },
    { (struct SongHeader *)&se_unlock, 2, 2 },
    { (struct SongHeader *)&se_warp_in, 1, 1 },
    { (struct SongHeader *)&se_warp_out, 1, 1 },
    { (struct SongHeader *)&se_repel, 1, 1 },
    { (struct SongHeader *)&se_rotating_gate, 1, 1 },
    { (struct SongHeader *)&se_truck_move, 1, 1 },
    { (struct SongHeader *)&se_truck_stop, 1, 1 },
    { (struct SongHeader *)&se_truck_unload, 2, 2 },
    { (struct SongHeader *)&se_truck_door, 1, 1 },
    { (struct SongHeader *)&se_berry_blender, 2, 2 },
    { (struct SongHeader *)&se_card, 1, 1 },
    { (struct SongHeader *)&se_save, 1, 1 },
    { (struct SongHeader *)&se_ball_bounce_1, 1, 1 },
    { (struct SongHeader *)&se_ball_bounce_2, 1, 1 },
    { (struct SongHeader *)&se_ball_bounce_3, 1, 1 },
    { (struct SongHeader *)&se_ball_bounce_4, 1, 1 },
    { (struct SongHeader *)&se_ball_trade, 2, 2 },
    { (struct SongHeader *)&se_ball_throw, 1, 1 },
    { (struct SongHeader *)&se_note_c, 2, 2 },
    { (struct SongHeader *)&se_note_d, 2, 2 },
    { (struct SongHeader *)&se_note_e, 2, 2 },
    { (struct SongHeader *)&se_note_f, 2, 2 },
    { (struct SongHeader *)&se_note_g, 2, 2 },
    { (struct SongHeader *)&se_note_a, 2, 2 },
    { (struct SongHeader *)&se_note_b, 2, 2 },
    { (struct SongHeader *)&se_note_c_high, 2, 2 },
    { (struct SongHeader *)&se_puddle, 2, 2 },
    { (struct SongHeader *)&se_bridge_walk, 2, 2 },
    { (struct SongHeader *)&se_itemfinder, 1, 1 },
    { (struct SongHeader *)&se_ding_dong, 1, 1 },
    { (struct SongHeader *)&se_balloon_red, 2, 2 },
    { (struct SongHeader *)&se_balloon_blue, 2, 2 },
    { (struct SongHeader *)&se_balloon_yellow, 2, 2 },
    { (struct SongHeader *)&se_breakable_door, 2, 2 },
    { (struct SongHeader *)&se_mud_ball, 2, 2 },
    { (struct SongHeader *)&se_field_poison, 1, 1 },
    { (struct SongHeader *)&se_escalator, 1, 1 },
    { (struct SongHeader *)&se_thunderstorm, 3, 3 },
    { (struct SongHeader *)&se_thunderstorm_stop, 3, 3 },
    { (struct SongHeader *)&se_downpour, 3, 3 },
    { (struct SongHeader *)&se_downpour_stop, 3, 3 },
    { (struct SongHeader *)&se_rain, 3, 3 },
    { (struct SongHeader *)&se_rain_stop, 3, 3 },
    { (struct SongHeader *)&se_thunder, 1, 1 },
    { (struct SongHeader *)&se_thunder2, 1, 1 },
    { (struct SongHeader *)&se_elevator, 1, 1 },
    { (struct SongHeader *)&se_low_health, 3, 3 },
    { (struct SongHeader *)&se_exp_max, 1, 1 },
    { (struct SongHeader *)&se_roulette_ball, 2, 2 },
    { (struct SongHeader *)&se_roulette_ball2, 2, 2 },
    { (struct SongHeader *)&se_taillow_wing_flap, 1, 1 },
    { (struct SongHeader *)&se_shop, 1, 1 },
    { (struct SongHeader *)&se_contest_heart, 1, 1 },
    { (struct SongHeader *)&se_contest_curtain_rise, 1, 1 },
    { (struct SongHeader *)&se_contest_curtain_fall, 1, 1 },
    { (struct SongHeader *)&se_contest_icon_change, 1, 1 },
    { (struct SongHeader *)&se_contest_icon_clear, 1, 1 },
    { (struct SongHeader *)&se_contest_mons_turn, 1, 1 },
    { (struct SongHeader *)&se_shiny, 1, 1 },
    { (struct SongHeader *)&se_intro_blast, 1, 1 },
    { (struct SongHeader *)&se_mugshot, 1, 1 },
    { (struct SongHeader *)&se_applause, 1, 1 },
    { (struct SongHeader *)&se_vend, 1, 1 },
    { (struct SongHeader *)&se_orb, 1, 1 },
    { (struct SongHeader *)&se_dex_scroll, 1, 1 },
    { (struct SongHeader *)&se_dex_page, 1, 1 },
    { (struct SongHeader *)&se_pokenav_on, 1, 1 },
    { (struct SongHeader *)&se_pokenav_off, 1, 1 },
    { (struct SongHeader *)&se_dex_search, 1, 1 },
    { (struct SongHeader *)&se_egg_hatch, 1, 1 },
    { (struct SongHeader *)&se_ball_tray_enter, 1, 1 },
    { (struct SongHeader *)&se_ball_tray_ball, 1, 1 },
    { (struct SongHeader *)&se_ball_tray_exit, 2, 2 },
    { (struct SongHeader *)&se_glass_flute, 1, 1 },
    { (struct SongHeader *)&se_m_thunderbolt, 2, 2 },
    { (struct SongHeader *)&se_m_thunderbolt2, 1, 1 },
    { (struct SongHeader *)&se_m_harden, 1, 1 },
    { (struct SongHeader *)&se_m_nightmare, 1, 1 },
    { (struct SongHeader *)&se_m_vital_throw, 1, 1 },
    { (struct SongHeader *)&se_m_vital_throw2, 1, 1 },
    { (struct SongHeader *)&se_m_bubble, 1, 1 },
    { (struct SongHeader *)&se_m_bubble2, 1, 1 },
    { (struct SongHeader *)&se_m_bubble3, 1, 1 },
    { (struct SongHeader *)&se_m_rain_dance, 1, 1 },
    { (struct SongHeader *)&se_m_cut, 1, 1 },
    { (struct SongHeader *)&se_m_string_shot, 1, 1 },
    { (struct SongHeader *)&se_m_string_shot2, 1, 1 },
    { (struct SongHeader *)&se_m_rock_throw, 1, 1 },
    { (struct SongHeader *)&se_m_gust, 2, 2 },
    { (struct SongHeader *)&se_m_gust2, 2, 2 },
    { (struct SongHeader *)&se_m_double_slap, 1, 1 },
    { (struct SongHeader *)&se_m_double_team, 1, 1 },
    { (struct SongHeader *)&se_m_razor_wind, 1, 1 },
    { (struct SongHeader *)&se_m_icy_wind, 1, 1 },
    { (struct SongHeader *)&se_m_thunder_wave, 1, 1 },
    { (struct SongHeader *)&se_m_comet_punch, 1, 1 },
    { (struct SongHeader *)&se_m_mega_kick, 1, 1 },
    { (struct SongHeader *)&se_m_mega_kick2, 1, 1 },
    { (struct SongHeader *)&se_m_crabhammer, 1, 1 },
    { (struct SongHeader *)&se_m_jump_kick, 1, 1 },
    { (struct SongHeader *)&se_m_flame_wheel, 1, 1 },
    { (struct SongHeader *)&se_m_flame_wheel2, 1, 1 },
    { (struct SongHeader *)&se_m_flamethrower, 1, 1 },
    { (struct SongHeader *)&se_m_fire_punch, 1, 1 },
    { (struct SongHeader *)&se_m_toxic, 1, 1 },
    { (struct SongHeader *)&se_m_sacred_fire, 1, 1 },
    { (struct SongHeader *)&se_m_sacred_fire2, 2, 2 },
    { (struct SongHeader *)&se_m_ember, 1, 1 },
    { (struct SongHeader *)&se_m_take_down, 2, 2 },
    { (struct SongHeader *)&se_m_blizzard, 1, 1 },
    { (struct SongHeader *)&se_m_blizzard2, 1, 1 },
    { (struct SongHeader *)&se_m_scratch, 1, 1 },
    { (struct SongHeader *)&se_m_vicegrip, 1, 1 },
    { (struct SongHeader *)&se_m_wing_attack, 1, 1 },
    { (struct SongHeader *)&se_m_fly, 1, 1 },
    { (struct SongHeader *)&se_m_sand_attack, 1, 1 },
    { (struct SongHeader *)&se_m_razor_wind2, 1, 1 },
    { (struct SongHeader *)&se_m_bite, 1, 1 },
    { (struct SongHeader *)&se_m_headbutt, 1, 1 },
    { (struct SongHeader *)&se_m_surf, 1, 1 },
    { (struct SongHeader *)&se_m_hydro_pump, 1, 1 },
    { (struct SongHeader *)&se_m_whirlpool, 1, 1 },
    { (struct SongHeader *)&se_m_horn_attack, 1, 1 },
    { (struct SongHeader *)&se_m_tail_whip, 2, 2 },
    { (struct SongHeader *)&se_m_mist, 1, 1 },
    { (struct SongHeader *)&se_m_poison_powder, 1, 1 },
    { (struct SongHeader *)&se_m_bind, 2, 2 },
    { (struct SongHeader *)&se_m_dragon_rage, 1, 1 },
    { (struct SongHeader *)&se_m_sing, 1, 1 },
    { (struct SongHeader *)&se_m_perish_song, 1, 1 },
    { (struct SongHeader *)&se_m_pay_day, 1, 1 },
    { (struct SongHeader *)&se_m_dig, 1, 1 },
    { (struct SongHeader *)&se_m_dizzy_punch, 1, 1 },
    { (struct SongHeader *)&se_m_self_destruct, 1, 1 },
    { (struct SongHeader *)&se_m_explosion, 1, 1 },
    { (struct SongHeader *)&se_m_absorb_2, 1, 1 },
    { (struct SongHeader *)&se_m_absorb, 1, 1 },
    { (struct SongHeader *)&se_m_screech, 1, 1 },
    { (struct SongHeader *)&se_m_bubble_beam, 1, 1 },
    { (struct SongHeader *)&se_m_bubble_beam2, 1, 1 },
    { (struct SongHeader *)&se_m_supersonic, 1, 1 },
    { (struct SongHeader *)&se_m_belly_drum, 1, 1 },
    { (struct SongHeader *)&se_m_metronome, 1, 1 },
    { (struct SongHeader *)&se_m_bonemerang, 1, 1 },
    { (struct SongHeader *)&se_m_lick, 1, 1 },
    { (struct SongHeader *)&se_m_psybeam, 1, 1 },
    { (struct SongHeader *)&se_m_faint_attack, 1, 1 },
    { (struct SongHeader *)&se_m_swords_dance, 1, 1 },
    { (struct SongHeader *)&se_m_leer, 1, 1 },
    { (struct SongHeader *)&se_m_swagger, 1, 1 },
    { (struct SongHeader *)&se_m_swagger2, 1, 1 },
    { (struct SongHeader *)&se_m_heal_bell, 1, 1 },
    { (struct SongHeader *)&se_m_confuse_ray, 1, 1 },
    { (struct SongHeader *)&se_m_snore, 1, 1 },
    { (struct SongHeader *)&se_m_brick_break, 1, 1 },
    { (struct SongHeader *)&se_m_giga_drain, 1, 1 },
    { (struct SongHeader *)&se_m_psybeam2, 1, 1 },
    { (struct SongHeader *)&se_m_solar_beam, 2, 2 },
    { (struct SongHeader *)&se_m_petal_dance, 1, 1 },
    { (struct SongHeader *)&se_m_teleport, 1, 1 },
    { (struct SongHeader *)&se_m_minimize, 1, 1 },
    { (struct SongHeader *)&se_m_sketch, 1, 1 },
    { (struct SongHeader *)&se_m_swift, 1, 1 },
    { (struct SongHeader *)&se_m_reflect, 1, 1 },
    { (struct SongHeader *)&se_m_barrier, 1, 1 },
    { (struct SongHeader *)&se_m_detect, 2, 2 },
    { (struct SongHeader *)&se_m_lock_on, 1, 1 },
    { (struct SongHeader *)&se_m_moonlight, 1, 1 },
    { (struct SongHeader *)&se_m_charm, 1, 1 },
    { (struct SongHeader *)&se_m_charge, 1, 1 },
    { (struct SongHeader *)&se_m_strength, 1, 1 },
    { (struct SongHeader *)&se_m_hyper_beam, 1, 1 },
    { (struct SongHeader *)&se_m_waterfall, 1, 1 },
    { (struct SongHeader *)&se_m_reversal, 1, 1 },
    { (struct SongHeader *)&se_m_acid_armor, 1, 1 },
    { (struct SongHeader *)&se_m_sandstorm, 1, 1 },
    { (struct SongHeader *)&se_m_tri_attack, 1, 1 },
    { (struct SongHeader *)&se_m_tri_attack2, 1, 1 },
    { (struct SongHeader *)&se_m_encore, 1, 1 },
    { (struct SongHeader *)&se_m_encore2, 2, 2 },
    { (struct SongHeader *)&se_m_baton_pass, 1, 1 },
    { (struct SongHeader *)&se_m_milk_drink, 1, 1 },
    { (struct SongHeader *)&se_m_attract, 1, 1 },
    { (struct SongHeader *)&se_m_attract2, 1, 1 },
    { (struct SongHeader *)&se_m_morning_sun, 1, 1 },
    { (struct SongHeader *)&se_m_flatter, 1, 1 },
    { (struct SongHeader *)&se_m_sand_tomb, 1, 1 },
    { (struct SongHeader *)&se_m_grasswhistle, 1, 1 },
    { (struct SongHeader *)&se_m_spit_up, 1, 1 },
    { (struct SongHeader *)&se_m_dive, 1, 1 },
    { (struct SongHeader *)&se_m_earthquake, 2, 2 },
    { (struct SongHeader *)&se_m_twister, 2, 2 },
    { (struct SongHeader *)&se_m_sweet_scent, 1, 1 },
    { (struct SongHeader *)&se_m_yawn, 1, 1 },
    { (struct SongHeader *)&se_m_sky_uppercut, 2, 2 },
    { (struct SongHeader *)&se_m_stat_increase, 1, 1 },
    { (struct SongHeader *)&se_m_heat_wave, 1, 1 },
    { (struct SongHeader *)&se_m_uproar, 1, 1 },
    { (struct SongHeader *)&se_m_hail, 1, 1 },
    { (struct SongHeader *)&se_m_cosmic_power, 2, 2 },
    { (struct SongHeader *)&se_m_teeter_dance, 1, 1 },
    { (struct SongHeader *)&se_m_stat_decrease, 1, 1 },
    { (struct SongHeader *)&se_m_haze, 1, 1 },
    { (struct SongHeader *)&se_m_hyper_beam2, 1, 1 },
    { (struct SongHeader *)&se_rg_door, 1, 1 },
    { (struct SongHeader *)&se_rg_card_flip, 1, 1 },
    { (struct SongHeader *)&se_rg_card_flipping, 1, 1 },
    { (struct SongHeader *)&se_rg_card_open, 1, 1 },
    { (struct SongHeader *)&se_rg_bag_cursor, 1, 1 },
    { (struct SongHeader *)&se_rg_bag_pocket, 1, 1 },
    { (struct SongHeader *)&se_rg_ball_click, 1, 1 },
    { (struct SongHeader *)&se_rg_shop, 1, 1 },
    { (struct SongHeader *)&se_rg_ss_anne_horn, 1, 1 },
    { (struct SongHeader *)&se_rg_help_open, 1, 1 },
    { (struct SongHeader *)&se_rg_help_close, 1, 1 },
    { (struct SongHeader *)&se_rg_help_error, 1, 1 },
    { (struct SongHeader *)&se_rg_deoxys_move, 1, 1 },
    { (struct SongHeader *)&se_rg_poke_jump_success, 1, 1 },
    { (struct SongHeader *)&se_rg_poke_jump_failure, 1, 1 },
    { (struct SongHeader *)&se_pokenav_call, 1, 1 },
    { (struct SongHeader *)&se_pokenav_hang_up, 1, 1 },
    { (struct SongHeader *)&se_arena_timeup1, 1, 1 },
    { (struct SongHeader *)&se_arena_timeup2, 1, 1 },
    { (struct SongHeader *)&se_pike_curtain_close, 1, 1 },
    { (struct SongHeader *)&se_pike_curtain_open, 1, 1 },
    { (struct SongHeader *)&se_sudowoodo_shake, 1, 1 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&dummy_song_header, 0, 0 },
    { (struct SongHeader *)&mus_littleroot_test, 0, 0 },
    { (struct SongHeader *)&mus_gsc_route38, 0, 0 },
    { (struct SongHeader *)&mus_caught, 0, 0 },
    { (struct SongHeader *)&mus_victory_wild, 0, 0 },
    { (struct SongHeader *)&mus_victory_gym_leader, 0, 0 },
    { (struct SongHeader *)&mus_victory_league, 0, 0 },
    { (struct SongHeader *)&mus_c_comm_center, 0, 0 },
    { (struct SongHeader *)&mus_gsc_pewter, 0, 0 },
    { (struct SongHeader *)&mus_c_vs_legend_beast, 0, 0 },
    { (struct SongHeader *)&mus_route101, 0, 0 },
    { (struct SongHeader *)&mus_route110, 0, 0 },
    { (struct SongHeader *)&mus_route120, 0, 0 },
    { (struct SongHeader *)&mus_petalburg, 0, 0 },
    { (struct SongHeader *)&mus_oldale, 0, 0 },
    { (struct SongHeader *)&mus_gym, 0, 0 },
    { (struct SongHeader *)&mus_surf, 0, 0 },
    { (struct SongHeader *)&mus_petalburg_woods, 0, 0 },
    { (struct SongHeader *)&mus_level_up, 2, 2 },
    { (struct SongHeader *)&mus_heal, 2, 2 },
    { (struct SongHeader *)&mus_obtain_badge, 2, 2 },
    { (struct SongHeader *)&mus_obtain_item, 2, 2 },
    { (struct SongHeader *)&mus_evolved, 2, 2 },
    { (struct SongHeader *)&mus_obtain_tmhm, 2, 2 },
    { (struct SongHeader *)&mus_lilycove_museum, 0, 0 },
    { (struct SongHeader *)&mus_route122, 0, 0 },
    { (struct SongHeader *)&mus_oceanic_museum, 0, 0 },
    { (struct SongHeader *)&mus_evolution_intro, 2, 2 },
    { (struct SongHeader *)&mus_evolution, 0, 0 },
    { (struct SongHeader *)&mus_move_deleted, 2, 2 },
    { (struct SongHeader *)&mus_encounter_girl, 0, 0 },
    { (struct SongHeader *)&mus_encounter_male, 0, 0 },
    { (struct SongHeader *)&mus_abandoned_ship, 0, 0 },
    { (struct SongHeader *)&mus_fortree, 0, 0 },
    { (struct SongHeader *)&mus_birch_lab, 0, 0 },
    { (struct SongHeader *)&mus_b_tower_rs, 0, 0 },
    { (struct SongHeader *)&mus_encounter_swimmer, 0, 0 },
    { (struct SongHeader *)&mus_cave_of_origin, 0, 0 },
    { (struct SongHeader *)&mus_obtain_berry, 2, 2 },
    { (struct SongHeader *)&mus_awaken_legend, 2, 2 },
    { (struct SongHeader *)&mus_slots_jackpot, 2, 2 },
    { (struct SongHeader *)&mus_slots_win, 2, 2 },
    { (struct SongHeader *)&mus_too_bad, 2, 2 },
    { (struct SongHeader *)&mus_roulette, 0, 0 },
    { (struct SongHeader *)&mus_link_contest_p1, 0, 0 },
    { (struct SongHeader *)&mus_link_contest_p2, 0, 0 },
    { (struct SongHeader *)&mus_link_contest_p3, 0, 0 },
    { (struct SongHeader *)&mus_link_contest_p4, 0, 0 },
    { (struct SongHeader *)&mus_encounter_rich, 0, 0 },
    { (struct SongHeader *)&mus_verdanturf, 0, 0 },
    { (struct SongHeader *)&mus_rustboro, 0, 0 },
    { (struct SongHeader *)&mus_poke_center, 0, 0 },
    { (struct SongHeader *)&mus_route104, 0, 0 },
    { (struct SongHeader *)&mus_route119, 0, 0 },
    { (struct SongHeader *)&mus_cycling, 0, 0 },
    { (struct SongHeader *)&mus_poke_mart, 0, 0 },
    { (struct SongHeader *)&mus_littleroot, 0, 0 },
    { (struct SongHeader *)&mus_mt_chimney, 0, 0 },
    { (struct SongHeader *)&mus_encounter_female, 0, 0 },
    { (struct SongHeader *)&mus_lilycove, 0, 0 },
    { (struct SongHeader *)&mus_route111, 0, 0 },
    { (struct SongHeader *)&mus_help, 0, 0 },
    { (struct SongHeader *)&mus_underwater, 0, 0 },
    { (struct SongHeader *)&mus_victory_trainer, 0, 0 },
    { (struct SongHeader *)&mus_title, 0, 0 },
    { (struct SongHeader *)&mus_intro, 0, 0 },
    { (struct SongHeader *)&mus_encounter_may, 0, 0 },
    { (struct SongHeader *)&mus_encounter_intense, 0, 0 },
    { (struct SongHeader *)&mus_encounter_cool, 0, 0 },
    { (struct SongHeader *)&mus_route113, 0, 0 },
    { (struct SongHeader *)&mus_encounter_aqua, 0, 0 },
    { (struct SongHeader *)&mus_follow_me, 0, 0 },
    { (struct SongHeader *)&mus_encounter_brendan, 0, 0 },
    { (struct SongHeader *)&mus_ever_grande, 0, 0 },
    { (struct SongHeader *)&mus_encounter_suspicious, 0, 0 },
    { (struct SongHeader *)&mus_victory_aqua_magma, 0, 0 },
    { (struct SongHeader *)&mus_cable_car, 0, 0 },
    { (struct SongHeader *)&mus_game_corner, 0, 0 },
    { (struct SongHeader *)&mus_dewford, 0, 0 },
    { (struct SongHeader *)&mus_safari_zone, 0, 0 },
    { (struct SongHeader *)&mus_victory_road, 0, 0 },
    { (struct SongHeader *)&mus_aqua_magma_hideout, 0, 0 },
    { (struct SongHeader *)&mus_sailing, 0, 0 },
    { (struct SongHeader *)&mus_mt_pyre, 0, 0 },
    { (struct SongHeader *)&se_itemfinder, 1, 1 },
    { (struct SongHeader *)&mus_slateport, 0, 0 },
    { (struct SongHeader *)&mus_mt_pyre_exterior, 0, 0 },
    { (struct SongHeader *)&mus_school, 0, 0 },
    { (struct SongHeader *)&mus_hall_of_fame, 0, 0 },
    { (struct SongHeader *)&mus_fallarbor, 0, 0 },
    { (struct SongHeader *)&mus_sealed_chamber, 0, 0 },
    { (struct SongHeader *)&mus_contest_winner, 0, 0 },
    { (struct SongHeader *)&mus_contest, 0, 0 },
    { (struct SongHeader *)&mus_encounter_magma, 0, 0 },
    { (struct SongHeader *)&mus_intro_battle, 0, 0 },
    { (struct SongHeader *)&mus_abnormal_weather, 0, 0 },
    { (struct SongHeader *)&mus_weather_groudon, 0, 0 },
    { (struct SongHeader *)&mus_sootopolis, 0, 0 },
    { (struct SongHeader *)&mus_contest_results, 0, 0 },
    { (struct SongHeader *)&mus_hall_of_fame_room, 0, 0 },
    { (struct SongHeader *)&mus_trick_house, 0, 0 },
    { (struct SongHeader *)&mus_encounter_twins, 0, 0 },
    { (struct SongHeader *)&mus_encounter_elite_four, 0, 0 },
    { (struct SongHeader *)&mus_encounter_hiker, 0, 0 },
    { (struct SongHeader *)&mus_contest_lobby, 0, 0 },
    { (struct SongHeader *)&mus_encounter_interviewer, 0, 0 },
    { (struct SongHeader *)&mus_encounter_champion, 0, 0 },
    { (struct SongHeader *)&mus_credits, 0, 0 },
    { (struct SongHeader *)&mus_end, 0, 0 },
    { (struct SongHeader *)&mus_b_frontier, 0, 0 },
    { (struct SongHeader *)&mus_b_arena, 0, 0 },
    { (struct SongHeader *)&mus_obtain_b_points, 2, 2 },
    { (struct SongHeader *)&mus_register_match_call, 2, 2 },
    { (struct SongHeader *)&mus_b_pyramid, 0, 0 },
    { (struct SongHeader *)&mus_b_pyramid_top, 0, 0 },
    { (struct SongHeader *)&mus_b_palace, 0, 0 },
    { (struct SongHeader *)&mus_rayquaza_appears, 0, 0 },
    { (struct SongHeader *)&mus_b_tower, 0, 0 },
    { (struct SongHeader *)&mus_obtain_symbol, 2, 2 },
    { (struct SongHeader *)&mus_b_dome, 0, 0 },
    { (struct SongHeader *)&mus_b_pike, 0, 0 },
    { (struct SongHeader *)&mus_b_factory, 0, 0 },
    { (struct SongHeader *)&mus_vs_rayquaza, 0, 0 },
    { (struct SongHeader *)&mus_vs_frontier_brain, 0, 0 },
    { (struct SongHeader *)&mus_vs_mew, 0, 0 },
    { (struct SongHeader *)&mus_b_dome_lobby, 0, 0 },
    { (struct SongHeader *)&mus_vs_wild, 0, 0 },
    { (struct SongHeader *)&mus_vs_aqua_magma, 0, 0 },
    { (struct SongHeader *)&mus_vs_trainer, 0, 0 },
    { (struct SongHeader *)&mus_vs_gym_leader, 0, 0 },
    { (struct SongHeader *)&mus_vs_champion, 0, 0 },
    { (struct SongHeader *)&mus_vs_regi, 0, 0 },
    { (struct SongHeader *)&mus_vs_kyogre_groudon, 0, 0 },
    { (struct SongHeader *)&mus_vs_rival, 0, 0 },
    { (struct SongHeader *)&mus_vs_elite_four, 0, 0 },
    { (struct SongHeader *)&mus_vs_aqua_magma_leader, 0, 0 },
    { (struct SongHeader *)&mus_rg_follow_me, 0, 0 },
    { (struct SongHeader *)&mus_rg_game_corner, 0, 0 },
    { (struct SongHeader *)&mus_rg_rocket_hideout, 0, 0 },
    { (struct SongHeader *)&mus_rg_gym, 0, 0 },
    { (struct SongHeader *)&mus_rg_jigglypuff, 2, 2 },
    { (struct SongHeader *)&mus_rg_intro_fight, 0, 0 },
    { (struct SongHeader *)&mus_rg_title, 0, 0 },
    { (struct SongHeader *)&mus_rg_cinnabar, 0, 0 },
    { (struct SongHeader *)&mus_rg_lavender, 0, 0 },
    { (struct SongHeader *)&mus_rg_heal, 0, 0 },
    { (struct SongHeader *)&mus_rg_cycling, 0, 0 },
    { (struct SongHeader *)&mus_rg_encounter_rocket, 0, 0 },
    { (struct SongHeader *)&mus_rg_encounter_girl, 0, 0 },
    { (struct SongHeader *)&mus_rg_encounter_boy, 0, 0 },
    { (struct SongHeader *)&mus_rg_hall_of_fame, 0, 0 },
    { (struct SongHeader *)&mus_rg_viridian_forest, 0, 0 },
    { (struct SongHeader *)&mus_rg_mt_moon, 0, 0 },
    { (struct SongHeader *)&mus_rg_poke_mansion, 0, 0 },
    { (struct SongHeader *)&mus_rg_credits, 0, 0 },
    { (struct SongHeader *)&mus_rg_route1, 0, 0 },
    { (struct SongHeader *)&mus_rg_route24, 0, 0 },
    { (struct SongHeader *)&mus_rg_route3, 0, 0 },
    { (struct SongHeader *)&mus_rg_route11, 0, 0 },
    { (struct SongHeader *)&mus_rg_victory_road, 0, 0 },
    { (struct SongHeader *)&mus_rg_vs_gym_leader, 0, 0 },
    { (struct SongHeader *)&mus_rg_vs_trainer, 0, 0 },
    { (struct SongHeader *)&mus_rg_vs_wild, 0, 0 },
    { (struct SongHeader *)&mus_rg_vs_champion, 0, 0 },
    { (struct SongHeader *)&mus_rg_pallet, 0, 0 },
    { (struct SongHeader *)&mus_rg_oak_lab, 0, 0 },
    { (struct SongHeader *)&mus_rg_oak, 0, 0 },
    { (struct SongHeader *)&mus_rg_poke_center, 0, 0 },
    { (struct SongHeader *)&mus_rg_ss_anne, 0, 0 },
    { (struct SongHeader *)&mus_rg_surf, 0, 0 },
    { (struct SongHeader *)&mus_rg_poke_tower, 0, 0 },
    { (struct SongHeader *)&mus_rg_silph, 0, 0 },
    { (struct SongHeader *)&mus_rg_fuchsia, 0, 0 },
    { (struct SongHeader *)&mus_rg_celadon, 0, 0 },
    { (struct SongHeader *)&mus_rg_victory_trainer, 0, 0 },
    { (struct SongHeader *)&mus_rg_victory_wild, 0, 0 },
    { (struct SongHeader *)&mus_rg_victory_gym_leader, 0, 0 },
    { (struct SongHeader *)&mus_rg_vermillion, 0, 0 },
    { (struct SongHeader *)&mus_rg_pewter, 0, 0 },
    { (struct SongHeader *)&mus_rg_encounter_rival, 0, 0 },
    { (struct SongHeader *)&mus_rg_rival_exit, 0, 0 },
    { (struct SongHeader *)&mus_rg_dex_rating, 2, 2 },
    { (struct SongHeader *)&mus_rg_obtain_key_item, 2, 2 },
    { (struct SongHeader *)&mus_rg_caught_intro, 2, 2 },
    { (struct SongHeader *)&mus_rg_photo, 2, 2 },
    { (struct SongHeader *)&mus_rg_game_freak, 0, 0 },
    { (struct SongHeader *)&mus_rg_caught, 0, 0 },
    { (struct SongHeader *)&mus_rg_new_game_instruct, 0, 0 },
    { (struct SongHeader *)&mus_rg_new_game_intro, 0, 0 },
    { (struct SongHeader *)&mus_rg_new_game_exit, 0, 0 },
    { (struct SongHeader *)&mus_rg_poke_jump, 0, 0 },
    { (struct SongHeader *)&mus_rg_union_room, 0, 0 },
    { (struct SongHeader *)&mus_rg_net_center, 0, 0 },
    { (struct SongHeader *)&mus_rg_mystery_gift, 0, 0 },
    { (struct SongHeader *)&mus_rg_berry_pick, 0, 0 },
    { (struct SongHeader *)&mus_rg_sevii_cave, 0, 0 },
    { (struct SongHeader *)&mus_rg_teachy_tv_show, 0, 0 },
    { (struct SongHeader *)&mus_rg_sevii_route, 0, 0 },
    { (struct SongHeader *)&mus_rg_sevii_dungeon, 0, 0 },
    { (struct SongHeader *)&mus_rg_sevii_123, 0, 0 },
    { (struct SongHeader *)&mus_rg_sevii_45, 0, 0 },
    { (struct SongHeader *)&mus_rg_sevii_67, 0, 0 },
    { (struct SongHeader *)&mus_rg_poke_flute, 2, 2 },
    { (struct SongHeader *)&mus_rg_vs_deoxys, 0, 0 },
    { (struct SongHeader *)&mus_rg_vs_mewtwo, 0, 0 },
    { (struct SongHeader *)&mus_rg_vs_legend, 0, 0 },
    { (struct SongHeader *)&mus_rg_encounter_gym_leader, 0, 0 },
    { (struct SongHeader *)&mus_rg_encounter_deoxys, 0, 0 },
    { (struct SongHeader *)&mus_rg_trainer_tower, 0, 0 },
    { (struct SongHeader *)&mus_rg_slow_pallet, 0, 0 },
    { (struct SongHeader *)&mus_rg_teachy_tv_menu, 0, 0 },
    { (struct SongHeader *)&ph_trap_blend, 2, 2 },
    { (struct SongHeader *)&ph_trap_held, 2, 2 },
    { (struct SongHeader *)&ph_trap_solo, 2, 2 },
    { (struct SongHeader *)&ph_face_blend, 2, 2 },
    { (struct SongHeader *)&ph_face_held, 2, 2 },
    { (struct SongHeader *)&ph_face_solo, 2, 2 },
    { (struct SongHeader *)&ph_cloth_blend, 2, 2 },
    { (struct SongHeader *)&ph_cloth_held, 2, 2 },
    { (struct SongHeader *)&ph_cloth_solo, 2, 2 },
    { (struct SongHeader *)&ph_dress_blend, 2, 2 },
    { (struct SongHeader *)&ph_dress_held, 2, 2 },
    { (struct SongHeader *)&ph_dress_solo, 2, 2 },
    { (struct SongHeader *)&ph_fleece_blend, 2, 2 },
    { (struct SongHeader *)&ph_fleece_held, 2, 2 },
    { (struct SongHeader *)&ph_fleece_solo, 2, 2 },
    { (struct SongHeader *)&ph_kit_blend, 2, 2 },
    { (struct SongHeader *)&ph_kit_held, 2, 2 },
    { (struct SongHeader *)&ph_kit_solo, 2, 2 },
    { (struct SongHeader *)&ph_price_blend, 2, 2 },
    { (struct SongHeader *)&ph_price_held, 2, 2 },
    { (struct SongHeader *)&ph_price_solo, 2, 2 },
    { (struct SongHeader *)&ph_lot_blend, 2, 2 },
    { (struct SongHeader *)&ph_lot_held, 2, 2 },
    { (struct SongHeader *)&ph_lot_solo, 2, 2 },
    { (struct SongHeader *)&ph_goat_blend, 2, 2 },
    { (struct SongHeader *)&ph_goat_held, 2, 2 },
    { (struct SongHeader *)&ph_goat_solo, 2, 2 },
    { (struct SongHeader *)&ph_thought_blend, 2, 2 },
    { (struct SongHeader *)&ph_thought_held, 2, 2 },
    { (struct SongHeader *)&ph_thought_solo, 2, 2 },
    { (struct SongHeader *)&ph_choice_blend, 2, 2 },
    { (struct SongHeader *)&ph_choice_held, 2, 2 },
    { (struct SongHeader *)&ph_choice_solo, 2, 2 },
    { (struct SongHeader *)&ph_mouth_blend, 2, 2 },
    { (struct SongHeader *)&ph_mouth_held, 2, 2 },
    { (struct SongHeader *)&ph_mouth_solo, 2, 2 },
    { (struct SongHeader *)&ph_foot_blend, 2, 2 },
    { (struct SongHeader *)&ph_foot_held, 2, 2 },
    { (struct SongHeader *)&ph_foot_solo, 2, 2 },
    { (struct SongHeader *)&ph_goose_blend, 2, 2 },
    { (struct SongHeader *)&ph_goose_held, 2, 2 },
    { (struct SongHeader *)&ph_goose_solo, 2, 2 },
    { (struct SongHeader *)&ph_strut_blend, 2, 2 },
    { (struct SongHeader *)&ph_strut_held, 2, 2 },
    { (struct SongHeader *)&ph_strut_solo, 2, 2 },
    { (struct SongHeader *)&ph_cure_blend, 2, 2 },
    { (struct SongHeader *)&ph_cure_held, 2, 2 },
    { (struct SongHeader *)&ph_cure_solo, 2, 2 },
    { (struct SongHeader *)&ph_nurse_blend, 2, 2 },
    { (struct SongHeader *)&ph_nurse_held, 2, 2 },
    { (struct SongHeader *)&ph_nurse_solo, 2, 2 },
};
