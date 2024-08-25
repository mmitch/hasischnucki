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

static const Tile *ICONS[12] = {
	iconsetA_1u, iconsetA_1l,
	iconsetA_2u, iconsetA_2l,
	iconsetA_3u, iconsetA_3l,
	iconsetA_4u, iconsetA_4l,
	iconsetA_5u, iconsetA_5l,
	iconsetA_6u, iconsetA_6l,
};

static void drawIcon(const Scalar x, const Scalar y, const Scalar icon) {
	DrawMap( x, y,   ICONS[icon*2]   );
	DrawMap( x, y+1, ICONS[icon*2+1] );
}
