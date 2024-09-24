/* Copyright 2024 moyiz
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_MUST_HOLD_MODS
#define COMBO_TERM 20
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT

// Allows sending more than one key per scan. By default, only one key event
// gets sent via process_record() per scan. This has little impact on most
// typing, but if you're doing a lot of chords, or your scan rate is slow to
// begin with, you can have some delay in processing key events. Each press
// and release is a separate event. For a keyboard with 1ms or so scan times,
// even a very fast typist isn't going to produce the 500 keystrokes a second
// needed to actually get more than a few ms of delay from this. But if you're
// doing chording on something with 3-4ms scan times? You probably want this.
// Also: https://github.com/qmk/qmk_firmware/issues/13833
#define QMK_KEYS_PER_SCAN 4
