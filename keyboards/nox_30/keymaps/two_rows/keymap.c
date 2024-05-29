#include QMK_KEYBOARD_H

const uint16_t PROGMEM esc_combo[] = { KC_BSPC, KC_ENT, COMBO_END };
const uint16_t PROGMEM chord_0[] = { KC_W, KC_F, COMBO_END };
const uint16_t PROGMEM chord_1[] = { KC_U, KC_Y, COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
  COMBO(esc_combo, KC_ESC),
};

// mod order: gui, alt, control, shift (left to right, left side)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT(
                    KC_NO,          KC_NO,          KC_NO,                                  KC_NO,          KC_NO,          KC_NO,
    LGUI_T(KC_A),   LALT_T(KC_R),   LCTL_T(KC_S),   LSFT_T(KC_T),   KC_G,         KC_M,     RSFT_T(KC_N),   LCTL_T(KC_E),   LALT_T(KC_I),   LGUI_T(KC_O),
    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,         KC_K,     KC_H,           KC_COMM,        KC_DOT,         KC_SLASH,
                                                    LM(1, OSL(1)),  KC_BSPC,      KC_ENT,   KC_SPC
  ),
  LAYOUT(
                    KC_NO,          KC_NO,          KC_NO,                                  KC_NO,          KC_NO,          KC_NO,
    LGUI_T(KC_B),   LALT_T(KC_W),   LCTL_T(KC_F),   LSFT_T(KC_P),   KC_NO,        KC_NO,    RSFT_T(KC_L),   LCTL_T(KC_U),   LALT_T(KC_Y),   LGUI_T(KC_J),
    KC_Q,           KC_NO,          KC_NO,          KC_NO,          KC_NO,        KC_NO,    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                    TG(2),          KC_BSPC,      KC_ENT,   KC_SPC
  ),
  LAYOUT(
                    KC_2,           KC_3,           KC_4,                                   KC_7,           KC_8,           KC_9,
    LGUI_T(KC_1),   LALT_T(KC_LEFT),LCTL_T(KC_UP),  LSFT_T(KC_DOWN),KC_5,         KC_6,     RSFT_T(KC_QUOT),LCTL_T(KC_MINS),LALT_T(KC_EQL), LGUI_T(KC_0),
    KC_Q,           KC_GRV,         KC_NUBS,        KC_TAB,         KC_RIGHT,     KC_LBRC,  KC_RBRC,        KC_NUHS,        KC_DOT,         KC_SCLN,
                                                    TG(0),          KC_BSPC,      KC_ENT,   KC_SPC
  ),
};
