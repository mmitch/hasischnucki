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

#include "icons.c"
#include "screen.c"

typedef struct {
	Scalar xpos, ypos;
	Scalar xsize, ysize;
} PlayField;

PlayField fields[2];
Scalar field_max;

static void drawBorder(const PlayField *field) {
	drawBox( field->xpos - 1,
		 field->ypos - 1,
		 field->xpos + field->xsize*2,
		 field->ypos + field->ysize*2,
		 false );
}

static void drawIconInField(const PlayField *field, const Scalar x, const Scalar y, const Scalar icon) {
	drawIcon(field->xpos + x*2, field->ypos + y*2, icon);
}

static void randomizePlayField(const PlayField *field) {
	for (Scalar y = 0; y < field->ysize; y++) {
		for (Scalar x = 0; x < field->xsize; x++) {
			Scalar r = rand() % 7;
			if (r < 6) {
				drawIconInField(field, x, y, r);
			}
		}
	}
}

static void initTwoPlayFields() {
	field_max = 2;
	
	fields[0].xpos  = 4;
	fields[0].ypos  = 3;
	fields[0].xsize = 7;
	fields[0].ysize = 9;

	fields[1].xpos  = 22;
	fields[1].ypos  = 3;
	fields[1].xsize = 7;
	fields[1].ysize = 9;
}

static void drawPlayFields() {
	for (Scalar i = 0; i < field_max; i++) {
		drawBorder(fields + i);
		randomizePlayField(fields + i);
	}
}
