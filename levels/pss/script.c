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
#include "levels/pss/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/pss/custom_c/custom.collision.inc.c"
#define pss_area_1_collision col_pss_1_0xe0139f8 
extern const GeoLayout Geo_pss_1_0x2621700[];
#define pss_area_1 Geo_pss_1_0x2621700
/* Fast64 end persistent block [scripts] */

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
    LOAD_VANILLA_OBJECTS(0, bbh, spooky),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
    LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
    LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
    LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
	LOAD_RAW(13, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    // JUMP_LINK(script_func_vo_bbh),
    // LOAD_MODEL_FROM_DL(132,0x08025f08,4),
    // LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
    // LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
    // LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
    // LOAD_MODEL_FROM_DL(164,0x04032a18,4),
    // LOAD_MODEL_FROM_DL(201,0x080048e0,4),
    // LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
    // JUMP_LINK(script_func_global_1),
    // JUMP_LINK(script_func_global_10),
    // JUMP_LINK(script_func_global_18),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, pss_area_1),
		TERRAIN(pss_area_1_collision),
		MACRO_OBJECTS(pss_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0,9),
        TERRAIN_TYPE(6),
		/* Fast64 begin persistent block [area commands] */
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