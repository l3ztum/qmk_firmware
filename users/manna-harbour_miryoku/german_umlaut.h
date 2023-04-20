#pragma once
#include QMK_KEYBOARD_H

enum custom_keycodes {
  DE_AE= SAFE_RANGE,
  DE_UE,
  DE_OE,
  DE_SZ,
  CPP_SCOPE,
  BASH_UPWARD,
  ALT_TAB
};

bool is_alt_tab_active = false; // ADD this near the beginning of keymap.c
uint16_t alt_tab_timer = 0;     // we will be using them soon.



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
    case BASH_UPWARD:
        if (record->event.pressed) {
            SEND_STRING("../");
        }
        break;
    case CPP_SCOPE:
        if (record->event.pressed) {
            SEND_STRING("::");
        }
        break;
    case ALT_TAB:
      if (record->event.pressed) {
        if (!is_alt_tab_active) {
          is_alt_tab_active = true;
          register_code(KC_LALT);
        }
        alt_tab_timer = timer_read();
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
  }
  return true;
}

void matrix_scan_user(void) { // The very important timer.
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 1000) {
      unregister_code(KC_LALT);
      is_alt_tab_active = false;
    }
  }
}

const uint16_t PROGMEM ae_combo[] = {KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM ue_combo[] = {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM sz_combo[] = {KC_W, KC_E, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(ae_combo,  DE_AE),
  COMBO(oe_combo,  DE_OE),
  COMBO(ue_combo,  DE_UE),
  COMBO(sz_combo,  DE_SZ)
};
