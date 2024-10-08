/*
 * hasischnucki - a match-three game for uzebox
 *
 * Copyright (C) 2024 by  Christian Garbs <mitch@cgarbs.de>
 * licensed under the GNU GPL v3 or later
 *
 * see https://github.com/mmitch/uzepede
 *
 */

#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <avr/io.h>
#include <stdlib.h>
#include <avr/pgmspace.h>
#include <uzebox.h>
#include <math.h>
#include <stdio.h>

#include "data/tiles.inc"
#include "data/patches.h"

typedef u8  Scalar;
typedef u8  Boolean;
typedef char Tile;
typedef u16 Joypad;
typedef unsigned int BigScalar;

#endif
