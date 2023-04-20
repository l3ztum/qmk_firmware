// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define COMBO_COUNT 4


#define MIRYOKU_LAYER_TAP \
 KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
 KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
 KC_Y,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
 U_NP,              U_NP,              KC_C,              KC_TAB,            KC_SPC,            KC_BSPC,           KC_ENT,            KC_ESC,            TD(U_TD_U_BASE),

#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Z,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      RGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Y), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),   LT(U_SYM,KC_TAB), LT(U_NUM,KC_BSPC),  LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_ENT),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP


#define MIRYOKU_LAYER_SYM \
KC_QUOTE,    KC_LABK, KC_RABK, KC_DOUBLE_QUOTE,  KC_DOT,                KC_AMPERSAND, CPP_SCOPE, KC_LBRC,   KC_RBRC, KC_PERCENT, \
KC_EXLM, KC_MINUS, KC_PLUS, KC_EQL,             KC_HASH,            KC_PIPE, KC_COLON, KC_LPRN,   KC_RPRN, KC_QUES, \
KC_CIRCUMFLEX,    KC_SLASH, KC_ASTERISK, KC_BACKSLASH, BASH_UPWARD,         KC_TILD, KC_DOLLAR, KC_LCBR, KC_RCBR, KC_AT, \
U_NP,    U_NP,    U_NA,    U_NA,    U_NA,                           KC_UNDS,      KC_LPRN, KC_RPRN,   U_NP,


#define MIRYOKU_LAYER_NAV \
KC_PGUP,           KC_HOME,           KC_UP,             KC_END,            KC_INS,            U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_PGDN,           KC_LEFT,           KC_DOWN,           KC_RGHT,           CW_TOGG,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_NAV),    TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DEL,            KC_TAB,            KC_BSPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


