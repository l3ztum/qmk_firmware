 // Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
#pragma once
#define XXX KC_NO
#define COMBO_COUNT 4

#define LAYOUT_split_3x5_3( \
  L00, L01, L02, L03, L04,           R00, R01, R02, R03, R04, \
  L10, L11, L12, L13, L14,           R10, R11, R12, R13, R14, \
  L20, L21, L22, L23, L24,           R20, R21, R22, R23, R24, \
                 L30, L31, L32, R30, R31, R32 \
  ) \
  { \
	{ KC_1, KC_1, KC_2, KC_3, KC_4, KC_5 }, \
    { KC_TAB, L00, L01, L02, L03, L04 }, \
    { KC_LSFT, L10, L11, L12, L13, L14 }, \
    { KC_LCTL, L20, L21, L22, L23, L24 }, \
    { KC_CALC, KC_NO, L30, L31, L32, KC_ENT }, \
    { RCS(KC_M), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, R04, R03, R02, R01, R00 }, \
    { KC_MEH, R14, R13, R12, R11, R10 }, \
    { KC_NO, R24, R23, R22, R21, R20 }, \
    { KC_NO, TO(0), R32, R31, R30, KC_ENT } \
  }

#define LAYOUT_miryoku( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x5_3( \
 K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  \
 K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  \
 K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)
