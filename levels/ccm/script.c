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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/ccm/custom_c/custom.collision.inc.c"
#define ccm_area_1_collision col_ccm_1_0xe027a58
extern const GeoLayout Geo_ccm_1_0x12e1700[];
#define ccm_area_1 Geo_ccm_1_0x12e1700
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
    LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
    LOAD_VANILLA_OBJECTS(0, ttm, mountain),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
    LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
    LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
    LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    JUMP_LINK(script_func_vo_ttm),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    // LOAD_MODEL_FROM_GEO(88,0x0500c778),
    // LOAD_MODEL_FROM_DL(132,0x08025f08,4),
    // LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
    // LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
    // LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
    // LOAD_MODEL_FROM_DL(164,0x04032a18,4),
    // LOAD_MODEL_FROM_DL(201,0x080048e0,4),
    // LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_15),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0,3),
        TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */
OBJECT_WITH_ACTS(0,2652,-71,-5325,0,270,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-3214,600,-5235,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,5246,1960,5846,0,-153,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-3511,-539,-651,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4030,299,-2693,0,-151,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,4295,-417,-4987,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-1324,1719,-5225,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(124,1944,-710,-5619,0,49,0,0x80000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,835,-880,-495,0,91,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-284,-158,2136,0,-2,0,0x100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,3065,-880,1678,0,233,0,0x230000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1054,-158,5195,0,-56,0,0x270000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(215,-4745,-812,1427,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2065,885,3188,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,540,-52,3488,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4151,1771,-2230,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1833,-60,1617,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1343,-677,-156,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-990,-573,-5948,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3138,-833,-4921,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(100,-6624,737,-1616,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-6583,737,-4532,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-5474,737,-1943,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(84,-1818,573,5613,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(223,2382,104,-2208,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(107,3922,441,-661,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(104,4474,1369,5183,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(192,0,-833,0,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1771,-833,-5417,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1939,-833,-4779,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(188,482,-52,4459,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-2141,-781,-5188,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-319,-781,-156,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2513,208,-5235,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-469,365,238,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-677,417,-2900,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3748,1458,-5225,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2448,2031,-5225,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5208,625,-2110,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3904,-833,2706,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-479,-745,-1798,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,3949,435,-1689,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,4649,521,-1366,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4649,521,-3053,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3648,521,-3053,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3648,521,-1366,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(129,3577,240,-2693,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,540,156,4475,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-2067,0,-2621,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,1375,-104,3770,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-4992,1230,299,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(100,-3532,-900,-2959,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(0,-4430,0,3430,0,0,0,0x0, bhvCoinFormation,31),

WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,60,0),
WARP_NODE(241,31,1,61,0),
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
	MARIO_POS(1, 0, 0, 1000, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};