// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "config.h"

/*
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

enum layer {
    _QW = 0, // Qwerty
    _EN,     // Engram
    _IS,     // ISRT
    _MT,     // MTGAP
    _AP,     // APTv3
    _LOW,    // Lower
    _RAI,    // Raise
    _ADJ,    // Adjust
    _MS,     // Mouse
    _GM,     // Gaming
    // _WM,     // Window Manager
    _SS, // System
    // _MC,     // Misc
    // _LK,     // Lock
};

// clang-format off
/*
    [_LY] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______, _______,  _______
    ),
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QW] = LAYOUT(
        KC_CAPS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        CW_TOGG, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            OS_LOW,  RAISE,   SPC_SFT, ENT_SFT, LOWER,   OS_RAI
    ),

    [_IS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,                      KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______,
        _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,                      KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN,
        _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,                      KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______,
                                            _______, _______, _______, _______, _______,  _______
    ),

    [_LOW] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, KC_DOT,                    _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______,                   _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
                                            _______, _______, BS_SFT,  _______, _______, _______
    ),

    [_RAI] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        _______, KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, _______,                   _______, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, _______,
        _______, _______, _______, _______, KC_DQUO, _______,                   _______, KC_SCLN, KC_COLN, KC_PIPE, _______, _______,
                                            _______, _______, DEL_SFT, TAB_SFT, _______, _______
    ),

    [_ADJ] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, QK_BOOT,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, TO(_IS), _______, KC_VOLD, KC_VOLU, KC_F11,                    KC_F12,  TO(_MS), _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, KC_MPRV, _______, _______, KC_MNXT, _______,
                                            _______, _______, _______, _______, _______, _______
    ),

    // Mouse
    [_MS] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, _______,
        _______, _______, _______, _______, _______, _______,                   _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, _______,                   _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                                            _______, _______, _______, _______, _______, _______
    ),

    // Gaming
    [_GM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        KC_ESC,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                      _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, _______,
        _______, KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        _______, KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,                      _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                                            _______, _______, KC_SPC,  _______, _______, _______
    ),

};

// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _RAI, _LOW, _ADJ);
}
