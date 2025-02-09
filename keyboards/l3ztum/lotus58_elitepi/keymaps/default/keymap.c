// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#ifdef AUTO_SHIFT_ENABLE

void keyboard_post_init_user(void) {
	autoshift_disable();
}
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
//      											     				_______       _______
// .----------.----------.----------.----------.----------.----------. /       \     /       \ .----------.----------.----------.----------.----------.----------.
// |   Esc    |    1     |    2     |    3     |    4     |    5     |(  Media  )   (  Media  )|    6     |    7     |    8     |    9     |    0     |    -     |
      KC_GESC, 	 KC_1, 	    KC_2,      KC_3,	   KC_4,     KC_5,    LCTL(KC_W),  LCTL(KC_W),    KC_6,  	 KC_7,   	KC_8,       KC_9,      KC_0,    KC_MINS,
// |----------+----------+----------+----------+----------+----------| \_______/     \_______/ |----------+----------+----------+----------+----------+----------|
// |   Tab    |    Q     |    W     |    E     |    R     |    T     |                         |    Y     |    U     |    I     |    O     |    P     |   [ (Å)  |
      KC_TAB, 	 KC_Q, 	    KC_W,      KC_E,      KC_R,      KC_T,                     		       KC_Y,     KC_U,      KC_I,      KC_O,       KC_P,    KC_LBRC,
// |----------+----------+----------+----------+----------+----------|                         |----------+----------+----------+----------+----------+----------|
// |  Capslk  |    A     |    S     |    D     |    F     |    G     |                         |    H     |    J     |    K     |    L     |  ; (Ö)   |   ' (Ä)  |
	XXXXXXX, 	 KC_A,			KC_S,   KC_D,      KC_F,    KC_G,                     			   KC_H, 	 KC_J,      KC_K,       KC_L,    KC_SCLN,   KC_QUOT,
// |----------+----------+----------+----------+----------+----------+-----------. .-----------+----------+----------+----------+----------+----------+----------|
// | <-  Ctrl LCTL_T(KC_LEFT) |    Z     |    X     |    C     |    V     |    B     |   Down    | |    Up     |    N     |    M     |    ,     |    .     |    /     | Ctrl  -> |
LCTL_T(KC_LEFT), KC_Z, 	    KC_X,      KC_C,      KC_V,       KC_B,     KC_UP,       KC_DOWN,      KC_N,	KC_M,       KC_COMM,   KC_DOT,    KC_SLSH, RCTL_T(KC_RGHT),
// '----------'----------'----------+----------+----------+----------+-.---------' '---------.-+----------+----------+----------+----------'----------'----------'
//                                	|   Win    |   Alt  |   Lower    |/  Space  /   \  Enter  \|   AltGr  |  Raise   |   Bksp   |
//									|		   |	      |	         |  Shift LSFT_T(KC_SPC)  /     \  Shift  |          |          |          |
                                      KC_LGUI,   KC_LALT ,  TT(1) , LSFT_T(KC_SPC),RSFT_T(KC_ENT), TT(2), KC_BSPC, KC_RALT
//                                  '----------'----------'----------'--------'       '--------'----------'----------'----------'
),


[1] = LAYOUT(
  _______,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,  KC_MPLY,      KC_MPLY, KC_CIRC,    KC_KP_7,    KC_KP_8,    KC_KP_9, XXXXXXX, XXXXXXX,
  _______, KC_HOME,   KC_UP,  KC_END, XXXXXXX, XXXXXXX,                         KC_HASH,    KC_KP_4,    KC_KP_5,    KC_KP_6, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, KC_LBRC, KC_RBRC,                         KC_AMPR,    KC_KP_1,    KC_KP_2,    KC_KP_3, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, KC_PAST,  KC_PPLS, KC_PSLS,  KC_EQL, _______,       _______,  KC_DLR,    KC_KP_0, KC_KP_DOT, KC_COLN, KC_PMNS, _______,
							   _______, _______, _______,_______,       _______, _______, _______, _______
),

