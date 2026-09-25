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
#include "levels/totwc/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/totwc/custom_c/custom.collision.inc.c"
#define totwc_area_1_collision col_totwc_1_0xe00f038

extern const GeoLayout Geo_totwc_1_0x27e1700[];
#define totwc_area_1 Geo_totwc_1_0x27e1700
/* Fast64 end persistent block [scripts] */

const LevelScript level_totwc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
    LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
    LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
    LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
    LOAD_VANILLA_OBJECTS(0, ttm, mountain),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    JUMP_LINK(script_func_vo_ttm),
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
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, totwc_area_1),
		TERRAIN(totwc_area_1_collision),
		MACRO_OBJECTS(totwc_area_1_macro_objs),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */

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