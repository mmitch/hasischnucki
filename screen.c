/*
 * hasischnucki - a match-three game for uzebox
 *
 * Copyright (C) 2024 by  Christian Garbs <mitch@cgarbs.de>
 * licensed under the GNU GPL v3 or later
 *
 * see https://github.com/mmitch/uzepede
 *
 */

#ifndef _SCREEN_C_
#define _SCREEN_C_

#include "globals.h"

static void clearScreen() {
	Fill(0, 0, 40, 28, 0);
}

static void drawBox(const Scalar xmin, const Scalar ymin, const Scalar xmax, const Scalar ymax, const Boolean clear) {
	Scalar i;

	DrawMap( xmin, ymin, border_tl );
	DrawMap( xmax, ymin, border_tr );
	DrawMap( xmin, ymax, border_bl );
	DrawMap( xmax, ymax, border_br );

	for (i = xmin+1; i < xmax; i++) {
		DrawMap( i, ymin, border_h );
		DrawMap( i, ymax, border_h );
	}
	for (i = ymin+1; i < ymax; i++) {
		DrawMap( xmin, i, border_v );
		DrawMap( xmax, i, border_v );
	}

	if (clear) {
		Fill( xmin+1, ymin+1, xmax-xmin-1, ymax-ymin-1, 0 );
	}
}

#endif
