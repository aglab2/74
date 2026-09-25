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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x2621700),
TERRAIN(col_pss_1_0xe0139f8),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(6),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,-1250,4825,-3431,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,131,-7214,2101,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-3296,4981,1385,0,-89,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1918,-6216,5194,0,91,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-1369,-7409,2273,0,-151,0,0x3000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,-84,-7604,3711,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5040,4896,-3945,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1060,4553,-4089,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1783,4792,-2738,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1986,2500,3768,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1121,-313,704,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1538,-1302,-2697,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3398,-3958,-3141,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(124,-1468,4312,-2928,0,183,0,0x660000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1928,1042,5120,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-866,-1615,-3768,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4479,-3906,-2872,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-2587,-2396,-3277,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,1930,-7604,2101,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,-2440,4375,-3264,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(217,65,-8020,3564,0,0,0,0x0, bhvPushableMetalBox,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,68,0),
WARP_NODE(241,31,1,69,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
