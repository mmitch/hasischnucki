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

// directly including .c files - yuck :)
// This will allow for proper code separation,
// but won't give is incremental builds.
// But this bit of code will compile fast anyway.
#include "titlescreen.c"
#include "input.c"
#include "screen.c"
#include "playfield.c"

int main(){

	SetTileTable(Tiles);
	InitMusicPlayer(patches);
	clearScreen();

	drawTitleScreen();
	joypadWaitForAnyTap();

	srand(1337); // FIXME: use real seed later
	
	clearScreen();
	initTwoPlayFields();
	drawPlayFields();
	
	while(1);

}
