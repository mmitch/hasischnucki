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

typedef struct {
	const Scalar x;
	const Scalar y;
	const Tile  *tile;
} map;

// FIXME: why does the iterative access not work with PROGMEM, neither indexed nor pointered?
// TODO: redraw t-tiles on a second pass? first pass only corner/straight?
const map LOGO[]  = {
	{  0, 0, border_v  }, // H
	{  0, 1, border_v  },
	{  0, 2, border_v  },
	{  2, 1, border_v  },
	{  2, 0, border_v  },
	{  2, 2, border_v  },
	{  0, 1, border_vr },
	{  1, 1, border_h  },
	{  2, 1, border_vl },
	{  4, 2, border_v  }, // A
	{  4, 1, border_v  },
	{  4, 0, border_tl },
	{  5, 0, border_h  },
	{  6, 0, border_tr },
	{  6, 1, border_v  },
	{  6, 2, border_v  },
	{  4, 1, border_vr },
	{  5, 1, border_h  },
	{  6, 1, border_vl },
	{ 11, 0, border_h  }, // S
	{ 10, 0, border_h  },
	{  9, 0, border_h  },
	{  8, 0, border_tl },
	{  8, 1, border_bl },
	{  9, 1, border_h  },
	{ 10, 1, border_h  },
	{ 11, 1, border_tr },
	{ 11, 2, border_br },
	{ 10, 2, border_h  },
	{  9, 2, border_h  },
	{  8, 2, border_h  },
	{ 13, 0, border_v  }, // I
	{ 13, 1, border_v  },
	{ 13, 2, border_v  },
	
	{  1, 5, border_h  }, // S
	{  0, 5, border_tl },
	{  0, 6, border_bl },
	{  1, 6, border_tr },
	{  1, 7, border_br },
	{  0, 7, border_h  },
	{  3, 5, border_h  }, // C
	{  2, 5, border_tl },
	{  2, 6, border_v  },
	{  2, 7, border_bl },
	{  3, 7, border_h  },
	{  4, 7, border_v  }, // H
	{  4, 6, border_vr },
	{  4, 5, border_v  },
	{  5, 5, border_v  },
	{  5, 6, border_vl },
	{  5, 7, border_v  },
	{  6, 7, border_v  }, // N
	{  6, 6, border_v  },
	{  6, 5, border_tl },
	{  7, 5, border_tr },
	{  7, 6, border_v  },
	{  7, 7, border_bl },
	{  8, 7, border_br },
	{  8, 6, border_v  },
	{  8, 5, border_v  },
	{ 10, 5, border_h  }, // C
	{  9, 5, border_tl },
	{  9, 6, border_v  },
	{  9, 7, border_bl },
	{ 10, 7, border_h  },
	{ 11, 5, border_v  }, // K
	{ 11, 6, border_v  },
	{ 11, 7, border_v  },
	{ 11, 6, border_vr },
	{ 12, 6, border_br },
	{ 12, 5, border_v  },
	{ 12, 7, border_v  },
	{ 13, 5, border_v  }, // I
	{ 13, 6, border_v  },
	{ 13, 7, border_v  },
	{  0, 0, NULL },
};

static void drawTitleScreen() {
	for (const map* draw = LOGO; draw->tile; draw++) {
		WaitVsync(2);
		DrawMap( 13 + draw->x, 9 + draw->y, draw->tile );
	}
}
