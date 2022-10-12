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

enum layers {
  _QWE = 0,
  _ENG,
  _ISR,
  _MTG,
  _FN1,
  _FN2,
};

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
  [_QWE] = LAYOUT_ortho_5x15(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_HOME, KC_PGUP, KC_DEL,  KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_END,  KC_PGDN, KC_BSLS, KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_ENT,  \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC, KC_EQL,  KC_RBRC, KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_UP,   KC_MINS, KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    KC_LCTL, KC_LGUI, KC_LALT, MO(_FN1),KC_BSPC, KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,   KC_ENT,   MO(_FN2),KC_RALT, KC_RGUI, KC_RCTL  \
  ),

  /* ENGRAM
   * .--------------------------------------------------------------------------------------------------------------------------------------.
   * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
   * |        | B      | Y      | O      | U      | ;      |        |        |        | '      | L      | D      | W      | V      | Z      |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
   * |        | C      | I      | E      | A      | ,      |        |        |        | .      | H      | T      | S      | N      | Q      |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
   * |        | G      | X      | J      | K      | \      |        |        |        | /      | R      | M      | F      | P      |        |
   * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
   * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
   * '--------------------------------------------------------------------------------------------------------------------------------------'
   */
  [_ENG] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_B,    KC_Y,    KC_O,    KC_U,    KC_SCLN, _______, _______, _______, KC_QUOT, KC_L,    KC_D,    KC_W,    KC_V,    KC_Z,    \
    _______, KC_C,    KC_I,    KC_E,    KC_A,    KC_COMM, _______, _______, _______, KC_DOT,  KC_H,    KC_T,    KC_S,    KC_N,    KC_Q,    \
    _______, KC_G,    KC_X,    KC_J,    KC_K,    KC_BSLS, _______, _______, _______, KC_SLSH, KC_R,    KC_M,    KC_F,    KC_P,    _______, \
    _______, _______, _______, MO(_FN1),_______, _______, _______, _______, _______, _______, _______, MO(_FN2), _______, _______, _______  \
  ),

  /* ISRT
   * .--------------------------------------------------------------------------------------------------------------------------------------.
   * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
   * |        | Y      | C      | L      | M      | K      |        |        |        | Z      | F      | U      | ,      | '      |        |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
   * |        | I      | S      | R      | T      | G      |        |        |        | P      | N      | E      | A      | O      | ;      |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
   * |        | Q      | V      | W      | D      | J      |        |        |        | B      | H      | /      | .      | X      |        |
   * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
   * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
   * '--------------------------------------------------------------------------------------------------------------------------------------'
   */
  [_ISR] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,    _______, _______, _______, KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______, \
    _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,    _______, _______, _______, KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN, \
    _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    _______, _______, _______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______, \
    _______, _______, _______, MO(_FN1),_______, _______, _______, _______, _______, _______, _______, MO(_FN2), _______, _______, _______  \
  ),

  /* MTGAP30
   * .--------------------------------------------------------------------------------------------------------------------------------------.
   * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
   * |        | Y      | P      | O      | U      | J      |        |        |        | K      | D      | L      | C      | W      |        |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
   * |        | I      | N      | E      | A      | ,      |        |        |        | M      | H      | T      | S      | R      |        |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
   * |        | Q      | Z      | /      | .      | ;      |        |        |        | B      | F      | G      | V      | X      |        |
   * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
   * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
   * '--------------------------------------------------------------------------------------------------------------------------------------'
   */
  [_MTG] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_Y,    KC_P,    KC_O,    KC_U,    KC_J,    _______, _______, _______, KC_K,    KC_D,    KC_L,    KC_C,    KC_M,    _______, \
    _______, KC_I,    KC_N,    KC_E,    KC_A,    KC_COMM, _______, _______, _______, KC_M,    KC_H,    KC_T,    KC_S,    KC_R,    _______, \
    _______, KC_Q,    KC_Z,    KC_SLSH, KC_DOT,  KC_SCLN, _______, _______, _______, KC_B,    KC_F,    KC_G,    KC_V,    KC_X,    _______, \
    _______, _______, _______, MO(_FN1),_______, _______, _______, _______, _______, _______, _______, MO(_FN2), _______, _______, _______  \
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
   * |        | QWERTY |        | ENGRAM |        |        | RGB RMD| RGB TG | RGB MD | HUE    | SAT    | BRGHT  | BRGHT- | BRGHT+ |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        | ISRT   |        |        |        | MTGAP  | VOL-   | MUTE   | VOL+   | LEFT   | DOWN   | UP     | RIGHT  |        |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | RWND   | PLAY   | FWRD   |        |        |        |        |        |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        | DEL    |        | PREV   | STOP   | NEXT   |        |        |        |        |        |       |
   * '-----------------------------------------------------------------------------------------'-------------------------------------------'
   */
  [_FN2] = LAYOUT_ortho_5x15(
      KC_MUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,  KC_F12,  RESET,  KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_POWER,
      _______, TO(_QWE),_______, TO(_ENG),_______, _______, RGB_RMOD,RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_BRID, KC_BRIU, _______,
      _______, TO(_ISR),_______, _______, _______, TO(_MTG), KC_VOLD, KC_MUTE, KC_VOLU, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______,
      _______, _______, _______, _______, _______, _______, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______,KC_DEL,   _______, KC_MPRV, KC_MSTP, KC_MNXT, _______, _______, _______, _______, _______, _______
  ),


};

