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
#include QMK_KEYBOARD_H

enum layers {
    _QWE = 0,
    _ENG,
    _ISR,
    _MTG,
    _APT,
    _FN1,
    _FN2,
    _NUM,
    _NAV,
};

#define SPC_SFT LSFT_T(KC_SPC)
#define ENT_SFT RSFT_T(KC_ENT)
#define OS_FN1 OSL(_FN1)
#define OS_FN2 OSL(_FN2)

#define TAB_SFT LSFT_T(KC_TAB)
#define BS_SFT LSFT_T(KC_BSPC)
#define DEL_SFT LSFT_T(KC_DEL)

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | CAP LK | 1      | 2      | 3      | 4      | 5      | HOME   | PG UP  | DEL    | 6      | 7      | 8      | 9      | 0      | BACKSP |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | END    | PG DN  | \      | Y      | U      | I      | O      | P      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | GESC   | A      | S      | D      | F      | G      | [      | =      | ]      | H      | J      | K      | L      | ;      | '      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | `      | UP     | -      | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | LALT   | FN1    | BACKSP | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | ENTER  | FN2    | RALT   | RGUI   | RCTRL  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_QWE] = LAYOUT_ortho_5x15(
      KC_CAPS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_HOME, KC_PGUP, KC_DEL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_END,  KC_PGDN, KC_BSLS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
      KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC, KC_EQL,  KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_UP,   KC_MINS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
      KC_LCTL, KC_LGUI, KC_LALT, OS_FN2,  MO(_FN1),SPC_SFT, KC_LEFT, KC_DOWN, KC_RGHT, ENT_SFT, MO(_FN2),OS_FN1,  KC_RALT, KC_RGUI, KC_RCTL
    ),

    // {{{1
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
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, KC_B,    KC_Y,    KC_O,    KC_U,    KC_SCLN, _______, _______, _______, KC_QUOT, KC_L,    KC_D,    KC_W,    KC_V,    KC_Z,
      _______, KC_C,    KC_I,    KC_E,    KC_A,    KC_COMM, _______, _______, _______, KC_DOT,  KC_H,    KC_T,    KC_S,    KC_N,    KC_Q,
      _______, KC_G,    KC_X,    KC_J,    KC_K,    KC_BSLS, _______, _______, _______, KC_SLSH, KC_R,    KC_M,    KC_F,    KC_P,    _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
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
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,    _______, _______, _______, KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______,
      _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,    _______, _______, _______, KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    KC_SCLN,
      _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    _______, _______, _______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
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
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, KC_Y,    KC_P,    KC_O,    KC_U,    KC_J,    _______, _______, _______, KC_K,    KC_D,    KC_L,    KC_C,    KC_M,    _______,
      _______, KC_I,    KC_N,    KC_E,    KC_A,    KC_COMM, _______, _______, _______, KC_M,    KC_H,    KC_T,    KC_S,    KC_R,    _______,
      _______, KC_Q,    KC_Z,    KC_SLSH, KC_DOT,  KC_SCLN, _______, _______, _______, KC_B,    KC_F,    KC_G,    KC_V,    KC_X,    _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* APTv3
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * |        | W      | G      | D      | F      | B      |        |        |        | Q      | L      | U      | O      | Y      |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * |        | R      | R      | T      | H      | K      |        |        |        | J      | N      | E      | A      | I      | ;      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * |        | X      | C      | M      | P      | V      |        |        |        | Z      | ,      | .      | '      | /      |        |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
    [_APT] = LAYOUT_ortho_5x15(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, KC_W,    KC_G,    KC_D,    KC_F,    KC_B,    _______, _______, _______, KC_Q,    KC_L,    KC_U,    KC_O,    KC_Y,    _______,
      _______, KC_R,    KC_S,    KC_T,    KC_H,    KC_K,    _______, _______, _______, KC_J,    KC_N,    KC_E,    KC_A,    KC_I,    KC_SCLN,
      _______, KC_X,    KC_C,    KC_M,    KC_P,    KC_V,    _______, _______, _______, KC_Z,    KC_COMM, KC_DOT,  KC_QUOT, KC_SLSH, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    // }}}1

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
      KC_GRV,  _______, _______, _______, KC_PSCR, _______, _______, KC_PSLS, KC_PAST, KC_PMNS, _______, _______, KC_MINS, KC_EQL,  KC_DEL,
      _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS,
      MO(_FN2),KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, _______, KC_P4,   KC_P5,   KC_P6,   KC_PEQL, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, _______,
      _______, _______, _______, _______, KC_DQUO, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_SCLN, KC_COLN, KC_PIPE, _______, _______,
      _______, _______, _______, _______, _______, DEL_SFT, KC_P0,   KC_P0,   KC_PDOT, TAB_SFT, _______, _______, _______, KC_APP,  _______
    ),

    /* FUNCTION 2 Layer - Functions (F1-12, media, arrows, rgb, extra)
     * .--------------------------------------------------------------------------------.----------------------------------------------------.
     * | MUTE   | F1     | F2     | F3     | F4     | F5     | F11    | F12    | RESET  | F6     | F7     | F8     | F9     | F10    | POWER |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
     * |        | QWERTY |        | ENGRAM |        |        | RGB RMD| RGB TG | RGB MD | HUE    | SAT    | BRGHT  | BRGHT- | BRGHT+ |       |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
     * |        | ISRT   |        |        |        | MTGAP  | VOL-   | MUTE   | VOL+   |        | LEFT   | DOWN   | UP     | RIGHT  |       |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
     * |        |        |        |        |        |        | RWND   | PLAY   | FWRD   |        |        |        |        |        |       |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-------|
     * |        |        |        |        | DEL    |        | PREV   | STOP   | NEXT   |        |        |        |        |        |       |
     * '-----------------------------------------------------------------------------------------'-------------------------------------------'
     */
    [_FN2] = LAYOUT_ortho_5x15(
      KC_MUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,  KC_F12,  QK_BOOT, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
      _______, TO(_QWE),_______, TO(_ENG),_______, _______, RGB_RMOD,RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_BRID, KC_BRIU, _______,
      _______, TO(_APT),TO(_ISR),_______, _______, TO(_MTG),KC_VOLD, KC_MUTE, KC_VOLU, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______,
      _______, _______, _______, _______, _______, _______, KC_MRWD, KC_MPLY, KC_MFFD, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
      _______, _______, _______, _______, _______, BS_SFT,  KC_MPRV, KC_MSTP, KC_MNXT, _______, _______, _______, _______, _______, _______
    ),
};

