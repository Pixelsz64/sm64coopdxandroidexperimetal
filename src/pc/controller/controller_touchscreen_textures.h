#ifndef CONTROLLER_TOUCHSCREEN_TEXTURES_H
#define CONTROLLER_TOUCHSCREEN_TEXTURES_H
#ifdef TOUCH_CONTROLS
#include "macros.h"
#include "types.h"

enum TouchTextureIndex {
    TEXTURE_TOUCH_JOYSTICK,
    TEXTURE_TOUCH_JOYSTICK_BASE,
    TEXTURE_TOUCH_C_UP,
    TEXTURE_TOUCH_C_UP_PRESSED,
    TEXTURE_TOUCH_C_DOWN,
    TEXTURE_TOUCH_C_DOWN_PRESSED,
    TEXTURE_TOUCH_C_LEFT,
    TEXTURE_TOUCH_C_LEFT_PRESSED,
    TEXTURE_TOUCH_C_RIGHT,
    TEXTURE_TOUCH_C_RIGHT_PRESSED,
    TEXTURE_TOUCH_DPAD_UP,
    TEXTURE_TOUCH_DPAD_UP_PRESSED,
    TEXTURE_TOUCH_DPAD_DOWN,
    TEXTURE_TOUCH_DPAD_DOWN_PRESSED,
    TEXTURE_TOUCH_DPAD_LEFT,
    TEXTURE_TOUCH_DPAD_LEFT_PRESSED,
    TEXTURE_TOUCH_DPAD_RIGHT,
    TEXTURE_TOUCH_DPAD_RIGHT_PRESSED,
    TEXTURE_TOUCH_A,
    TEXTURE_TOUCH_A_PRESSED,
    TEXTURE_TOUCH_B,
    TEXTURE_TOUCH_B_PRESSED,
    TEXTURE_TOUCH_X,
    TEXTURE_TOUCH_X_PRESSED,
    TEXTURE_TOUCH_Y,
    TEXTURE_TOUCH_Y_PRESSED,
    TEXTURE_TOUCH_START,
    TEXTURE_TOUCH_START_PRESSED,
    TEXTURE_TOUCH_L,
    TEXTURE_TOUCH_L_PRESSED,
    TEXTURE_TOUCH_R,
    TEXTURE_TOUCH_R_PRESSED,
    TEXTURE_TOUCH_Z,
    TEXTURE_TOUCH_Z_PRESSED,
    TEXTURE_TOUCH_CHAT,
    TEXTURE_TOUCH_CHAT_PRESSED,
    TEXTURE_TOUCH_PLAYERLIST,
    TEXTURE_TOUCH_PLAYERLIST_PRESSED,
    TEXTURE_TOUCH_CONSOLE,
    TEXTURE_TOUCH_CONSOLE_PRESSED,
    TEXTURE_TOUCH_CHECK,
    TEXTURE_TOUCH_CROSS,
    TEXTURE_TOUCH_RESET,
    TEXTURE_TOUCH_SNAP,
    TEXTURE_TOUCH_TRASH,
    TOUCH_TEXTURE_COUNT,
};

//excoop ver

ALIGNED8 const u8 texture_excoop_touch[];

ALIGNED8 const u8 texture_excoop_touchdark[];

extern const Texture *const touch_textures[TOUCH_TEXTURE_COUNT];

#endif
#endif