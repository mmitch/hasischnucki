/*
 * hasischnucki - a match-three game for uzebox
 *
 * Copyright (C) 2024 by  Christian Garbs <mitch@cgarbs.de>
 * licensed under the GNU GPL v3 or later
 *
 * see https://github.com/mmitch/uzepede
 *
 */

#include "globals.h"

static void joypadWaitForAnyRelease(){
  while (ReadJoypad(0) != 0) {};
}

static void joypadWaitForAnyPress(){
  while (ReadJoypad(0) == 0) {};
}

static void joypadWaitForAnyTap(){
  joypadWaitForAnyRelease();
  joypadWaitForAnyPress();
}
