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
    COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM kc_w_e[]        = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM kc_i_o[]        = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM kc_q_p[]        = {KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM tt_sy_nm[]      = {TT(_SY), TT(_NM), COMBO_END};
const uint16_t PROGMEM kc_s_d[]        = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kc_k_l[]        = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM kc_f_d[]        = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM kc_f_s[]        = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM kc_f_a[]        = {KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM kc_f_d_s[]      = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM kc_f_s_a[]      = {KC_F, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM kc_f_d_s_a[]    = {KC_F, KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM kc_j_k[]        = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kc_j_l[]        = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM kc_j_scln[]     = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_j_k_l[]      = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM kc_j_l_scln[]   = {KC_J, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_j_k_l_scln[] = {KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM kc_q_w_e_r[]    = {KC_Q, KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM kc_u_i_o_p[]    = {KC_U, KC_I, KC_O, KC_P, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [COMBO_1]  = COMBO(kc_w_e, QK_GESC),
    [COMBO_2]  = COMBO(kc_i_o, KC_BSPC),
    [COMBO_3]  = COMBO(kc_q_p, QK_BOOT),
    [COMBO_4]  = COMBO(tt_sy_nm, OSL(_SS)),
    [COMBO_5]  = COMBO(kc_s_d, OSL(_NM)),
    [COMBO_6]  = COMBO(kc_k_l, OSL(_SY)),
    [COMBO_7]  = COMBO(kc_f_d, OSM(MOD_LCTL)),
    [COMBO_8]  = COMBO(kc_f_s, OSM(MOD_LGUI)),
    [COMBO_9]  = COMBO(kc_f_a, OSM(MOD_LALT)),
    [COMBO_10] = COMBO(kc_f_d_s, OSM(MOD_LCTL | MOD_LGUI)),
    [COMBO_11] = COMBO(kc_f_s_a, OSM(MOD_LALT | MOD_LGUI)),
    [COMBO_12] = COMBO(kc_f_d_s_a, OSM(MOD_LCTL | MOD_LALT | MOD_LGUI)),
    [COMBO_13] = COMBO(kc_j_k, OSM(MOD_LCTL)),
    [COMBO_14] = COMBO(kc_j_l, OSM(MOD_LGUI)),
    [COMBO_15] = COMBO(kc_j_scln, OSM(MOD_LALT)),
    [COMBO_16] = COMBO(kc_j_k_l, OSM(MOD_LCTL | MOD_LGUI)),
    [COMBO_17] = COMBO(kc_j_l_scln, OSM(MOD_LALT | MOD_LGUI)),
    [COMBO_18] = COMBO(kc_j_k_l_scln, OSM(MOD_LCTL | MOD_LALT | MOD_LGUI)),
    [COMBO_19] = COMBO(kc_q_w_e_r, SH_TG),
    [COMBO_20] = COMBO(kc_u_i_o_p, SH_TG),
};