// Do not mirror the 3 middle columns
const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
  {{14, 0}, {13, 0}, {12, 0}, {11, 0}, {10, 0}, {9, 0}, {6, 0}, {7, 0}, {8, 0}, {5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0}},
  {{14, 1}, {13, 1}, {12, 1}, {11, 1}, {10, 1}, {9, 1}, {6, 1}, {7, 1}, {8, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1}},
  {{14, 2}, {13, 2}, {12, 2}, {11, 2}, {10, 2}, {9, 2}, {6, 2}, {7, 2}, {8, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}},
  {{14, 3}, {13, 3}, {12, 3}, {11, 3}, {10, 3}, {9, 3}, {6, 3}, {7, 3}, {8, 3}, {5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
  {{14, 4}, {13, 4}, {12, 4}, {11, 4}, {10, 4}, {9, 4}, {6, 4}, {7, 4}, {8, 4}, {5, 4}, {4, 4}, {3, 4}, {2, 4}, {1, 4}, {0, 4}},
};

// clang-format on

//COMBO:START
//{{{1
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
  COMBO_21,
  COMBO_22,
  COMBO_23,
  COMBO_24,
  COMBO_25,
  COMBO_26,
  COMBO_27,
  COMBO_28,
  COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM kc_q_p[] = { KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM kc_q_w[] = { KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM kc_o_p[] = { KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM kc_j_u[] = { KC_J, KC_U, COMBO_END};
const uint16_t PROGMEM kc_k_i[] = { KC_K, KC_I, COMBO_END};
const uint16_t PROGMEM kc_m_comma[] = { KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM kc_comma_dot[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM kc_m_dot[] = { KC_M, KC_DOT, COMBO_END};
const uint16_t PROGMEM kc_m_comma_dot[] = { KC_M, KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM kc_m_k[] = { KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM kc_v_c[] = { KC_V, KC_C, COMBO_END};
const uint16_t PROGMEM kc_c_x[] = { KC_C, KC_X, COMBO_END};
const uint16_t PROGMEM kc_f_d[] = { KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM kc_f_s[] = { KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM kc_f_a[] = { KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM kc_f_d_s[] = { KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM kc_f_d_a[] = { KC_F, KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM kc_f_s_a[] = { KC_F, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM kc_f_d_s_a[] = { KC_F, KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM kc_j_k[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kc_j_l[] = { KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM kc_j_scln[] = { KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_j_k_l[] = { KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM kc_j_k_scln[] = { KC_J, KC_K, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_j_l_scln[] = { KC_J, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_j_k_l_scln[] = { KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_q_w_e_r[] = { KC_Q, KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM kc_u_i_o_p[] = { KC_U, KC_I, KC_O, KC_P, COMBO_END};
//}}}1
combo_t key_combos[COMBO_COUNT] = {
  [COMBO_1] = COMBO(kc_q_p, QK_BOOT),
  [COMBO_2] = COMBO(kc_q_w, QK_GESC),
  [COMBO_3] = COMBO(kc_o_p, KC_BSPC),
  [COMBO_4] = COMBO(kc_j_u, KC_COLON),
  [COMBO_5] = COMBO(kc_k_i, KC_PIPE),
  [COMBO_6] = COMBO(kc_m_comma, KC_MINS),
  [COMBO_7] = COMBO(kc_comma_dot, KC_UNDS),
  [COMBO_8] = COMBO(kc_m_dot, KC_PLUS),
  [COMBO_9] = COMBO(kc_m_comma_dot, KC_EQL),
  [COMBO_10] = COMBO(kc_m_k, KC_BSLS),
  [COMBO_11] = COMBO(kc_v_c, KC_GRAVE),
  [COMBO_12] = COMBO(kc_c_x, KC_TILDE),
  [COMBO_13] = COMBO(kc_f_d, OSM(MOD_LCTL)),
  [COMBO_14] = COMBO(kc_f_s, OSM(MOD_LGUI)),
  [COMBO_15] = COMBO(kc_f_a, OSM(MOD_LALT)),
  [COMBO_16] = COMBO(kc_f_d_s, OSM(MOD_LCTL|MOD_LGUI)),
  [COMBO_17] = COMBO(kc_f_d_a, OSM(MOD_LCTL|MOD_LALT)),
  [COMBO_18] = COMBO(kc_f_s_a, OSM(MOD_LALT|MOD_LGUI)),
  [COMBO_19] = COMBO(kc_f_d_s_a, OSM(MOD_LCTL|MOD_LALT|MOD_LGUI)),
  [COMBO_20] = COMBO(kc_j_k, OSM(MOD_RCTL)),
  [COMBO_21] = COMBO(kc_j_l, OSM(MOD_RGUI)),
  [COMBO_22] = COMBO(kc_j_scln, OSM(MOD_LALT)),
  [COMBO_23] = COMBO(kc_j_k_l, OSM(MOD_RCTL|MOD_RGUI)),
  [COMBO_24] = COMBO(kc_j_k_scln, OSM(MOD_RCTL|MOD_LALT)),
  [COMBO_25] = COMBO(kc_j_l_scln, OSM(MOD_LALT|MOD_RGUI)),
  [COMBO_26] = COMBO(kc_j_k_l_scln, OSM(MOD_RCTL|MOD_LALT|MOD_RGUI)),
  [COMBO_27] = COMBO(kc_q_w_e_r, SH_TG),
  [COMBO_28] = COMBO(kc_u_i_o_p, SH_TG),
};
//COMBO:END
//       vim: foldmethod=marker
