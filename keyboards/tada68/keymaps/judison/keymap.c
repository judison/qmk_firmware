#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1
#define _AL 2

#define _______ KC_TRNS
#define MY_CAPS LT(_FL,KC_CAPS)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)
#define OS_RALT OSM(MOD_RALT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Keymap _BL: (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |~ ` | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|Backsp |Esc |
   * |----------------------------------------------------------------|
   * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|  \  |Del |
   * |----------------------------------------------------------------|
   * |CAPS   |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return |PgUp|
   * |----------------------------------------------------------------|
   * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift | Up|PgDn|
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt |        Space          |Alt| FN|Ctrl|Lef|Dow|Rig |
   * `----------------------------------------------------------------'
   */
[_BL] = LAYOUT_ansi(
  KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRC, KC_RBRC,KC_BSPC,KC_ESC, \
  KC_TAB, KC_QUOT,KC_COMM,KC_DOT, KC_P,   KC_Y,   KC_F,   KC_G,   KC_C,   KC_R,   KC_L,   KC_SLSH, KC_EQL, KC_BSLS,KC_DEL, \
  MY_CAPS,KC_A,   KC_O,   KC_E,   KC_U,   KC_I,   KC_D,   KC_H,   KC_T,   KC_N,   KC_S,   KC_MINS,         KC_ENT, KC_PGUP,  \
  OS_LSFT,KC_SCLN,KC_Q,   KC_J,   KC_K,   KC_X,   KC_B,   KC_M,   KC_W,   KC_V,   KC_Z,   OS_RSFT,         KC_UP,  KC_PGDN, \
  KC_LCTL,KC_LGUI,KC_LALT,                KC_SPC,                         OS_RALT,MO(_FL),KC_RCTRL,KC_LEFT,KC_DOWN,KC_RGHT),

  /* Keymap _FL: Function Layer
   * ,----------------------------------------------------------------.
   * |Esc|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |    |
   * |----------------------------------------------------------------|
   * |     |   |   |   |PSc|   |   |   |   |   |   |   |   |     |Ins |
   * |----------------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |Hom |
   * |----------------------------------------------------------------|
   * |        |Bl-|BL |BL+|BRT|   |   |   |MUT|VU-|VU+|      |PgU|End |
   * |----------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |Hom|PgD|End |
   * `----------------------------------------------------------------'
   */
[_FL] = LAYOUT_ansi(
  KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,TG(_AL),  \
  _______,_______,_______,_______,KC_PSCR,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_INS, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_HOME, \
  _______,BL_DEC, BL_TOGG,BL_INC, BL_BRTG,_______,_______,_______,KC_MUTE,KC_VOLD,KC_VOLU,_______,KC_PGUP,KC_END, \
  _______,_______,_______,                 _______,               _______,_______,KC_RCTRL,KC_HOME,KC_PGDN,KC_END),


[_AL] = LAYOUT_ansi(
  KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRC, KC_RBRC,KC_BSPC,KC_ESC, \
  KC_TAB, KC_QUOT,KC_COMM,KC_DOT, KC_P,   KC_Y,   KC_F,   KC_G,   KC_C,   KC_R,   KC_L,   KC_SLSH, KC_EQL, KC_BSLS,KC_DEL, \
  MY_CAPS,KC_A,   KC_O,   KC_E,   KC_U,   KC_I,   KC_D,   KC_H,   KC_T,   KC_N,   KC_S,   KC_MINS,         KC_ENT, KC_PGUP,  \
  OS_LSFT,KC_SCLN,KC_Q,   KC_J,   KC_K,   KC_X,   KC_B,   KC_M,   KC_W,   KC_V,   KC_Z,   OS_RSFT,         KC_UP,  KC_PGDN, \
  KC_NO ,KC_NO ,KC_NO ,                KC_SPC,                         KC_NO ,MO(_FL),KC_NO ,KC_LEFT, KC_DOWN,KC_RGHT),


};