[2] = LAYOUT(
//      											     				_______       _______
// .----------.----------.----------.----------.----------.----------. /       \     /       \ .----------.----------.----------.----------.----------.----------.
// |   Esc    |    1     |    2     |    3     |    4     |    5     |(  Media  )   (  Media  )|    6     |    7     |    8     |    9     |    0     |    -     |
	  _______,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     _______,      _______,    KC_F6,    KC_F7,      KC_F8,     KC_F9,    KC_F10,    _______,
// |----------+----------+----------+----------+----------+----------| \_______/     \_______/ |----------+----------+----------+----------+----------+----------|
// |   Tab    |    Q     |    W     |    E     |    R     |    T     |                         |    Y     |    U     |    I     |    O     |    P     |   [ (Å)  |
     _______,   _______,   ALGR(KC_8),   ALGR(KC_9),   _______,   _______,                             _______,   _______,   KC_UP,   _______,   _______,   _______,
// |----------+----------+----------+----------+----------+----------|                         |----------+----------+----------+----------+----------+----------|
// |  Capslk  |    A     |    S     |    D     |    F     |    G     |                         |    H     |    J     |    K     |    L     |  ; (Ö)   |   ' (Ä)  |
     _______,   ALGR(KC_7),   LSFT_T(KC_8),   LSFT_T(KC_9),   ALGR(KC_0),   _______,                             _______,   KC_LEFT,   KC_DOWN,   KC_RGHT,   _______,   _______,
// |----------+----------+----------+----------+----------+----------+-----------. .-----------+----------+----------+----------+----------+----------+----------|
// | <-  Ctrl |    Z     |    X     |    C     |    V     |    B     |   Down    | |    Up     |    N     |    M     |    ,     |    .     |    /     | Ctrl  -> |
     _______,   _______,   _______,   _______,   _______,   _______,    _______,      _______,   _______,   _______,   _______,   _______,   _______,   _______,
// '----------'----------'----------+----------+----------+----------+-.---------' '---------.-+----------+----------+----------+----------'----------'----------'
//                                	|   Win    |   Lower  |   Alt    |/  Space  /   \  Enter  \|   AltGr  |  Raise   |   Bksp   |
//									|		   |	      |	         |  Shift  /     \  Shift  |          |          |          |
            					      _______,   _______,   _______,  _______,         _______,  _______,   _______,   _______
//                                  '----------'----------'----------'--------'       '--------'----------'----------'----------'
),

[3] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX ,  XXXXXXX, XXXXXXX, XXXXXXX, _______,     _______, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_SAI, RGB_TOG,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ASTG,                       XXXXXXX, XXXXXXX, XXXXXXX, RGB_RMOD, RGB_SAD, RGB_M_P,
  XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, TO(4),                       XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUI, RGB_VAI, RGB_M_B,
  XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUD, RGB_VAD, RGB_M_R,
								_______, _______, _______, _______,     _______, _______, _______, _______  \
  ),
  [4] = LAYOUT(
//      											     				_______       _______
// .----------.----------.----------.----------.----------.----------. /       \     /       \ .----------.----------.----------.----------.----------.----------.
// |   Esc    |    1     |    2     |    3     |    4     |    5     |(  Media  )   (  Media  )|    6     |    7     |    8     |    9     |    0     |    -     |
      KC_ESC, 	 KC_1, 	    KC_2,      KC_3,	   KC_4,     KC_5,    LCTL(KC_W),  LCTL(KC_W),    KC_6,  	 KC_7,   	KC_8,       KC_9,      KC_0,    KC_MINS,
// |----------+----------+----------+----------+----------+----------| \_______/     \_______/ |----------+----------+----------+----------+----------+----------|
// |   Tab    |    Q     |    W     |    E     |    R     |    T     |                         |    Y     |    U     |    I     |    O     |    P     |   [ (Å)  |
      KC_TAB, 	 KC_Q, 	    KC_W,      KC_E,      KC_R,      KC_T,                     		       KC_Y,     KC_U,      KC_I,      KC_O,       KC_P,    KC_LBRC,
// |----------+----------+----------+----------+----------+----------|                         |----------+----------+----------+----------+----------+----------|
// |  Capslk  |    A     |    S     |    D     |    F     |    G     |                         |    H     |    J     |    K     |    L     |  ; (Ö)   |   ' (Ä)  |
	KC_LSFT, 	 KC_A,			KC_S,   KC_D,      KC_F,    KC_G,                     			   KC_H, 	 KC_J,      KC_K,       KC_L,    KC_SCLN,   KC_QUOT,
// |----------+----------+----------+----------+----------+----------+-----------. .-----------+----------+----------+----------+----------+----------+----------|
// | <-  Ctrl LCTL_T(KC_LEFT) |    Z     |    X     |    C     |    V     |    B     |   Down    | |    Up     |    N     |    M     |    ,     |    .     |    /     | Ctrl  -> |
KC_LCTL, KC_Z, 	    KC_X,      KC_C,      KC_V,       KC_B,     KC_UP,       KC_DOWN,      KC_N,	KC_M,       KC_COMM,   KC_DOT,    KC_SLSH, RCTL_T(KC_RGHT),
// '----------'----------'----------+----------+----------+----------+-.---------' '---------.-+----------+----------+----------+----------'----------'----------'
//                                	|   Win    |   Alt  |   Lower    |/  Space  /   \  Enter  \|   AltGr  |  Raise   |   Bksp   |
//									|		   |	      |	         |  Shift LSFT_T(KC_SPC)  /     \  Shift  |          |          |          |
                                      XXXXXXX,   KC_LALT ,  KC_C , KC_SPC,RSFT_T(KC_ENT), TO(0), KC_BSPC, KC_RWIN
//                                  '----------'----------'----------'--------'       '--------'----------'----------'----------'
  ),
  [5] = LAYOUT(
  _______, _______, _______ ,  _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
  _______, _______, _______,   _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
  _______, _______, _______,   _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
								_______, _______, _______, _______,     _______, _______, _______, _______  \
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) },
    [3] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
	[4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
	[5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif



