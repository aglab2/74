#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bowser_2/header.h"


static const LevelScript script_bowser_2_macro_objects[] = {
    // Special objects
    OBJECT(/*model*/ MODEL_BOWSER, /*pos*/    -8,  1229, -1418, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowser),
    RETURN(),
};

static const LevelScript script_bowser_2_objects_1[] = {
OBJECT_WITH_ACTS(0,63,1330,2292,0,180,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(179,0,1589,-3583,0,90,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(0,42,1330,-2344,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(179,56,1589,3598,0,90,0,0x0, bhvBowserBomb,31),
OBJECT_WITH_ACTS(54,0,0,0,0,90,0,0x0, bhvTiltingBowserLavaPlatform,31),
OBJECT_WITH_ACTS(0,0,2229,0,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
    RETURN(),
};

const LevelScript level_bowser_2_entry[] = {
    INIT_LEVEL(),
    LOAD_YAY0(        /*seg*/ 0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd),
    LOAD_YAY0_TEXTURE(/*seg*/ 0x09, _fire_yay0SegmentRomStart, _fire_yay0SegmentRomEnd),
    LOAD_YAY0(        /*seg*/ 0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd),
    LOAD_YAY0(        /*seg*/ 0x07, _bowser_2_segment_7SegmentRomStart, _bowser_2_segment_7SegmentRomEnd),
    LOAD_YAY0(        /*seg*/ 0x06, _group12_yay0SegmentRomStart, _group12_yay0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_13),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_2_TILTING_ARENA, bowser_2_geo_000170),

    AREA(/*index*/ 1, bowser_2_geo_000188),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, 2229, 0, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSpinAirborneCircleWarp),
WARP_NODE(241,19,1,6,0),
WARP_NODE(240,31,1,72,0),
WARP_NODE(10,33,1,10,0),
        JUMP_LINK(script_bowser_2_objects_1),
        TERRAIN(/*terrainData*/ bowser_2_seg7_collision_lava),
        JUMP_LINK(script_bowser_2_macro_objects),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0002, /*seq*/ SEQ_LEVEL_BOSS_KOOPA),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ 0, 1229, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
