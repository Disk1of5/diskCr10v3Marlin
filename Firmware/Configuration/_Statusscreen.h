/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/CR-10 V2"

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_LOGO_Y      3
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000011,B11111111,B11111110,
  B00000000,B00000000,B00000010,B00001111,B11101001,
  B01110111,B00000010,B00110010,B00001111,B11101001,
  B10000100,B10000110,B01001010,B00001111,B11101001,
  B10000100,B10000010,B01001010,B00001111,B11111001,
  B10000111,B00111010,B01001010,B00000000,B00000001,
  B10000100,B10000010,B01001010,B00000000,B00000001,
  B10000100,B10000010,B01001010,B11111111,B11111101,
  B01110100,B10000111,B00110010,B10011111,B01111101,
  B00000000,B00000000,B00000010,B11011111,B01111101,
  B00000100,B01001100,B00000010,B11011110,B11111101,
  B00000100,B01010010,B00000010,B11011110,B11000101,
  B00000100,B01000010,B00000010,B10001101,B11011101,
  B00000010,B10001100,B00000010,B11111101,B11000101,
  B00000010,B10000010,B00000010,B11111011,B11110101,
  B00000001,B00010010,B00000010,B11111011,B11000101,
  B00000001,B00001100,B00000010,B11111111,B11111101,
  B00000000,B00000000,B00000010,B00000000,B00000001,
  B00000000,B00000000,B00000011,B11111111,B11111111,
  B00000000,B00000000,B00000000,B00000000,B00000000
};


//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
