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
#include "void.h"

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
  COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM kc_q_p[] = { KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM kc_tab_q[] = { KC_TAB, KC_Q, COMBO_END};
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

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_1] = COMBO(kc_q_p, QK_BOOT),
  [COMBO_2] = COMBO(kc_tab_q, KC_MUTE),
  [COMBO_3] = COMBO(kc_j_u, KC_COLON),
  [COMBO_4] = COMBO(kc_k_i, KC_PIPE),
  [COMBO_5] = COMBO(kc_m_comma, KC_MINS),
  [COMBO_6] = COMBO(kc_comma_dot, KC_UNDS),
  [COMBO_7] = COMBO(kc_m_dot, KC_PLUS),
  [COMBO_8] = COMBO(kc_m_comma_dot, KC_EQL),
  [COMBO_9] = COMBO(kc_m_k, KC_BSLS),
  [COMBO_10] = COMBO(kc_v_c, KC_GRAVE),
  [COMBO_11] = COMBO(kc_c_x, KC_TILDE),
  [COMBO_12] = COMBO(kc_f_d, OSM(MOD_LCTL)),
  [COMBO_13] = COMBO(kc_f_s, OSM(MOD_LGUI)),
  [COMBO_14] = COMBO(kc_f_a, OSM(MOD_LALT)),
  [COMBO_15] = COMBO(kc_f_d_s, OSM(MOD_LCTL|MOD_LGUI)),
  [COMBO_16] = COMBO(kc_f_d_a, OSM(MOD_LCTL|MOD_LALT)),
  [COMBO_17] = COMBO(kc_f_s_a, OSM(MOD_LALT|MOD_LGUI)),
  [COMBO_18] = COMBO(kc_f_d_s_a, OSM(MOD_LCTL|MOD_LALT|MOD_LGUI)),
  [COMBO_19] = COMBO(kc_j_k, OSM(MOD_LCTL)),
  [COMBO_20] = COMBO(kc_j_l, OSM(MOD_LGUI)),
  [COMBO_21] = COMBO(kc_j_scln, OSM(MOD_LALT)),
  [COMBO_22] = COMBO(kc_j_k_l, OSM(MOD_LCTL|MOD_RGUI)),
  [COMBO_23] = COMBO(kc_j_k_scln, OSM(MOD_LCTL|MOD_LALT)),
  [COMBO_24] = COMBO(kc_j_l_scln, OSM(MOD_LALT|MOD_RGUI)),
  [COMBO_25] = COMBO(kc_j_k_l_scln, OSM(MOD_LCTL|MOD_LALT|MOD_RGUI)),
  [COMBO_26] = COMBO(kc_q_w_e_r, SH_TG),
  [COMBO_27] = COMBO(kc_u_i_o_p, SH_TG),
};
