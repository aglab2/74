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
#include "levels/ttm/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/ttm/custom_c/custom.collision.inc.c"
#define ttm_area_1_collision col_ttm_1_0xe02ff50 
extern const GeoLayout Geo_ttm_1_0x2c41700[];
#define ttm_area_1 Geo_ttm_1_0x2c41700
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd), 
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
LOAD_VANILLA_OBJECTS(0, ttm, mountain),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    JUMP_LINK(script_func_vo_ttm),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_15),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttm_area_1),
		TERRAIN(ttm_area_1_collision),
		MACRO_OBJECTS(ttm_area_1_macro_objs),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */
OBJECT_WITH_ACTS(0,135,-2197,-2909,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(84,138,2941,-275,0,0,0,0x0, bhvBalconyBigBoo,31),
OBJECT_WITH_ACTS(137,-2523,-189,-3509,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-977,-1832,1005,0,335,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,3474,-1107,3314,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1160,-156,1782,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4896,1563,1250,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,1190,-2154,987,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3752,-2135,-1692,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4727,-469,2786,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5234,-469,1445,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2440,2969,-609,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2711,2969,-593,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3504,990,-2808,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3477,-2135,456,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(84,-3386,-365,-968,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-4115,-365,-729,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,3108,1354,-134,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(100,-462,-2197,-24,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,719,-2197,-63,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2235,-2197,-1024,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-2076,-2197,-1100,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-60,1222,-852,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(192,-2368,1222,-241,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-2453,1222,129,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(144,-839,-501,1083,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(129,-930,-501,1222,0,-27,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,3540,1549,-625,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,128,-2197,-1458,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,138,2840,156,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4115,-417,1510,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4401,-417,820,0,25,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3477,-2135,1707,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,67,-2083,1412,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,59,1302,1410,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3760,-2031,2884,0,330,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,-408,-2197,1064,0,164,0,0x310000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(212,-3729,-417,-2718,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(140,636,2840,950,0,18,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,138,2892,779,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,138,2892,-836,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,110,493,-1534,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,110,1274,-1551,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,138,1642,-1146,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,138,2756,-1130,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,120,-2197,-365,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,120,-2197,0,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(144,-782,-501,990,0,0,0,0x0, bhvFlame,31),

WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
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