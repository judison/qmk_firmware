#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  TOGGLE_LAYER_COLOR,
  EPRM,
  HSV_172_255_255,
  HSV_86_255_255,
  HSV_0_255_255,
  HSV_43_255_255,
  HSV_172_255_128,
  HSV_86_255_128,
  HSV_21_255_255,
  HSV_215_255_128,
  HSV_129_255_255,
  HSV_215_255_255,
  HSV_0_0_255,
  HSV_188_154_230,
  HSV_129_255_192,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(KC_ESCAPE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_DELETE,KC_TAB,KC_QUOTE,KC_COMMA,KC_DOT,KC_P,KC_Y,KC_UP,KC_CAPSLOCK,KC_A,KC_O,KC_E,KC_U,KC_I,OSM(MOD_LSFT),KC_SCOLON,KC_Q,KC_J,KC_K,KC_X,KC_DOWN,KC_LCTRL,KC_LGUI,KC_LALT,RALT(RSFT(KC_GRAVE)),OSM(MOD_RALT),KC_LEFT,KC_RIGHT,TT(1),KC_SPACE,KC_BSPACE,TT(3),KC_GRAVE,KC_6,KC_7,KC_8,KC_9,KC_0,KC_BSPACE,KC_PGUP,KC_F,KC_G,KC_C,KC_R,KC_L,KC_BSLASH,KC_D,KC_H,KC_T,KC_N,KC_S,KC_ENTER,KC_PGDOWN,KC_B,KC_M,KC_W,KC_V,KC_Z,OSM(MOD_LSFT),KC_SLASH,KC_LBRACKET,KC_RBRACKET,KC_EQUAL,KC_MINUS,KC_UP,KC_DOWN,TT(2),TT(3),KC_BSPACE,KC_SPACE),

  [1] = LAYOUT_ergodox(KC_TRANSPARENT,RGB_MOD,HSV_172_255_255,HSV_86_255_255,HSV_0_255_255,HSV_43_255_255,RGB_TOG,KC_TRANSPARENT,RGB_SLD,HSV_172_255_128,HSV_86_255_128,HSV_21_255_255,HSV_215_255_128,RGB_VAI,KC_TRANSPARENT,RGB_HUI,HSV_129_255_255,HSV_215_255_255,HSV_0_0_255,HSV_188_154_230,KC_TRANSPARENT,RGB_HUD,HSV_129_255_192,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,RGB_VAD,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_ACCEL0,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_TRANSPARENT,KC_MS_ACCEL1,KC_NO,KC_NO,KC_MS_UP,KC_NO,KC_NO,KC_TRANSPARENT,KC_MS_WH_UP,KC_MS_LEFT,KC_NO,KC_MS_RIGHT,KC_NO,KC_TRANSPARENT,KC_MS_ACCEL2,KC_MS_WH_DOWN,KC_NO,KC_MS_DOWN,KC_NO,KC_NO,KC_TRANSPARENT,KC_MS_WH_LEFT,KC_TRANSPARENT,KC_MS_WH_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN3,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN1,KC_MS_BTN2),

  [2] = LAYOUT_ergodox(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_TRANSPARENT,KC_TRANSPARENT,KC_A,KC_S,KC_D,KC_F,KC_G,KC_TRANSPARENT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_TRANSPARENT,KC_H,KC_J,KC_K,KC_L,KC_SCOLON,KC_TRANSPARENT,KC_TRANSPARENT,KC_N,KC_M,KC_COMMA,KC_DOT,KC_QUOTE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [3] = LAYOUT_ergodox(KC_TRANSPARENT,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_INSERT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_PSCREEN,KC_TRANSPARENT,KC_PGUP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_PGDOWN,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_HOME,KC_END,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_TRANSPARENT,KC_AUDIO_VOL_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_F11,KC_F12,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT,KC_HOME,KC_UP,KC_END,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_RIGHT,KC_TRANSPARENT,KC_RCTRL,KC_PGUP,KC_PGDOWN,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color = 0;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {43,255,255}, {0,255,255}, {86,255,255}, {172,255,255}, {0,0,0}, {215,255,128}, {21,255,255}, {86,255,128}, {172,255,128}, {0,0,0}, {188,154,230}, {0,0,255}, {215,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,192}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        rgb_matrix_set_color( i, rgb.r, rgb.g, rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || disable_layer_color) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case RGB_TOG:
  if (record->event.pressed) {
    if (rgb_matrix_config.val) {
      rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 0);
    } else {
      rgb_matrix_sethsv(rgb_matrix_config.hue, rgb_matrix_config.sat, 255);
    }
  }
  return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_86_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,255);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_43_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(43,255,255);
      }
      return false;
    case HSV_172_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,128);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_21_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(21,255,255);
      }
      return false;
    case HSV_215_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,128);
      }
      return false;
    case HSV_129_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(129,255,255);
      }
      return false;
    case HSV_215_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,255);
      }
      return false;
    case HSV_0_0_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,255);
      }
      return false;
    case HSV_188_154_230:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(188,154,230);
      }
      return false;
    case HSV_129_255_192:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(129,255,192);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
