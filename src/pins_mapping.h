/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis
  Modified for ESP8266 platform by Ivan Grokhotkov, 2014-2015.

  This library is free software you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 249 2007-02-03 16:52:51Z mellis $
*/

#ifndef NODEMCU_PIN_MAPPING
#define NODEMCU_PIN_MAPPING

// SPI PIN
#define  RST     15
#define  SS     15
#define  MOSI   13
#define  MISO   12
#define  SCK    14

#define  A0     17
// I2C PIN
#define SDA     4
#define SCL     5

#define LED_BUILTIN 16
#define BUILTIN_LED 16

// DIGITAL PIN
#define D0      16
#define D1      5
#define D2      4
#define D3      0
#define D4      2
#define D5      14
#define D6      12
#define D7      13
#define D8      15
#define D9      3
#define D10     1

#endif /* Pins_Arduino_h */
