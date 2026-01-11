// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define WS2812_PIO_USE_PIO1

#define SERIAL_PIO_USE_PIO1

//#define I2C_DRIVER I2CD1
#define USE_I2CV1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3



#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define BONGO_ENABLE
