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
  COMBO_28,
  COMBO_29,
  COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM kc_w_e[] = { KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM kc_i_o[] = { KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM kc_q_p[] = { KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM osmmod_rsft_lsft[] = { OSM(MOD_RSFT), OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM kc_m_k[] = { KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM kc_v_d[] = { KC_V, KC_D, COMBO_END};
const uint16_t PROGMEM kc_s_d[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kc_k_l[] = { KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM osl_sy_nm[] = { OSL(_SY), OSL(_NM), COMBO_END};
const uint16_t PROGMEM kc_m_comma[] = { KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM kc_comma_dot[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM kc_m_dot[] = { KC_M, KC_DOT, COMBO_END};
const uint16_t PROGMEM kc_m_comma_dot[] = { KC_M, KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM kc_v_c[] = { KC_V, KC_C, COMBO_END};
const uint16_t PROGMEM kc_c_x[] = { KC_C, KC_X, COMBO_END};
const uint16_t PROGMEM kc_f_d[] = { KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM kc_f_s[] = { KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM kc_f_a[] = { KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM kc_f_d_s[] = { KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM kc_f_s_a[] = { KC_F, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM kc_f_d_s_a[] = { KC_F, KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM kc_j_k[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kc_j_l[] = { KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM kc_j_scln[] = { KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_j_k_l[] = { KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM kc_j_l_scln[] = { KC_J, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_j_k_l_scln[] = { KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_q_w_e_r[] = { KC_Q, KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM kc_u_i_o_p[] = { KC_U, KC_I, KC_O, KC_P, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_1] = COMBO(kc_w_e, QK_GESC),
  [COMBO_2] = COMBO(kc_i_o, KC_BSPC),
  [COMBO_3] = COMBO(kc_q_p, QK_BOOT),
  [COMBO_4] = COMBO(osmmod_rsft_lsft, CAPSWRD),
  [COMBO_5] = COMBO(kc_m_k, OSL(_LM)),
  [COMBO_6] = COMBO(kc_v_d, OSL(_LM)),
  [COMBO_7] = COMBO(kc_s_d, OSL(_SY)),
  [COMBO_8] = COMBO(kc_k_l, OSL(_NM)),
  [COMBO_9] = COMBO(osl_sy_nm, OSL(_SS)),
  [COMBO_10] = COMBO(kc_m_comma, KC_MINS),
  [COMBO_11] = COMBO(kc_comma_dot, KC_UNDS),
  [COMBO_12] = COMBO(kc_m_dot, KC_BSLS),
  [COMBO_13] = COMBO(kc_m_comma_dot, KC_EQL),
  [COMBO_14] = COMBO(kc_v_c, KC_GRAVE),
  [COMBO_15] = COMBO(kc_c_x, KC_TILDE),
  [COMBO_16] = COMBO(kc_f_d, OSM(MOD_LCTL)),
  [COMBO_17] = COMBO(kc_f_s, OSM(MOD_LGUI)),
  [COMBO_18] = COMBO(kc_f_a, OSM(MOD_LALT)),
  [COMBO_19] = COMBO(kc_f_d_s, OSM(MOD_LCTL|MOD_LGUI)),
  [COMBO_20] = COMBO(kc_f_s_a, OSM(MOD_LALT|MOD_LGUI)),
  [COMBO_21] = COMBO(kc_f_d_s_a, OSM(MOD_LCTL|MOD_LALT|MOD_LGUI)),
  [COMBO_22] = COMBO(kc_j_k, OSM(MOD_LCTL)),
  [COMBO_23] = COMBO(kc_j_l, OSM(MOD_LGUI)),
  [COMBO_24] = COMBO(kc_j_scln, OSM(MOD_LALT)),
  [COMBO_25] = COMBO(kc_j_k_l, OSM(MOD_LCTL|MOD_LGUI)),
  [COMBO_26] = COMBO(kc_j_l_scln, OSM(MOD_LALT|MOD_LGUI)),
  [COMBO_27] = COMBO(kc_j_k_l_scln, OSM(MOD_LCTL|MOD_LALT|MOD_LGUI)),
  [COMBO_28] = COMBO(kc_q_w_e_r, SH_TG),
  [COMBO_29] = COMBO(kc_u_i_o_p, SH_TG),
};
