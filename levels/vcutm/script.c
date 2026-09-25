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
#include "levels/vcutm/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/vcutm/custom_c/custom.collision.inc.c"
#define vcutm_area_1_collision col_vcutm_1_0xe026e48
extern const GeoLayout Geo_vcutm_1_0x1e41700[];
#define vcutm_area_1 Geo_vcutm_1_0x1e41700
/* Fast64 end persistent block [scripts] */

const LevelScript level_vcutm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
    LOAD_VANILLA_OBJECTS(0, vcutm, outside),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
    LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
    LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
    LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
    JUMP_LINK(script_func_vo_vcutm),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
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
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, vcutm_area_1),
		TERRAIN(vcutm_area_1_collision),
		MACRO_OBJECTS(vcutm_area_1_macro_objs),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */

OBJECT_WITH_ACTS(0,-6244,-852,-918,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,5269,-1394,-762,0,-154,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,-6567,-2830,-918,0,107,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1856,-1211,-7277,0,180,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-273,-729,-1140,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,1510,365,4734,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,2551,2917,4340,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1444,4063,-1118,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,5208,-1302,-2509,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2477,-1302,2425,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6244,-1198,-1667,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2763,-1146,5059,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1585,564,3456,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1354,885,6198,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1910,-1302,3848,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-401,2344,5519,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,3046,-1302,1561,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,1600,-1041,5024,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-616,2969,896,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-255,-885,750,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-401,1406,5023,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-401,2656,896,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(103,-105,-1402,2708,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(207,-2083,-1402,4740,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-237,-318,3593,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-237,-318,3781,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,919,-318,3615,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,919,-318,3800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(223,-3346,-1402,4655,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,-470,0,-5769,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-3399,-1316,-1454,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,-233,-1394,-3441,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,1051,3333,1690,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(129,990,2344,998,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,990,2344,834,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,2708,2344,2604,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,2708,2344,2423,0,0,0,0x0, bhvBreakableBox,31),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,66,0),
WARP_NODE(241,31,1,67,0),
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