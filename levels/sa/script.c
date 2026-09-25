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
#include "levels/sa/header.h"

/* Fast64 begin persistent block [scripts] */
#include "levels/sa/custom_c/custom.collision.inc.c"
#define sa_area_1_collision col_sa_1_0xe00a898
extern const GeoLayout Geo_sa_1_0x2001700[];
#define sa_area_1 Geo_sa_1_0x2001700

#define bhvClockMinuteHand bhvStarRoadStarReplica
/* Fast64 end persistent block [scripts] */

const LevelScript level_sa_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd), 
    LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
    LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
    LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
    LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
    LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
    LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
	LOAD_VANILLA_OBJECTS(0, ssl, generic),
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
    LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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

	AREA(1, sa_area_1),
		TERRAIN(sa_area_1_collision),
		MACRO_OBJECTS(sa_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(0,35),
        TERRAIN_TYPE(0),
		/* Fast64 begin persistent block [area commands] */

OBJECT_WITH_ACTS(0,24,-1480,-639,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,107,2163,-1995,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(124,-667,-246,-212,0,40,0,0x60000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1800,1205,-2105,0,315,0,0x70000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(212,573,-188,120,0,-151,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-498,0,110,0,327,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,24,-1563,110,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2195,431,-1496,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-378,1319,1059,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1944,497,1687,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,1931,-1657,1693,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,-554,416,-1270,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,87,-3906,-922,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(22,87,-4401,781,0,180,0,0xb0000, bhvWarpPipe,31),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,16,1,2,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,66,0),
WARP_NODE(241,6,1,67,0),
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