enum combos {
  COMBO_1,
  COMBO_2,
  COMBO_3,
  COMBO_4,
  COMBO_5,
  COMBO_6,
  COMBO_7,
  COMBO_8,
  COMBO_9,
  COMBO_10,
  COMBO_11,
  COMBO_12,
  COMBO_13,
  COMBO_14,
  COMBO_15,
  COMBO_16,
  COMBO_17,
  COMBO_18,
  COMBO_19,
  COMBO_20,
  COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM kc_a_w[] = { KC_A, KC_W, COMBO_END};
const uint16_t PROGMEM kc_scln_p[] = { KC_SCLN, KC_P, COMBO_END};
const uint16_t PROGMEM kc_a_s[] = { KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM kc_s_d[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kc_d_f[] = { KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM kc_a_s_d[] = { KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kc_s_d_f[] = { KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM kc_a_f[] = { KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM kc_w_e[] = { KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM kc_w_e_f[] = { KC_W, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM kc_a_w_e[] = { KC_A, KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM kc_scln_l[] = { KC_SCLN, KC_L, COMBO_END};
const uint16_t PROGMEM kc_l_k[] = { KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM kc_k_j[] = { KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM kc_scln_l_k[] = { KC_SCLN, KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM kc_l_k_j[] = { KC_L, KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM kc_scln_j[] = { KC_SCLN, KC_J, COMBO_END};
const uint16_t PROGMEM kc_i_o[] = { KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM kc_i_o_j[] = { KC_I, KC_O, KC_J, COMBO_END};
const uint16_t PROGMEM kc_scln_w_o[] = { KC_SCLN, KC_W, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_1] = COMBO(kc_a_w, KC_GESC),
  [COMBO_2] = COMBO(kc_scln_p, KC_BSPC),
  [COMBO_3] = COMBO(kc_a_s, OSM(MOD_LALT)),
  [COMBO_4] = COMBO(kc_s_d, OSM(MOD_LGUI)),
  [COMBO_5] = COMBO(kc_d_f, OSM(MOD_LCTL)),
  [COMBO_6] = COMBO(kc_a_s_d, OSM(MOD_LALT|MOD_LGUI)),
  [COMBO_7] = COMBO(kc_s_d_f, OSM(MOD_LCTL|MOD_LGUI)),
  [COMBO_8] = COMBO(kc_a_f, OSM(MOD_LCTL|MOD_LALT)),
  [COMBO_9] = COMBO(kc_w_e, OSM(MOD_LSFT)),
  [COMBO_10] = COMBO(kc_w_e_f, OSM(MOD_LCTL|MOD_LSFT)),
  [COMBO_11] = COMBO(kc_a_w_e, OSM(MOD_LALT|MOD_LSFT)),
  [COMBO_12] = COMBO(kc_scln_l, OSM(MOD_RALT)),
  [COMBO_13] = COMBO(kc_l_k, OSM(MOD_RGUI)),
  [COMBO_14] = COMBO(kc_k_j, OSM(MOD_RCTL)),
  [COMBO_15] = COMBO(kc_scln_l_k, OSM(MOD_RALT|MOD_RGUI)),
  [COMBO_16] = COMBO(kc_l_k_j, OSM(MOD_RCTL|MOD_RGUI)),
  [COMBO_17] = COMBO(kc_scln_j, OSM(MOD_RCTL|MOD_RALT)),
  [COMBO_18] = COMBO(kc_i_o, OSM(MOD_RSFT)),
  [COMBO_19] = COMBO(kc_i_o_j, OSM(MOD_RCTL|MOD_RSFT)),
  [COMBO_20] = COMBO(kc_scln_w_o, OSM(MOD_RALT|MOD_RSFT)),
};

