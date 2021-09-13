/* Copyright 2021 moyiz
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
#include QMK_KEYBOARD_H

#define _FN1 1
#define _FN2 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* QWERTY
   * .--------------------------------------------------------------------------------------------------------------------------------------.
   * | GESC   | 1      | 2      | 3      | 4      | 5      | HOME   | PG UP  | DEL    | 6      | 7      | 8      | 9      | 0      | BACKSP |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
   * | TAB    | Q      | W      | E      | R      | T      | END    | PG DN  | \      | Y      | U      | I      | O      | P      | ENTER  |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
   * | CAP LK | A      | S      | D      | F      | G      | [      | =      | ]      | H      | J      | K      | L      | ;      | '      |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
   * | LSHIFT | Z      | X      | C      | V      | B      | `      | UP     | -      | N      | M      | ,      | .      | /      | RSHIFT |
   * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
   * | LCTRL  | LGUI   | LALT   | FN1    | BACKSP | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | ENTER  | FN2    | RALT   | RGUI   | RCTRL  |
   * '--------------------------------------------------------------------------------------------------------------------------------------'
   */
  [0] = LAYOUT_ortho_5x15(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_HOME, KC_PGUP, KC_DEL,  KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_END,  KC_PGDN, KC_BSLS, KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_ENT,  \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC, KC_EQL,  KC_RBRC, KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_UP,   KC_MINS, KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    KC_LCTL, KC_LGUI, KC_LALT, MO(_FN1),KC_BSPC, KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,   KC_ENT,   MO(_FN2),KC_RALT, KC_RGUI, KC_RCTL  \
  ),

  /* FUNCTION 1 Layer - Numpad, missing keys
   * .-----------------------------------------------------------------------------------------.-------------------------------------------.
   * | GRAVE  |        |        |        | PSCR   |        | NLCK   | P/     | P*     | P-     |        |        | -      | =      | DEL   |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | P7     | P8     | P9     | P+     |        |        | [      | ]      | HOME  |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * | FN2    |        |        |        |        |        | P4     | P5     | P6     | P=     |        |        |        | \      | END   |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | P1     | P2     | P3     | PENT   |        |        |        |        | PG UP |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | P0     | P0     | P.     | PENT   |        |        |        | MENU   | PG DN |
   * '-----------------------------------------------------------------------------------------'-------------------------------------------'
   */
  [_FN1] = LAYOUT_ortho_5x15(
      KC_GRV,  _______, _______, _______, KC_PSCR, _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______, _______, KC_MINS, KC_EQL,  KC_DEL,
      _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______, _______, KC_LBRC, KC_RBRC, KC_HOME,
      MO(_FN2),_______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PEQL, _______, _______, _______, KC_BSLS, KC_END,
      _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______, _______, _______, _______, KC_PGUP,
      _______, _______, _______, _______, _______, _______, KC_P0,   KC_P0,   KC_PDOT, KC_PENT, _______, _______, _______, KC_APP,  KC_PGDN
  ),

  /* FUNCTION 2 Layer - Functions (F1-12, media, arrows, rgb, extra)
   * .--------------------------------------------------------------------------------.----------------------------------------------------.
   * | MUTE   | F1     | F2     | F3     | F4     | F5     | F11    | F12    | RESET  | F6     | F7     | F8     | F9     | F10    | POWER |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | RGB RMD| RGB TG | RGB MD | HUE    | SAT    | BRGHT  | BRGHT- | BRGHT+ |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | VOL-   | MUTE   | VOL+   | LEFT   | DOWN   | UP     | RIGHT  |        |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | RWND   | PLAY   | FWRD   |        |        |        |        |        |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        | DEL    |        | PREV   | STOP   | NEXT   |        |        |        |        |        |       |
   * '-----------------------------------------------------------------------------------------'-------------------------------------------'
   */
  [_FN2] = LAYOUT_ortho_5x15(
      KC_MUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,  KC_F12,  RESET,  KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_POWER,
      _______, _______, _______, _______, _______, _______, RGB_RMOD,RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_BRID, KC_BRIU, _______,
      _______, _______, _______, _______, _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______,
      _______, _______, _______, _______, _______, _______, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______,KC_DEL,   _______, KC_MPRV, KC_MSTP, KC_MNXT, _______, _______, _______, _______, _______, _______
  ),

};
