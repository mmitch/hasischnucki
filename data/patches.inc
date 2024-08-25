/*
 * hasischnucki - a match-three game for uzebox
 *
 * Copyright (C) 2024 by  Christian Garbs <mitch@cgarbs.de>
 * licensed under the GNU GPL v3 or later
 *
 * see https://github.com/mmitch/uzepede
 *
 */

const char fx_titlescreen[] PROGMEM ={ 
0,PC_WAVE,0,
0,PC_NOTE_DOWN,24,
0,PC_ENV_VOL,0,
0,PC_TREMOLO_LEVEL,64,
0,PC_TREMOLO_RATE,64,
0,PC_ENV_SPEED,1,
128,PC_ENV_SPEED,0,
32,PC_ENV_SPEED,-1,
0,PATCH_END
};


#define FX_TITLESCREEN 0

const struct PatchStruct patches[] PROGMEM = {
{0,NULL,fx_titlescreen,0,0},
};
