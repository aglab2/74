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
#include "levels/bitfs/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/bitfs/custom_c/custom.collision.inc.c"
#define bitfs_area_1_collision col_bitfs_1_0xe01c590
extern const GeoLayout Geo_bitfs_1_0x1f21700[];
#define bitfs_area_1 Geo_bitfs_1_0x1f21700
/* Fast64 end persistent block [scripts] */

const LevelScript level_bitfs_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd), 
LOAD_VANILLA_OBJECTS(0, jrb, water),
    LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
    LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
    LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
    LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    JUMP_LINK(script_func_vo_jrb),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
// LOAD_MODEL_FROM_GEO(84,0x05008d14),
// LOAD_MODEL_FROM_DL(87,0x05013cb8,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_14),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bitfs_area_1),
		TERRAIN(bitfs_area_1_collision),
		MACRO_OBJECTS(bitfs_area_1_macro_objs),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */

OBJECT_WITH_ACTS(0,1035,-175,-3204,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,422,27,2572,0,-154,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,1505,1700,2068,0,-153,0,0x0, Bhv_Custom_0x00407000,31),
OBJECT_WITH_ACTS(122,-5518,1441,-5114,0,136,0,0x1000000, Bhv_Custom_0x00407000,31),
OBJECT_WITH_ACTS(122,-3223,1653,6003,0,-176,0,0x2000000, Bhv_Custom_0x00407000,31),
OBJECT_WITH_ACTS(122,7627,990,170,0,-49,0,0x3000000, Bhv_Custom_0x00407000,31),
OBJECT_WITH_ACTS(0,-3423,156,-867,0,0,0,0x4000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,3657,260,-6848,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1913,885,-6986,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2274,781,-413,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5340,-938,-3624,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1063,-313,3744,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-92,-1751,3582,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5834,14,-857,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6569,-365,-1208,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,-686,724,-2834,0,270,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,810,580,-2834,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1010,730,-2834,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1210,880,-2834,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4649,975,3249,0,27,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4563,975,3419,0,27,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4062,990,4309,0,301,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3963,990,4472,0,301,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,742,471,2572,0,270,0,0x60000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(212,7369,-365,3088,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(223,6961,-468,3057,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(87,3923,-2455,2505,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(87,-1574,-2455,3052,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(88,-1275,-2455,1307,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,407,-2455,8,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,3290,-2455,4071,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(105,-3218,-312,2902,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(0,-1725,724,-2809,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3234,1196,-2632,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,-3628,-78,-1820,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4886,-78,-534,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(220,3106,1927,-1385,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-4470,-78,-1228,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,4033,1563,-2648,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1035,0,-4490,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4264,-625,-5339,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4803,104,-2823,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3030,-1979,2560,0,90,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-5403,-78,1088,0,0,0,0x10000, bhvBreakableBox,31),

WARP_NODE(10,33,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,72,0),
WARP_NODE(241,31,1,73,0),
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