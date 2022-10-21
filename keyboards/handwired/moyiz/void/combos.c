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
    COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM kc_a_w[]      = {KC_A, KC_W, COMBO_END};
const uint16_t PROGMEM kc_scln_p[]   = {KC_SCLN, KC_P, COMBO_END};
const uint16_t PROGMEM kc_a_s[]      = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM kc_s_d[]      = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kc_d_f[]      = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM kc_a_s_d[]    = {KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kc_s_d_f[]    = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM kc_a_f[]      = {KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM kc_w_e[]      = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM kc_w_e_f[]    = {KC_W, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM kc_a_w_e[]    = {KC_A, KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM kc_scln_l[]   = {KC_SCLN, KC_L, COMBO_END};
const uint16_t PROGMEM kc_l_k[]      = {KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM kc_k_j[]      = {KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM kc_scln_l_k[] = {KC_SCLN, KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM kc_l_k_j[]    = {KC_L, KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM kc_scln_j[]   = {KC_SCLN, KC_J, COMBO_END};
const uint16_t PROGMEM kc_i_o[]      = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM kc_i_o_j[]    = {KC_I, KC_O, KC_J, COMBO_END};
const uint16_t PROGMEM kc_scln_w_o[] = {KC_SCLN, KC_W, KC_O, COMBO_END};
const uint16_t PROGMEM kc_f_j[]      = {KC_F, KC_J, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [COMBO_1]  = COMBO(kc_a_w, KC_GESC),
    [COMBO_2]  = COMBO(kc_scln_p, KC_BSPC),
    [COMBO_3]  = COMBO(kc_a_s, OSM(MOD_LALT)),
    [COMBO_4]  = COMBO(kc_s_d, OSM(MOD_LGUI)),
    [COMBO_5]  = COMBO(kc_d_f, OSM(MOD_LCTL)),
    [COMBO_6]  = COMBO(kc_a_s_d, OSM(MOD_LALT | MOD_LGUI)),
    [COMBO_7]  = COMBO(kc_s_d_f, OSM(MOD_LCTL | MOD_LGUI)),
    [COMBO_8]  = COMBO(kc_a_f, OSM(MOD_LCTL | MOD_LALT)),
    [COMBO_9]  = COMBO(kc_w_e, OSM(MOD_LSFT)),
    [COMBO_10] = COMBO(kc_w_e_f, OSM(MOD_LCTL | MOD_LSFT)),
    [COMBO_11] = COMBO(kc_a_w_e, OSM(MOD_LALT | MOD_LSFT)),
    [COMBO_12] = COMBO(kc_scln_l, OSM(MOD_RALT)),
    [COMBO_13] = COMBO(kc_l_k, OSM(MOD_RGUI)),
    [COMBO_14] = COMBO(kc_k_j, OSM(MOD_RCTL)),
    [COMBO_15] = COMBO(kc_scln_l_k, OSM(MOD_RALT | MOD_RGUI)),
    [COMBO_16] = COMBO(kc_l_k_j, OSM(MOD_RCTL | MOD_RGUI)),
    [COMBO_17] = COMBO(kc_scln_j, OSM(MOD_RCTL | MOD_RALT)),
    [COMBO_18] = COMBO(kc_i_o, OSM(MOD_RSFT)),
    [COMBO_19] = COMBO(kc_i_o_j, OSM(MOD_RCTL | MOD_RSFT)),
    [COMBO_20] = COMBO(kc_scln_w_o, OSM(MOD_RALT | MOD_RSFT)),
    [COMBO_21] = COMBO(kc_f_j, QK_BOOT),
};
