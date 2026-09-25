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
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/jrb/custom_c/custom.collision.inc.c"
#define jrb_area_1_collision col_jrb_1_0xe022c08
extern const GeoLayout Geo_jrb_1_0x1901700[];
#define jrb_area_1 Geo_jrb_1_0x1901700

#define bhvLargeFishGroup  bhvTankFishGroup
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
    LOAD_VANILLA_OBJECTS(0, jrb, water),
    LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
    LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
    LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
    LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
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
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0,5),
        TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */

        OBJECT_WITH_ACTS(0,-4206,3888,-5082,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
        OBJECT_WITH_ACTS(122,3941,-6587,1983,0,-154,0,0x0, bhvStar,31),
        OBJECT_WITH_ACTS(122,3220,-2832,5330,0,0,0,0x1000000, bhvStar,31),
        OBJECT_WITH_ACTS(137,3340,3836,-3640,0,107,0,0xb0000, bhvExclamationBox,31),
        OBJECT_WITH_ACTS(0,-1635,3008,-4271,0,-151,0,0x3000000, bhvHiddenRedCoinStar,31),
        OBJECT_WITH_ACTS(137,757,4271,4521,0,0,0,0xd0000, bhvExclamationBox,31),
        OBJECT_WITH_ACTS(122,-3633,4531,361,0,0,0,0x5000000, bhvStar,31),
        OBJECT_WITH_ACTS(140,5110,3104,-2318,0,0,0,0x0, bhvBlueCoinSwitch,31),
        OBJECT_WITH_ACTS(118,4889,3281,-3165,0,0,0,0x0, bhvHiddenBlueCoin,31),
        OBJECT_WITH_ACTS(118,4412,3355,-3696,0,0,0,0x0, bhvHiddenBlueCoin,31),
        OBJECT_WITH_ACTS(118,4059,3437,-3346,0,0,0,0x0, bhvHiddenBlueCoin,31),
        OBJECT_WITH_ACTS(0,371,-990,-1155,0,0,0,0x0, bhvLargeFishGroup,31),
        OBJECT_WITH_ACTS(212,-2402,2642,-2458,0,0,0,0x0, bhv1Up,31),
        OBJECT_WITH_ACTS(180,-5265,2699,5684,0,0,0,0x0, bhvFireSpitter,31),
        OBJECT_WITH_ACTS(192,-5838,2761,5120,0,0,0,0x0, bhvGoomba,31),
        OBJECT_WITH_ACTS(137,-6152,3542,6281,0,0,0,0x10000, bhvExclamationBox,31),
        OBJECT_WITH_ACTS(207,-3880,1796,4010,0,118,0,0x0, bhvFloorSwitchHiddenObjects,31),
        OBJECT_WITH_ACTS(129,-2621,2917,4949,0,35,0,0x0, bhvHiddenObject,31),
        OBJECT_WITH_ACTS(129,-2224,3125,4791,0,11,0,0x0, bhvHiddenObject,31),
        OBJECT_WITH_ACTS(129,-1755,3229,4721,0,9,0,0x0, bhvHiddenObject,31),
        OBJECT_WITH_ACTS(129,-1406,3333,4723,0,-29,0,0x0, bhvHiddenObject,31),
        OBJECT_WITH_ACTS(137,-298,4010,5360,0,0,0,0x60000, bhvExclamationBox,31),
        OBJECT_WITH_ACTS(0,-3488,2969,-6809,0,0,0,0x0, bhvGoombaTripletSpawner,31),
        OBJECT_WITH_ACTS(0,-162,2709,604,90,0,0,0x130000, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(220,-2830,3437,-3712,0,0,0,0x0, bhvFlyGuy,31),
        OBJECT_WITH_ACTS(130,-1859,2810,-6933,0,0,0,0x0, bhvBreakableBoxSmall,31),
        OBJECT_WITH_ACTS(116,-3340,4271,-1337,0,-3,0,0x0, bhvOneCoin,31),
        OBJECT_WITH_ACTS(116,-3968,4323,-1840,0,0,0,0x0, bhvOneCoin,31),
        OBJECT_WITH_ACTS(129,-6078,2699,4474,0,0,0,0x0, bhvJumpingBox,31),
        OBJECT_WITH_ACTS(116,-3466,4375,-448,0,0,0,0x0, bhvOneCoin,31),
        OBJECT_WITH_ACTS(116,-5320,3073,-1419,0,0,0,0x0, bhvOneCoin,31),
        OBJECT_WITH_ACTS(116,-4861,2917,-2740,0,0,0,0x0, bhvOneCoin,31),
        OBJECT_WITH_ACTS(137,-5799,3489,-4897,0,0,0,0x60000, bhvExclamationBox,31),
        OBJECT_WITH_ACTS(215,-3758,4063,-2008,0,29,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(215,-4693,3698,-2002,0,0,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(215,-3465,1458,3778,0,0,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(215,4773,2761,-1766,0,0,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(215,0,-4689,0,0,0,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(215,70,-7532,-776,0,0,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(215,-3577,-5418,549,0,0,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(215,3604,-3281,298,0,0,0,0x0, bhvRedCoin,31),
        OBJECT_WITH_ACTS(0,-3577,-4010,549,0,0,0,0x110000, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(0,1122,-6629,-291,0,97,0,0x0, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(0,2662,-2604,2107,0,129,0,0x0, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(0,3583,-3281,100,90,0,0,0x130000, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(0,158,-4063,-887,90,0,0,0x130000, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(0,-697,-4063,1202,90,0,0,0x130000, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(0,3109,2708,1243,0,-23,0,0x0, bhvCoinFormation,31),
        OBJECT_WITH_ACTS(0,647,-6094,29,0,0,0,0x0, bhvLargeFishGroup,31),
        OBJECT_WITH_ACTS(0,3480,-2604,1241,0,0,0,0x0, bhvLargeFishGroup,31),
        OBJECT_WITH_ACTS(0,-274,-2240,920,0,0,0,0x0, bhvLargeFishGroup,31),
        OBJECT_WITH_ACTS(105,-1432,2813,-3370,0,0,0,0x0, bhvSkeeter,31),
        OBJECT_WITH_ACTS(105,1402,2865,-8,0,0,0,0x0, bhvSkeeter,31),
        OBJECT_WITH_ACTS(105,-1980,2865,2707,0,0,0,0x0, bhvSkeeter,31),
        OBJECT_WITH_ACTS(88,-2471,2719,-2468,0,0,0,0x0, bhvClamShell,31),
        OBJECT_WITH_ACTS(88,0,-4948,0,0,0,0,0x0, bhvClamShell,31),
        OBJECT_WITH_ACTS(88,3583,-2709,178,0,0,0,0x0, bhvClamShell,31),
        OBJECT_WITH_ACTS(212,-3181,4055,-493,0,0,0,0x0, bhv1Up,31),
        OBJECT_WITH_ACTS(88,49,-7500,-777,0,1,0,0x0, bhvClamShell,31),
        OBJECT_WITH_ACTS(124,-3568,2810,-4458,0,-126,0,0x2a0000, bhvMessagePanel,31),
        OBJECT_WITH_ACTS(124,-4455,2810,-2893,0,149,0,0x2b0000, bhvMessagePanel,31),
        OBJECT_WITH_ACTS(0,-3577,-2650,320,90,0,0,0x130000, bhvCoinFormation,31),

        WARP_NODE(10,9,1,10,0),
        WARP_NODE(11,9,1,12,0),
        WARP_NODE(12,9,1,11,0),
        WARP_NODE(13,9,1,14,0),
        WARP_NODE(14,9,1,13,0),
        WARP_NODE(240,26,1,44,0),
        WARP_NODE(241,26,1,45,0),
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