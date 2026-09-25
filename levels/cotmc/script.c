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
#include "levels/cotmc/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/cotmc/custom_c/custom.collision.inc.c"
#define cotmc_area_1_collision col_cotmc_1_0xe013808
extern const GeoLayout Geo_cotmc_1_0x2701700[];
#define cotmc_area_1 Geo_cotmc_1_0x2701700
/* Fast64 end persistent block [scripts] */

const LevelScript level_cotmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	LOAD_VANILLA_OBJECTS(0, hmc, cave),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
    LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
    LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
    LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),

	ALLOC_LEVEL_POOL(),
    JUMP_LINK(script_func_vo_hmc),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(31, metal_door_geo),
    LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
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
    JUMP_LINK(script_func_global_18),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, cotmc_area_1),
		TERRAIN(cotmc_area_1_collision),
		MACRO_OBJECTS(cotmc_area_1_macro_objs),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */

OBJECT_WITH_ACTS(0,-1021,450,3020,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,283,596,-1840,0,-154,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,2480,33,-2755,0,-153,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-2500,1493,811,0,107,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-1347,-2305,-1060,0,-151,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,723,-365,-2192,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-3084,1615,-2379,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,662,521,-887,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-2300,-365,2963,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1325,-521,2740,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-579,-312,-82,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1968,-260,-1958,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1519,729,-3161,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1930,52,1910,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2827,313,473,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1540,938,7,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(116,-1347,-417,-1060,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(212,948,729,585,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-935,260,1707,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(100,2754,990,-794,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(100,-977,1250,731,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(0,1736,-313,717,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,1416,-468,1847,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,426,833,2663,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-2627,156,1985,0,0,0,0x110000, bhvCoinFormation,31),

WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,46,0),
WARP_NODE(241,26,1,47,0),
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
	MARIO_POS(1, 0, 0, 10000, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};