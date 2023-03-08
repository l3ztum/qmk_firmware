// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define WS2812_PIO_USE_PIO1

#define SERIAL_USART_TX_PIN GP1
#define SERIAL_PIO_USE_PIO1

//#define I2C_DRIVER I2CD1
#define USE_I2CV1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

#define BONGO_ENABLE
