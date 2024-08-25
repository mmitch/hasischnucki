/*
 * hasischnucki - a match-three game for uzebox
 *
 * Copyright (C) 2024 by  Christian Garbs <mitch@cgarbs.de>
 * licensed under the GNU GPL v3 or later
 *
 * see https://github.com/mmitch/uzepede
 *
 */

// directly including .c files - yuck :)
// This will allow for proper code separation,
// but won't give is incremental builds.
// But this bit of code will compile fast anyway.
#include "titlescreen.c"

int main(){

	SetTileTable(Tiles);
	InitMusicPlayer(patches);
	Fill(0, 0, 40, 28, 0);

	drawTitleScreen();

	while(1);

}
