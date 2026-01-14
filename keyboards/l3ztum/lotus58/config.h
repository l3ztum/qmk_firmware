// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DRIVER_LED_TOTAL 58
#define RGBLIGHT_LED_COUNT 58

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 175

#define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)

#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT    // Static gradient left to right, speed controls how much gradient changes

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT // Sets the default mode, if none has been set
#define RGB_MATRIX_KEYPRESSES   // reacts to keypresses
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS  // reacts to keyreleases (instead of keypresses)

#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_ALL

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON

#if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MAkTRIX_KEYRELEASES)
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#endif

// Not working correct in json implementation
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10

#define UART_DRIVER SIOD0
#define UART_TX_PIN GP12
#define UART_RX_PIN GP13
