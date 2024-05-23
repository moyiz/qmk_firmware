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
#include "void.h"

// clang-format off
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05,              R05, R04, R03, R02, R01, R00, \
    L10, L11, L12, L13, L14, L15,              R15, R14, R13, R12, R11, R10, \
    L20, L21, L22, L23, L24, L25, L26,    R26, R25, R24, R23, R22, R21, R20, \
                   L33, L34, L35, L36,    R36, R35, R34, R33 \
) { \
    { L00, L01, L02, L03, L04, L05, ___ }, \
    { L10, L11, L12, L13, L14, L15, ___ }, \
    { L20, L21, L22, L23, L24, L25, L26 }, \
    { ___, ___, ___, L33, L34, L35, L36 }, \
    { R00, R01, R02, R03, R04, R05, ___ }, \
    { R10, R11, R12, R13, R14, R15, ___ }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { ___, ___, ___, R33, R34, R35, R36 } \
}

// clang-format on
const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
    {{0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4}, {6, 4}},
    {{0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}, {6, 5}},
    {{0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6}, {6, 6}},
    {{0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}, {6, 7}},

    {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}},
    {{0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {6, 1}},
    {{0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}, {6, 2}},
    {{0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}, {6, 3}},
};
