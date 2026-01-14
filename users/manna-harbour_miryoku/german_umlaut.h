#pragma once
#include QMK_KEYBOARD_H

enum custom_keycodes {
  DE_AE= SAFE_RANGE,
  DE_UE,
  DE_OE,
  DE_SZ,
  CPP_SCOPE,
  BASH_UPWARD,
  ALT_TAB,
  KC_HA_1,
  KC_HA_2,
  KC_HA_3,
  KC_HA_4,
  KC_HA_5,
  KC_HA_6,
  KC_HA_7,
  KC_HA_8,
  KC_HA_9,
  KC_HA_10,
  KC_HA_11,
  KC_HA_12
};

bool is_alt_tab_active = false; // ADD this near the beginning of keymap.c
uint16_t alt_tab_timer = 0;     // we will be using them soon.


void turn_on_num_lock(void)
{
    led_t led_state = host_keyboard_led_state();
    if (!led_state.num_lock) {
        register_code(KC_NUM_LOCK);
        unregister_code(KC_NUM_LOCK);
        send_keyboard_report();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case DE_AE:
                {
                    uint8_t temp_mod = get_mods();
                    turn_on_num_lock();
                    clear_keyboard();
                    register_code(KC_LALT);
                    send_keyboard_report();
                    if (temp_mod & MOD_MASK_SHIFT) {
                    tap_code(KC_KP_1); tap_code(KC_KP_4); tap_code(KC_KP_2); // Ä
                    } else {
                    tap_code(KC_KP_1); tap_code(KC_KP_3); tap_code(KC_KP_2); // ä
                    }
                    unregister_code(KC_LALT);
                    send_keyboard_report();
                    return false;
                }
                break;
            case DE_UE:
                {
                    uint8_t temp_mod = get_mods();
                    turn_on_num_lock();
                    clear_keyboard();
                    register_code(KC_LALT);
                    send_keyboard_report();
                    if (temp_mod & MOD_MASK_SHIFT) {
                    tap_code(KC_KP_1); tap_code(KC_KP_5); tap_code(KC_KP_4); // Ü
                    } else {
                    tap_code(KC_KP_1); tap_code(KC_KP_2); tap_code(KC_KP_9); // ü
                    }
                    unregister_code(KC_LALT);
                    send_keyboard_report();
                    return false;
                }
                break;
            case DE_OE:
                {
                    uint8_t temp_mod = get_mods();
                    turn_on_num_lock();
                    clear_keyboard();
                    register_code(KC_LALT);
                    send_keyboard_report();
                    if (temp_mod & MOD_MASK_SHIFT) {
                    tap_code(KC_KP_1); tap_code(KC_KP_5); tap_code(KC_KP_3); // Ö
                    } else {
                    tap_code(KC_KP_1); tap_code(KC_KP_4); tap_code(KC_KP_8); // ö
                    }
                    unregister_code(KC_LALT);
                    send_keyboard_report();
                    return false;
                }
                break;
            case DE_SZ:
                turn_on_num_lock();
                send_keyboard_report();
                clear_keyboard();
                register_code(KC_LALT);
                send_keyboard_report();
                tap_code(KC_KP_2); tap_code(KC_KP_2); tap_code(KC_KP_5); // ß
                unregister_code(KC_LALT);
                send_keyboard_report();
                return false;
                break;
            case BASH_UPWARD:
                SEND_STRING("../");
                return false;
                break;
            case CPP_SCOPE:
                SEND_STRING("::");
                return false;
                break;

        }
        // Check if the key pressed is within our HA range
        if (keycode >= KC_HA_1 && keycode <= KC_HA_12) {

                // Calculate which button number it is (1 to 20)
                uint8_t button_id = (keycode - KC_HA_1) + 1;

                // Format the string "btn:5\n"
                char buffer[16];
                snprintf(buffer, sizeof(buffer), "btn:%d\n", button_id);

                // Send to ESP32
                uart_transmit((const uint8_t *)buffer, strlen(buffer));

                return false; // Stop QMK from treating this as a normal key
        }
  }
  return true;
}

const uint16_t PROGMEM ae_combo[] = {LGUI_T(KC_A), LALT_T(KC_S), COMBO_END};
const uint16_t PROGMEM oe_combo[] = {KC_O, KC_I, COMBO_END};
const uint16_t PROGMEM ue_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM sz_combo[] = {LALT_T(KC_S), LCTL_T(KC_D), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(ae_combo,  DE_AE),
  COMBO(oe_combo,  DE_OE),
  COMBO(ue_combo,  DE_UE),
  COMBO(sz_combo,  DE_SZ)
};
