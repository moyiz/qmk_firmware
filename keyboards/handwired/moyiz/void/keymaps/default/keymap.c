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

enum layers {
  _QWE = 0,
  _ENG,
  _ISR,
  _MTG,
  _SYM,
  _NAV,
  _MED,
};



#define HRM_L(a,b,c,d) LGUI_T(a), LALT_T(b), LSFT_T(c), LCTL_T(d)
#define HRM_R(a,b,c,d) RGUI_T(a), RALT_T(b), RSFT_T(c), RCTL_T(d)

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
 * 
 * [_SYM] = LAYOUT(
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
    *               │GUI│ C │ V │ B │ │GUI│ C │ V │ B │
    *               └───┴───┴───┴───┘ └───┴───┴───┴───┘
    */
  [_QWE] = LAYOUT(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_GESC,  KC_MINS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                               KC_LCTL, KC_BSPC, KC_SPC, KC_LCTL,  KC_RSFT, KC_ENT,  KC_ENT,  KC_RALT
  ),

  [_ISR] = LAYOUT(
    _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,                      KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______, \
    _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,                      KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN, \
    _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    _______, _______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______, \
                               _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_MTG] = LAYOUT(
    _______, KC_Y,    KC_P,    KC_O,    KC_U,    KC_J,                      KC_K,    KC_D,    KC_L,    KC_C,    KC_M,    _______, \
    _______, KC_I,    KC_N,    KC_E,    KC_A,    KC_COMM,                   KC_M,    KC_H,    KC_T,    KC_S,    KC_R,    _______, \
    _______, KC_Q,    KC_Z,    KC_SLSH, KC_DOT,  KC_SCLN, _______, _______, KC_B,    KC_F,    KC_G,    KC_V,    KC_X,    _______, \
                               _______, _______, _______, _______, _______, _______, _______, _______
  ),

  /*
   * [_SYM] = LAYOUT(
   *   _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
   *   _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
   *   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
   *                              _______, _______, _______, _______, _______, _______, _______, _______, 
   * ),
   */
};
