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
#include "levels/ssl/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/ssl/custom_c/custom.collision.inc.c"
#define ssl_area_1_collision col_ssl_1_0xe027e40
extern const GeoLayout Geo_ssl_1_0x1581700[];
#define ssl_area_1 Geo_ssl_1_0x1581700
/* Fast64 end persistent block [scripts] */

const LevelScript level_ssl_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
    LOAD_VANILLA_OBJECTS(0, ssl, generic),
    LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
    LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
    LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
    LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    JUMP_LINK(script_func_vo_ssl),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
    // LOAD_MODEL_FROM_GEO(86,0x05014630),
    // LOAD_MODEL_FROM_DL(132,0x08025f08,4),
    // LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
    // LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
    // LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
    // LOAD_MODEL_FROM_DL(164,0x04032a18,4),
    // LOAD_MODEL_FROM_DL(201,0x080048e0,4),
    // LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_6),
    JUMP_LINK(script_func_global_15),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ssl_area_1),
		TERRAIN(ssl_area_1_collision),
		MACRO_OBJECTS(ssl_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0,6),
        TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */
OBJECT_WITH_ACTS(0,4161,-1060,-4456,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,3873,-1294,-3791,0,-203,0,0x9e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2517,2504,1883,0,180,0,0x9f0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(122,-2961,3264,712,0,139,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,3608,-274,-680,0,-151,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4396,1927,4269,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-1271,4115,5761,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-5104,-1042,-1875,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-5070,3490,6188,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-298,-625,-4461,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3154,-1437,-3012,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3576,260,229,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1643,156,-3509,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1980,-885,-2840,0,26,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1410,-1042,2116,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7190,0,6473,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5667,-1250,-4244,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(27,-2983,-1294,-1518,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,1643,92,-3179,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-3672,-1294,-1433,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-3953,-1294,-2248,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-993,-1294,-1518,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-559,-1294,-2154,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-4973,-1294,-3508,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-5483,-1294,-4137,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-4684,-1294,-4263,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-5164,-1294,-4680,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-1797,-1294,-3331,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-2146,-1294,-3996,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,254,-1294,5054,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,3408,106,1458,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,6331,106,2551,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,5488,106,2096,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-6795,-50,7351,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-393,-1294,4350,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-5981,-1294,4085,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(207,5327,-1294,5758,0,270,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,3608,-937,-680,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-3468,-1294,-5112,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-6222,-1294,-5218,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-2977,-1294,7143,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-3473,821,2049,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,4158,106,-316,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(223,-2148,1936,144,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-3542,2708,4787,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,5491,106,7370,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,92,-1294,-5172,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,393,-1294,-365,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,-376,-1294,4697,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6167,-1294,3473,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4116,106,1995,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,5522,106,2725,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,5927,106,1816,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(220,-3197,2292,922,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-504,4635,5125,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,2478,729,-3107,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(129,-3581,1450,633,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(212,4848,1146,739,0,21,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,2530,-400,-4923,0,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1836,781,1782,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4844,0,2188,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3229,0,3159,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4688,0,781,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1993,156,-2562,0,36,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3229,104,7925,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6375,104,-5679,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3576,-1198,520,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3060,1042,6811,0,357,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-4711,4843,5475,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(192,2830,-1214,-5142,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2254,-1198,-5050,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,5439,-521,-4244,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2906,-573,-3491,0,0,0,0x0, bhvCoinFormation,31),

WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,54,0),
WARP_NODE(241,26,1,55,0),
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