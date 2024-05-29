#include QMK_KEYBOARD_H

// mod order: gui, alt, control, shift (left to right, left side)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT(
    KC_ESCAPE,  KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,         KC_J,     KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSPC,
    KC_TAB,     LGUI_T(KC_A),   LALT_T(KC_R),   LCTL_T(KC_S),   LSFT_T(KC_T),   KC_G,         KC_M,     LSFT_T(KC_N),   LCTL_T(KC_E),   LALT_T(KC_I),   LGUI_T(KC_O),   KC_ENT,
    KC_LSFT,    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,         KC_K,     KC_H,           KC_COMM,        KC_DOT,         KC_SLASH,       KC_LGUI,
                                                KC_ESC,         MO(1),          KC_BSPC,      KC_ENT,   KC_SPC,         KC_ENT
  ),
  LAYOUT(
    KC_ESCAPE,  KC_1,           KC_2,           KC_3,           KC_4,           KC_5,         KC_6,     KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
    KC_TAB,     LGUI_T(KC_TAB), LALT_T(KC_LEFT),LCTL_T(KC_UP),  LSFT_T(KC_DOWN),KC_RIGHT,     KC_NO,    LSFT_T(KC_QUOT),LCTL_T(KC_MINS),LALT_T(KC_EQL), LGUI_T(KC_BSPC),KC_ENT,
    KC_LSFT,    KC_ESC,         KC_GRV,         KC_NUBS,        KC_V,           KC_B,         KC_LBRC,  KC_RBRC,        KC_NUHS,        KC_DOT,         KC_DEL,         KC_DEL,
                                                KC_NO,          KC_NO,          KC_NO,        KC_NO,    KC_NO,          KC_NO
  ),
};
