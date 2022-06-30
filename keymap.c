
/* Copyright 2020 foostan
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,   KC_P,  KC_BSPC,
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L, KC_SCLN, KC_ENT,
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, SFT_T(KC_QUOT),
     KC_PGUP, KC_PGDN, KC_LALT, KC_LGUI,   MO(2),  LT(3, KC_SPC),  LT(3, KC_SPC),   MO(1),  KC_RGUI, KC_RALT, KC_HOME, KC_END
  ),

[1] = LAYOUT(
     _______, XXXXXXX, XXXXXXX,  KC_GRV, KC_BSLS,  KC_LBRC, KC_RBRC, KC_MINS,  KC_EQL, XXXXXXX, _______, _______,
     _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
     _______, LGUI(LSFT(LCTL(KC_4))), LGUI(LSFT(KC_4)), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS, KC_TRNS, KC_TRNS, XXXXXXX,
     _______, _______, _______, _______,   MO(2), _______, _______,   MO(1), _______, _______, _______, KC_MPLY
  ),

[2] = LAYOUT(
     KC_ESC,  XXXXXXX, XXXXXXX, KC_TILD, KC_PIPE, KC_LCBR, KC_RCBR,  KC_UNDS, KC_PLUS, KC_NO, KC_NO, _______,
     _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     _______, KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_NO,
     _______, _______, _______, _______,   MO(2), _______, _______,   MO(1), _______, _______, _______, RESET
  ),

[3] = LAYOUT(
     _______, LCTL(KC_1), LCTL(KC_2), LCTL(KC_3), LCTL(KC_4), LCTL(KC_5), XXXXXXX, LALT(KC_LEFT), LALT(KC_RIGHT), RGUI(KC_SPACE), KC_F14, KC_F15,
     _______, KC__VOLDOWN, KC__VOLUP, LCTL(RSFT(KC_TAB)), LGUI(KC_RBRC), LCTL(KC_TAB), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
     _______, LCTL(KC_PGUP), LCTL(KC_PGDN), LGUI(KC_MINS), LGUI(KC_PLUS), LGUI(KC_LBRC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, _______, _______, _______,   MO(2), _______, _______,   MO(1), _______, _______, _______, _______
  ),
};
