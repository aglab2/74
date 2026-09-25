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
#include "levels/bitdw/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/bitdw/custom_c/custom.collision.inc.c"
#define bitdw_area_1_collision col_bitdw_1_0xe016468
extern const GeoLayout Geo_bitdw_1_0x1d61700[];
#define bitdw_area_1 Geo_bitdw_1_0x1d61700
/* Fast64 end persistent block [scripts] */

const LevelScript level_bitdw_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd), 
LOAD_VANILLA_OBJECTS(0, bitdw, sky),
    LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
    LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
    LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
    LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
JUMP_LINK(script_func_vo_bitdw),
LOAD_MODEL_FROM_GEO(18, warp_pipe_geo),
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

	AREA(1, bitdw_area_1),
		TERRAIN(bitdw_area_1_collision),
		MACRO_OBJECTS(bitdw_area_1_macro_objs),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */

OBJECT_WITH_ACTS(122,3934,1537,-5645,0,-154,0,0x0, Bhv_Custom_0x00407000,31),
OBJECT_WITH_ACTS(122,3700,1595,3113,0,-153,0,0x1000000, Bhv_Custom_0x00407000,31),
OBJECT_WITH_ACTS(122,-712,2066,6427,0,88,0,0x2000000, Bhv_Custom_0x00407000,31),
OBJECT_WITH_ACTS(0,-2889,-482,3882,0,-151,0,0x3000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,-5604,-313,-1583,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3878,-781,830,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2416,-417,3212,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4516,-885,-6458,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5428,-1225,3750,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2854,0,1833,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2787,0,-1399,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3110,-885,2263,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(188,-2958,-963,4643,0,45,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(201,170,-1007,-3170,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-5660,784,-1303,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(212,3665,1302,554,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(207,2918,1829,1796,0,90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,2785,2180,2480,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2451,2546,2480,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2118,2913,2480,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1785,3280,2480,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1785,3540,2140,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1785,3800,1800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(18,2407,3958,1800,0,0,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,3413,2344,1796,0,270,0,0xb0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(124,-5587,-963,1802,0,0,0,0x670000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(84,1501,-833,-1953,0,270,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(84,-2876,-781,1950,0,180,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(0,-5580,0,614,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3285,-729,1073,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5568,-885,21,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1450,2448,1838,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,1866,-963,-5171,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2912,-963,-4181,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-662,-963,-3806,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-1521,-963,-3506,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-537,-963,-624,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-1824,-963,87,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-1020,-963,4244,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6815,-963,-69,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-5482,-208,1012,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2098,1829,849,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2706,1829,2818,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3313,-963,1765,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(212,1550,690,-4080,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,1029,2135,379,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,3576,-591,-5354,0,320,0,0xa0000, bhvSpinAirborneWarp,31),

WARP_NODE(10,30,1,10,0),
WARP_NODE(11,16,1,2,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,48,0),
WARP_NODE(241,26,1,49,0),
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
	MARIO_POS(1, 0, 0, 3000, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};