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

#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_MUST_HOLD_MODS
#define COMBO_TERM 20

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 5000

#define TAPPING_TOGGLE 2

// https://docs.qmk.fm/#/feature_caps_word
#define CAPS_WORD_IDLE_TIMEOUT 3000
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#if !defined(__ASSEMBLER__)
enum layer {
    _QW = 0, // Qwerty
    _EN,     // Engram
    _IS,     // ISRT
    _MT,     // MTGAP
    _AP,     // APTv3
    _LM,     // Layer Manager
    _NM,     // Numbers
    _SY,     // Symbols
    _NV,     // Navigation
    _MS,     // Mouse
    _MD,     // Media
    _WM,     // Window Manager
    _SS,     // System
};
#endif
