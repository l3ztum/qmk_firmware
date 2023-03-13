#pragma once
#include QMK_KEYBOARD_H

enum custom_keycodes {
  DE_AE= SAFE_RANGE,
  DE_UE,
  DE_OE,
  DE_SZ,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case DE_AE:
      if (record->event.pressed) {
        uint8_t temp_mod = get_mods();
        clear_keyboard();
        register_code(KC_LALT);
        if (temp_mod & MOD_MASK_SHIFT) {
          tap_code(KC_P1); tap_code(KC_P4); tap_code(KC_P2); // Ä
        } else {
          tap_code(KC_P1); tap_code(KC_P3); tap_code(KC_P2); // ä
        }
        unregister_code(KC_LALT);
        return false;
      }
      break;
    case DE_UE:
      if (record->event.pressed) {
        uint8_t temp_mod = get_mods();
        clear_keyboard();
        register_code(KC_LALT);
        if (temp_mod & MOD_MASK_SHIFT) {
          tap_code(KC_P1); tap_code(KC_P5); tap_code(KC_P4); // Ä
        } else {
          tap_code(KC_P1); tap_code(KC_P2); tap_code(KC_P9); // ä
        }
        unregister_code(KC_LALT);
        return false;
      }
      break;
    case DE_OE:
      if (record->event.pressed) {
        uint8_t temp_mod = get_mods();
        clear_keyboard();
        register_code(KC_LALT);
        if (temp_mod & MOD_MASK_SHIFT) {
          tap_code(KC_P1); tap_code(KC_P5); tap_code(KC_P3); // Ä
        } else {
          tap_code(KC_P1); tap_code(KC_P4); tap_code(KC_P8); // ä
        }
        unregister_code(KC_LALT);
        return false;
      }
      break;
    case DE_SZ:
      if (record->event.pressed) {
        clear_keyboard();
        register_code(KC_LALT);
        tap_code(KC_P2); tap_code(KC_P2); tap_code(KC_P5); // sz
        unregister_code(KC_LALT);
        return false;
      }
      break;
  }
  return true;
}
