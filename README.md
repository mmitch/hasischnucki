# hasischnucki - a match-three game for uzebox

Copyright (C) 2024 by  Christian Garbs <mitch@cgarbs.de>  
licensed under the GNU GPL v3 or later

<https://github.com/mmitch/hasischnucki>

## features

none yet, this is work in progress :)

## gameplay

TBD

## game rules

TBD

## scoring

TBD

## controls

TBD

## compilation

These instructions are based on Debian Bookworm in 2024:

1. install the `avr-libc` package via _apt(1)_, _aptitude(1)_ or the like
2. clone or download the [uzebox source repository][1]
   - note that _hasischnucki_ will automatically try to compile both
     _gconvert_ and _packrom_ from the _uzebox_ toolset
3. clone or download the [hasischnucki source directory][2]
4. enter the `hasischnucki/` directory
5. manually edit the `UZEBOX_DIR` setting in `default/Makefile`
   to point to your `uzebox/` directory from step 2
6. compile _hasischnucki_ via `cd default; make`
7. you should now have a `hasischnucki.uze` file in the `default/` subdirectory

[1]: https://github.com/Uzebox/uzebox
[2]: https://github.com/mmitch/hasischnucki

## usage

There are several ways to play _hasischnucki_:

- copy `hasischnucki.uze` to the SD card of your uzebox
- run `hasischnucki.uze` in an emulator, eg. [cuzebox][3]
  (on Debian, you will need to install the `libsdl2-dev` package to compile it yourself)
- you should also be able to flash `hasischnucki.hex` directly to your uzebox,
  but you will overwrite the uzebox bootloader by doing so

[3]: https://github.com/Jubatian/cuzebox
