/*
Copyright 2024 @moyiz

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
#include <stdint.h>
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "config.h"

// clang-format off
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
 *                              _______, _______, _______, _______, _______, _______, _______, _______
 * ),
 */


#define SPC_SFT LSFT_T(KC_SPC)
#define ENT_SFT RSFT_T(KC_ENT)

#define TAB_SFT LSFT_T(KC_TAB)
#define BS_SFT LSFT_T(KC_BSPC)
#define DEL_SFT LSFT_T(KC_DEL)

#define LOWER MO(_LOW)
#define RAISE MO(_RAI)

#define OS_LOW OSL(_LOW)
#define OS_RAI OSL(_RAI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     // Qwerty
    [_QW] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
        CW_TOGG, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   QK_AREP,  QK_REP,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                                   MO(_SS), OS_LOW,  RAISE,  SPC_SFT,  ENT_SFT, LOWER,   OS_RAI,  MO(_SS)
    ),

    // ISRT
    [_IS] = LAYOUT(
        _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,                      KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______, \
        _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,                      KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN, \
        _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    _______, _______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    //{{{
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
    //}}}

    /*
     * ┌───┬───┬───┬───┬───┬───┐             ┌───┬───┬───┬───┬───┬───┐
     * |   │ 1 │ 2 │ 3 │ 4 │ 5 │             │ 6 │ 7 │ 8 │ 9 │ 0 │   │
     * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
     * |   │   │   │   │   │ . │             │   │ < │ v │ ^ │ > │   │
     * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
     * |   │   │   │   │   │   │ ┌───┐ ┌───┐ │   │ H │PD │PU │ E │   │
     * └───┴───┴───┴───┴───┴───┘ │   │ │   │ └───┴───┴───┴───┴───┴───┘
     *               ┌───┬───┬───┼───┤ ├───┼───┬───┬───┐
     *               │   │   │   │BS │ │   │   │   │   │
     *               └───┴───┴───┴───┘ └───┴───┴───┴───┘
     */
    [_LOW] = LAYOUT(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
        _______, _______, _______, _______, _______, KC_DOT,                    _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, \
                                   _______, _______, _______, BS_SFT,  _______, _______, _______, _______
    ),

    /*
     * ┌───┬───┬───┬───┬───┬───┐             ┌───┬───┬───┬───┬───┬───┐
     * |   │ ! │ @ │ # │ $ │ % │             │ ^ │ & │ * │ ( │ ) │   │
     * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
     * |   │ < │ { │ [ │ ( │   │             │   │ ) │ ] │ } │ > │   │
     * ├───┼───┼───┼───┼───┤───┤             ├───┼───┼───┼───┼───┼───┤
     * |CPS│   │   │   │ " │   │ ┌───┐ ┌───┐ │   │ ; │ : │ | │   │   │
     * └───┴───┴───┴───┴───┴───┘ │   │ │   │ └───┴───┴───┴───┴───┴───┘
     *               ┌───┬───┬───┼───┤ ├───┼───┬───┬───┐
     *               │   │   │   │DEL│ │TAB│   │   │   │
     *               └───┴───┴───┴───┘ └───┴───┴───┴───┘
     */
    [_RAI] = LAYOUT(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
        _______, KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, _______,                   _______, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, _______, \
        KC_CAPS, _______, _______, _______, KC_DQUO, _______, _______, _______, _______, KC_SCLN, KC_COLN, KC_PIPE, _______, _______, \
                                   _______, _______, _______, DEL_SFT, TAB_SFT, _______, _______, _______
    ),

    /*
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
    [_ADJ] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
        _______, _______, _______, KC_VOLD, KC_VOLU, KC_F11,                    KC_F12,  _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPRV, _______, _______, KC_MNXT, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Mouse
    [_MS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, _______, \
        _______, _______, _______, _______, _______, _______,                   _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, \
        _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, _______, _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // Gaming
    [_GM] = LAYOUT(
        KC_ESC,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                      _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, _______, \
        _______, KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, \
        _______, KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, \
                                   _______, _______, _______, KC_SPACE,_______, _______, _______, _______
    ),

    /*
    // Media & Brightness
    [_MD] = LAYOUT(
        _______, _______, KC_BRID, KC_MPLY, KC_BRIU, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_MPRV, KC_MSTP, KC_MNXT, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),
,
    // Window manager
    [_WM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),
    */

    // System
    [_SS] = LAYOUT(
        KC_MUTE, TO(_QW), _______, _______, _______, TO(_MT),                   _______, _______, _______, _______, _______, QK_BOOT, \
        KC_VOLU, TO(_AP), TO(_IS), _______, _______, TO(_GM),                   _______, TG(_MS), _______, _______, _______, _______, \
        KC_VOLD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /*
    // Misc
    [_LK] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                                   QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
    */
};

// clang-format on

// Auto suspend
// static uint32_t last_keypress_time = 0;
//
// void matrix_scan_user(void) {
//     if (timer_elapsed(last_keypress_time) > TIMEOUT_PERIOD) {
//         layer_on(_LK);
//     } else {
//         layer_off(_LK);
//     }
// }
//
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     if (record->event.pressed) {
//         last_keypress_time = timer_read();
//     }
//
//     return true;
// }

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _RAI, _LOW, _ADJ);
}

// vim: foldmethod=marker
