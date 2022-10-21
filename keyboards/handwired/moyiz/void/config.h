/*
Copyright 2022 @moyiz
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

// Communication
// #define USE_I2C
#define USE_SERIAL

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_COL_PINS \
    { B8, B4, B9, A15, B0, A3, A0 }
#define MATRIX_ROW_PINS \
    { B3, A4, A2, A1 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
// #define RGB_DI_PIN D3
// #define DRIVER_LED_TOTAL 36
// #define RGB_MATRIX_SPLIT { 18, 18 }
// #define RGB_MATRIX_CENTER { 133, 54 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#undef LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#undef LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#undef PERMISSIVE_HOLD

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// #define ENCODERS_PAD_A { B10 }
// #define ENCODERS_PAD_B { B12 }
// #define ENCODER_RESOLUTION 2

#define TAPPING_TERM 200

// #define I2C_DRIVER I2CD1
// #define I2C_SCL_PIN B10
// #define I2C_SDA_PIN B1
// #define I2C_SCL_PAL_MODE 4
// #define I2C_SDA_PAL_MODE 4
// #define EEPROM_I2C_24LC256
// #define I2C1_CLOCK_SPEED 400000
// #define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

#define SPLIT_HAND_PIN B9

#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6   // USART TX pin
#define SERIAL_USART_RX_PIN B7   // USART RX pin
#define SERIAL_USART_SPEED 921600

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE

#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM5
#define WS2812_DMA_CHANNEL 6