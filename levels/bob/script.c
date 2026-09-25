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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/bob/custom_c/custom.collision.inc.c"
#define bob_area_1_collision col_bob_1_0xe0207b8
extern const GeoLayout Geo_bob_1_0x1661700[];
#define bob_area_1 Geo_bob_1_0x1661700
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_VANILLA_OBJECTS(0, bbh, spooky), 
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
    LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
    LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
    LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
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
	JUMP_LINK(script_func_vo_bbh),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0,3),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
#if 1
OBJECT_WITH_ACTS(0,-3332,-800,-4465,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,3215,1979,2340,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-332,2500,3523,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1096,2083,-1485,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2729,3437,-3296,0,0,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3648,833,85,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-402,-833,-3122,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1243,-885,3859,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-847,260,4111,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2752,-938,1730,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3254,156,3455,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2638,-1563,-2781,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2404,365,438,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4646,-923,2843,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3215,1458,3394,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,-3000,-809,-188,0,-5,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-3111,-829,3497,0,174,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(137,-2241,2340,3770,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-569,-898,229,0,240,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,1291,-833,1405,-1,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(129,-2654,-417,-153,0,-9,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2319,-52,-120,0,-7,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-1096,1823,-1485,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3209,-365,441,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3630,625,441,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,674,-833,1356,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-1400,938,1666,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(188,-3709,-938,-1095,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3322,-885,-653,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,3967,-885,-2570,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-241,-833,-4549,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1321,417,2092,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,-3230,2059,3027,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,-4101,150,1144,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-3456,260,403,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3129,260,39,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2678,260,73,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2140,469,152,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1787,729,259,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(129,368,-1014,-1976,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-376,-1014,-2579,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(0,3215,1771,2340,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,-2465,-729,2535,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(137,4168,1563,2840,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2280,1563,2840,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,2812,1250,3861,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,3914,-923,4019,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2404,365,1020,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,-1855,-1014,-1834,0,249,0,0x10000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,3514,-1014,164,0,-94,0,0x710000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-705,1742,-1840,0,-56,0,0x600000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,3125,-990,4844,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,3400,-990,4844,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,2229,2092,-4412,0,348,0,0x20000, bhvCoinFormation,31),
#endif
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,40,0),
WARP_NODE(241,26,1,41,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};