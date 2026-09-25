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
#include "levels/bits/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/bits/custom_c/custom.collision.inc.c"
#define bits_area_1_collision col_bits_1_0xe069e28

extern const GeoLayout Geo_bits_1_0x20e1700[];
#define bits_area_1 Geo_bits_1_0x20e1700

extern const BehaviorScript Bhv_Custom_0x00407300[];
/* Fast64 end persistent block [scripts] */

const LevelScript level_bits_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
    LOAD_VANILLA_OBJECTS(0, bob, generic),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
JUMP_LINK(script_func_vo_bob),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bits_area_1),
		TERRAIN(bits_area_1_collision),
		MACRO_OBJECTS(bits_area_1_macro_objs),
SET_BACKGROUND_MUSIC(0,26),
TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */
OBJECT_WITH_ACTS(0,-104,-1660,-7552,0,315,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,1990,1073,-1184,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(195,726,3262,-2449,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(201,745,-1545,-1205,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(22,5595,-1212,5390,0,-151,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,52,1458,3125,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-6011,2604,2523,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-2867,0,-1663,0,49,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,6189,3594,-573,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4368,-1302,1169,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-1802,-1408,1390,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3798,-1460,191,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-1707,-1512,-1181,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(207,-4983,462,5052,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-5833,313,3646,0,41,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6510,313,3177,0,44,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6979,313,2552,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-6563,313,1719,0,-34,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-5990,313,1198,0,-45,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(24,-2148,-1512,3438,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(120,-3233,-1460,2760,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(23,-2240,-50,4106,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,-1458,-485,3802,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(201,1510,2128,6547,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(201,573,5980,2240,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(137,4423,1719,5324,0,44,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1108,2344,5000,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,606,6719,1510,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-1509,-1568,-3490,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-5499,931,826,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6979,885,2552,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-983,-417,4271,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1771,-677,3542,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3598,1042,283,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2013,1198,-868,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3591,-2092,-2760,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3551,-1823,512,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3003,3073,691,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3803,2135,-3526,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5625,2969,-3526,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6407,2135,-2552,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6198,1094,1146,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5834,-365,978,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,-2328,-1510,-5624,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,4865,-150,-4980,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,715,-1285,1440,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,606,8544,1099,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,4763,5148,-4398,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-3919,5069,5872,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,4946,2607,4834,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2011,-1934,74,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,5208,-2092,-2304,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,5880,-1270,5521,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(22,946,469,1334,0,0,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,-104,-1741,-7031,0,180,0,0x390000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1509,-1828,-3095,0,180,0,0x3a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1178,-1512,-760,0,-135,0,0x3b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1771,2148,4948,0,0,0,0x300000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,606,6407,850,0,180,0,0x420000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-6040,4418,-1120,0,315,0,0x5e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,5600,300,1970,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5494,462,260,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7392,1647,-2398,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4531,-1322,5833,0,64,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,-3333,-1512,-7292,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2865,-1512,-8021,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5885,-1512,-5677,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4479,-1512,-4792,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3906,-1512,-4948,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7344,3306,-1094,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7344,3306,-156,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7344,3306,781,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,3021,-1504,3594,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,4907,-816,5069,0,67,0,0xb0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(120,-2032,-1408,1183,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(34,-5980,4404,-796,0,270,0,0x96010000, Bhv_Custom_0x00407300,31),
OBJECT_WITH_ACTS(137,4665,75,-4980,0,0,0,0x0, bhvExclamationBox,31),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,68,0),
WARP_NODE(241,6,1,69,0),
WARP_NODE(0,34,1,10,0),
WARP_NODE(1,16,1,10,0),
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