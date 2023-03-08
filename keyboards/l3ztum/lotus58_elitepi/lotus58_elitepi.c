// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

#ifdef BONGO_ENABLE
#include "bongo.h"
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
	// rotate oled to fit
    if (is_keyboard_left()) {
        return OLED_ROTATION_0;
	}
    return OLED_ROTATION_180;
}

bool oled_task_kb(void) {
	draw_bongo(false);
	return false;
}
#endif
layer_state_t layer_state_set_kb(layer_state_t state) {
	// Allow switching to the 'hidden' layer
   return update_tri_layer_state(state, 1, 2, 3);
}