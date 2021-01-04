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

#if HOTENDS > 3 || E_STEPPERS > 3
  #error "BIGTREE SKR Pro V1.2 supports up to 3 hotends / E-steppers."
#endif

#define BOARD_INFO_NAME "BTT SKR Pro V1.2"


#define I2C_EEPROM
#ifdef E2END
   #undef E2END
#endif
#define E2END 0x7FFF // EEPROM end address AT24C256 (32kB)

#ifdef NO_EEPROM_SELECTED
  #undef NO_EEPROM_SELECTED
#endif 

#ifndef SDCARD_CONNECTION
  #define SDCARD_CONNECTION                  LCD
#endif

#include "pins_BTT_SKR_PRO_common.h"
