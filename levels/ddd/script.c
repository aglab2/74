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
#include "levels/ddd/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/ddd/custom_c/custom.collision.inc.c"
#define ddd_area_1_collision col_ddd_1_0xe0315b0

extern const GeoLayout Geo_ddd_1_0x22a1700[];
#define ddd_area_1 Geo_ddd_1_0x22a1700
/* Fast64 end persistent block [scripts] */

const LevelScript level_ddd_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
    LOAD_VANILLA_OBJECTS(0, wf, grass),
    LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
    LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
    LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
    LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    JUMP_LINK(script_func_vo_wf),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
    // LOAD_MODEL_FROM_DL(132,0x08025f08,4),
    // LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
    // LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
    // LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
    // LOAD_MODEL_FROM_DL(164,0x04032a18,4),
    // LOAD_MODEL_FROM_DL(201,0x080048e0,4),
    // LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_4),
    JUMP_LINK(script_func_global_15),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ddd_area_1),
		TERRAIN(ddd_area_1_collision),
		MACRO_OBJECTS(ddd_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0,3),
        TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */
OBJECT_WITH_ACTS(0,-3155,-3352,-5047,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(86,4412,-58,5598,0,-154,0,0x0, bhvKingBobomb,31),
OBJECT_WITH_ACTS(0,-435,-540,2013,0,270,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-3897,2430,2393,0,107,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-3975,2383,-4286,0,-151,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3482,2292,-2454,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,144,-417,6200,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-903,-1510,-4154,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3168,-4115,-3583,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3380,-625,-3348,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1540,52,5009,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1697,-723,-2229,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4583,-534,6091,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4073,-856,1411,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5181,-856,2244,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(23,958,-856,-1105,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2431,-856,6482,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-4014,-856,6666,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1209,-3635,-2763,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-4583,-3635,-5041,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(180,4386,-58,5920,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,-102,-856,-907,0,214,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(100,-4935,-856,368,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-2504,-856,4198,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,4708,-723,-1909,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2504,-856,1326,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2946,-534,5672,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(140,3651,2260,-3702,0,-8,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(188,5230,-534,4745,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,5065,-534,6440,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(220,-3697,1927,3009,0,-22,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-1343,1823,2966,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4029,1667,-360,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,3070,-723,-5097,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2862,-3635,-2250,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5423,-616,-866,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-2150,-856,5745,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(118,3330,2083,-3494,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3548,2292,-3185,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3860,2292,-3409,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3641,2392,-3758,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,3598,3959,-3453,0,352,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-4083,1354,2036,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(107,5289,-856,-601,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(104,444,-856,1982,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(212,958,0,-1105,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-413,521,6154,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,-5375,-3177,-4498,0,-29,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5579,-3177,-4017,0,-19,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,3580,3698,-3338,0,172,0,0x20000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2839,-1950,-1180,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4958,30,3505,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3513,-390,-4480,0,102,0,0x0, bhvCoinFormation,31),

WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,56,0),
WARP_NODE(241,26,1,57,0),
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