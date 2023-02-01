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
#include QMK_KEYBOARD_H
#include "../../void.h"

// enum layers {
//   _QW = 0, // Qwerty
//   _EN, // Engram
//   _IS, // ISRT
//   _MT, // MTGAP
//   _AP, // APTv3
//   _LM, // Layer Manager
//   _NM, // Numbers
//   _SY, // Symbols
//   _NV, // Navigation
//   _MS, // Mouse
//   _WM, // Window Manager
//   _SS, // System
// };

#define HRM_L(a,b,c,d) LGUI_T(a), LALT_T(b), LSFT_T(c), LCTL_T(d)
#define HRM_R(a,b,c,d) RGUI_T(a), RALT_T(b), RSFT_T(c), RCTL_T(d)

#define OSSFT_R OSM(MOD_RSFT)
#define OSSFT_L OSM(MOD_LSFT)
#define ENT_NV LT(_NV, KC_ENT)

/*
 * Template
 *
 * ┌───┬───┬───┬───┬───┬───┐             ┌───┬───┬───┬───┬───┬───┐
 * |   │   │   │   │   │   │             │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
 * |   │   │   │   │   │   │             │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
 * |   │   │   │   │   │   │ ┌───┐ ┌───┐ │   │   │   │   │   │   │
 * └───┴───┴───┴───┴───┴───┘ │   │ │   │ └───┴───┴───┴───┴───┴───┘
 *               ┌───┬───┬───┼───┤ ├───┼───┬───┬───┐
 *               │   │   │   │   │ │   │   │   │   │
 *               └───┴───┴───┴───┘ └───┴───┴───┴───┘
 */
/* [_SYM] = LAYOUT(
 *   _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
 *   _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
 *   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
 *                              _______, _______, _______, _______, _______, _______, _______, _______,
 * ),
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *   _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
     *   _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
     *   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
     *                              _______, _______, _______, _______, _______, _______, _______, _______,
     *
     * ┌───┬───┬───┬───┬───┬───┐             ┌───┬───┬───┬───┬───┬───┐
     * |TAB│ Q │ W │ E │ R │ T │             │ Y │ U │ I │ O │ P │ BS│
     * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
     * |CAP│ A │ S │ D │ F │ G │             │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
     * |SHF│ Z │ X │ C │ V │ B │ ┌───┐ ┌───┐ │ N │ M │ , │ . │ / │SHF│
     * └───┴───┴───┴───┴───┴───┘ │ESC│ │ - │ └───┴───┴───┴───┴───┴───┘
     *               ┌───┬───┬───┼───┤ ├───┼───┬───┬───┐
     *               │GUI│SFT│ V │ B │ │GUI│ C │SFT│SYS│
     *               └───┴───┴───┴───┘ └───┴───┴───┴───┘
     */
     // Qwerty
    [_QW] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
        CAPSWRD, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   XXXXXXX,  XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                                   OSL(_SY),KC_BSPC, KC_SPC, OSSFT_L,  OSSFT_R, ENT_NV,  KC_DEL,  OSL(_NM)
    ),

    // ISRT
    [_IS] = LAYOUT(
        _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,                      KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______, \
        _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,                      KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN, \
        _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    _______, _______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // MTGAP
    [_MT] = LAYOUT(
        _______, KC_Y,    KC_P,    KC_O,    KC_U,    KC_J,                      KC_K,    KC_D,    KC_L,    KC_C,    KC_W,    _______, \
        _______, KC_I,    KC_N,    KC_E,    KC_A,    KC_COMM,                   KC_M,    KC_H,    KC_T,    KC_S,    KC_R,    _______, \
        _______, KC_Q,    KC_Z,    KC_SLSH, KC_DOT,  KC_SCLN, _______, _______, KC_B,    KC_F,    KC_G,    KC_V,    KC_X,    _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // APTv3
    [_AP] = LAYOUT(
        _______, KC_W,    KC_G,    KC_D,    KC_F,    KC_B,                      KC_Q,    KC_L,    KC_U,    KC_O,    KC_Y,    _______, \
        _______, KC_R,    KC_S,    KC_T,    KC_H,    KC_K,                      KC_J,    KC_N,    KC_E,    KC_A,    KC_I,    KC_SCLN, \
        _______, KC_X,    KC_C,    KC_M,    KC_P,    KC_V,    _______, _______, KC_Z,    KC_COMM, KC_DOT,  KC_QUOT, KC_SLSH, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_LM] = LAYOUT(
        _______, TT(_SS), TT(_MS), _______, _______, _______,                   _______, _______, _______, TT(_MS), TT(_SS), _______, \
        _______, TT(_MD), TT(_NV), TT(_SY), TT(_NM), _______,                   _______, TT(_NM), TT(_SY), TT(_NV), TT(_MD), _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Numbers & Functions
    [_NM] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
        _______, KC_0,    KC_9,    KC_8,    KC_7,    KC_6,    _______, _______, KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Symbols
    [_SY] = LAYOUT(
        _______, KC_GRV,  _______, _______, _______, _______,                   _______, KC_SCLN, KC_BSPC, KC_LBRC, KC_RBRC, _______, \
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   _______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______, \
        _______, _______, _______, KC_ASTR, KC_AMPR, KC_CIRC, _______, _______, _______, KC_MINS, KC_EQL,  KC_LABK, KC_RABK, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Navigation
    [_NV] = LAYOUT(
        _______, _______, _______, KC_PGUP, _______, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, KC_PSCR, KC_HOME, KC_PGDN, KC_END,  _______,                   _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, \
        _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Mouse
    [_MS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, KC_BTN1, KC_BTN2, _______, _______, \
        _______, _______, _______, _______, _______, _______,                   _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, \
        _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, _______, _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Media & Brightness
    [_MD] = LAYOUT(
        _______, _______, KC_BRID, KC_MPLY, KC_BRIU, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_MPRV, KC_MSTP, KC_MNXT, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Window manager
    [_WM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // System
    [_SS] = LAYOUT(
        _______, TO(_QW), _______, _______, _______, TO(_MT),                   _______, _______, _______, _______, _______, QK_BOOT, \
        _______, TO(_AP), TO(_IS), _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
