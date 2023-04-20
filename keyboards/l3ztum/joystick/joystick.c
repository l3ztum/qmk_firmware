// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

static inline void ps2_mouse_convert_report_to_hid(report_mouse_t *mouse_report) {

    #ifdef PS2_MOUSE_SWAP_XY
        uint8_t tmp = mouse_report->x;
        mouse_report->x = mouse_report->y;
        mouse_report->y = tmp;
    #endif
}
