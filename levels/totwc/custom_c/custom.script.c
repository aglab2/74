#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
#include "levels/ttm/header.h"
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _ttmSegmentRomStart, _ttmSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_TTM_SLIDE_EXIT_PODIUM, ttm_geo_000DF4),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_ROLLING_LOG,       ttm_geo_000730),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_CAGE,        ttm_geo_000710),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_BLUE_SMILEY,       ttm_geo_000D14),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_YELLOW_SMILEY,     ttm_geo_000D4C),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_SMILEY,       ttm_geo_000D84),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_MOON_SMILEY,       ttm_geo_000DBC),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     ttm_geo_000748),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,     ttm_geo_000778),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,     ttm_geo_0007A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,     ttm_geo_0007D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,     ttm_geo_000808),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,     ttm_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,     ttm_geo_000858),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,     ttm_geo_000880),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,     ttm_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,     ttm_geo_0008D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,     ttm_geo_0008F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,     ttm_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,     ttm_geo_000948),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,     ttm_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,     ttm_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,     ttm_geo_0009C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,     ttm_geo_0009F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,     ttm_geo_000A18),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,     ttm_geo_000A40),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x27e1700),
TERRAIN(col_totwc_1_0xe00f038),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,-166,1440,5492,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,-472,-1532,-219,0,-183,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(195,2163,-1649,3951,0,-133,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(201,550,-1535,-884,0,91,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(9,-3860,1289,-4434,0,-60,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(9,3828,-677,3536,0,-26,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(201,3826,-417,3576,0,290,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(201,-3882,1540,-4400,0,75,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(0,736,-1302,350,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(137,489,-1094,-51,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5695,93,-332,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4148,2593,3960,0,318,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,25,1458,-6480,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-5661,687,-151,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3722,-1458,-4643,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-1940,-1458,-153,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5695,1146,-332,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5794,3594,-144,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3914,573,3829,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-166,417,6198,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4144,521,3962,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2354,-1562,3817,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3782,521,-4615,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(188,1318,-1555,-698,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-452,-1555,515,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-417,-1555,-1146,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-4138,2344,-4470,0,44,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-166,2448,5492,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,3782,1823,-4615,0,12,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4148,3646,3960,0,1,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-422,-1406,1015,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,423,-1406,1774,0,35,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,884,-1544,-737,0,0,0,0x640000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2287,-1544,-176,0,-94,0,0x650000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,64,0),
WARP_NODE(241,31,1,65,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
