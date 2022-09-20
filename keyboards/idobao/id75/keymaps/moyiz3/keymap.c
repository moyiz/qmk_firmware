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
   * |        |        |        |        |        |        | VOL-   | MUTE   | VOL+   | LEFT   | DOWN   | UP     | RIGHT  |        |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        |        |        | RWND   | PLAY   | FWRD   |        |        |        |        |        |       |
   * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
   * |        |        |        |        | DEL    |        | PREV   | STOP   | NEXT   |        |        |        |        |        |       |
   * '-----------------------------------------------------------------------------------------'-------------------------------------------'
   */
  [_FN2] = LAYOUT_ortho_5x15(
      KC_MUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,  KC_F12,  RESET,  KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_POWER,
      _______, TO(_QWE),_______, TO(_ENG),_______, _______, RGB_RMOD,RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_BRID, KC_BRIU, _______,
      _______, _______, _______, _______, _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______,
      _______, _______, _______, _______, _______, _______, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______,KC_DEL,   _______, KC_MPRV, KC_MSTP, KC_MNXT, _______, _______, _______, _______, _______, _______
  ),


};


// enum combos {
//   WE_SHIFT,
//   AS_ALT,
//   SD_GUI,
//   DF_CTL,
//   ASD_ALT_GUI,
//   SDF_CTL_GUI,
//   AF_CTL_ALT,

//   IO_SHIFT,
//   LSEM_ALT,
//   KL_GUI,
//   JK_CTL,
//   KLSEM_ALT_GUI,
//   JKL_CTL_GUI,
//   JSEM_CTL_ALT,

//   COMBO_COUNT
// };

// uint16_t COMBO_LEN = COMBO_COUNT;

// const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
// const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
// const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
// const uint16_t PROGMEM asd_combo[] = {KC_A, KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM sdf_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
// const uint16_t PROGMEM af_combo[] = {KC_A, KC_F, COMBO_END};

// const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
// const uint16_t PROGMEM lsem_combo[] = {KC_L, KC_SCLN, COMBO_END};
// const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
// const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
// const uint16_t PROGMEM klsem_combo[] = {KC_K, KC_L, KC_SCLN, COMBO_END};
// const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
// const uint16_t PROGMEM jsem_combo[] = {KC_J, KC_SCLN, COMBO_END};

// combo_t key_combos[COMBO_COUNT] = {
//   [WE_SHIFT] = COMBO(we_combo, KC_LSFT),
//   [AS_ALT] = COMBO(as_combo, KC_LALT),
//   [SD_GUI] = COMBO(sd_combo, KC_LGUI),
//   [DF_CTL] = COMBO(df_combo, KC_LCTL),
//   [ASD_ALT_GUI] = COMBO(asd_combo, LALT(KC_LGUI)),
//   [SDF_CTL_GUI] = COMBO(sdf_combo, LCTL(KC_LGUI)),
//   [AF_CTL_ALT] = COMBO(af_combo, LCTL(KC_LALT)),

//   [IO_SHIFT] = COMBO(io_combo, KC_RSFT),
//   [LSEM_ALT] = COMBO(lsem_combo, KC_RALT),
//   [KL_GUI] = COMBO(kl_combo, KC_RGUI),
//   [JK_CTL] = COMBO(jk_combo, KC_RCTL),
//   [KLSEM_ALT_GUI] = COMBO(klsem_combo, RALT(KC_RGUI)),
//   [JKL_CTL_GUI] = COMBO(jkl_combo, RCTL(KC_RGUI)),
//   [JSEM_CTL_ALT] = COMBO(jsem_combo, RCTL(KC_RALT)),
// };
enum combos { 
  A_S_LALT,
  S_D_LGUI,
  D_F_LCTL,
  A_S_D_LALT_LGUI,
  S_D_F_LCTL_LGUI,
  A_F_LCTL_LALT,
  W_E_LSFT,
  L_SCLN_RALT,
  K_L_RGUI,
  J_K_RCTL,
  K_L_SCLN_RALT_RGUI,
  J_K_L_RCTL_RGUI,
  I_O_RSFT,
  
  COMBO_COUNT,
};

uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM a_s_lalt[] = { KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM s_d_lgui[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM d_f_lctl[] = { KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM a_s_d_lalt_lgui[] = { KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM s_d_f_lctl_lgui[] = { KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM a_f_lctl_lalt[] = { KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM w_e_lsft[] = { KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM l_scln_ralt[] = { KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM k_l_rgui[] = { KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM j_k_rctl[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM k_l_scln_ralt_rgui[] = { KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM j_k_l_rctl_rgui[] = { KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM i_o_rsft[] = { KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [A_S_LALT] = COMBO(a_s_lalt, KC_LALT),
  [S_D_LGUI] = COMBO(s_d_lgui, KC_LGUI),
  [D_F_LCTL] = COMBO(d_f_lctl, KC_LCTL),
  [A_S_D_LALT_LGUI] = COMBO(a_s_d_lalt_lgui, LALT(KC_LGUI)),
  [S_D_F_LCTL_LGUI] = COMBO(s_d_f_lctl_lgui, LCTL(KC_LGUI)),
  [A_F_LCTL_LALT] = COMBO(a_f_lctl_lalt, LCTL(KC_LALT)),
  [W_E_LSFT] = COMBO(w_e_lsft, KC_LSFT),
  [L_SCLN_RALT] = COMBO(l_scln_ralt, KC_RALT),
  [K_L_RGUI] = COMBO(k_l_rgui, KC_RGUI),
  [J_K_RCTL] = COMBO(j_k_rctl, KC_RCTL),
  [K_L_SCLN_RALT_RGUI] = COMBO(k_l_scln_ralt_rgui, RALT(KC_RGUI)),
  [J_K_L_RCTL_RGUI] = COMBO(j_k_l_rctl_rgui, RCTL(KC_RGUI)),
  [I_O_RSFT] = COMBO(i_o_rsft, KC_RSFT),
  
};