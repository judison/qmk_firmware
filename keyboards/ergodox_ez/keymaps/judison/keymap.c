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

#define OS_TILD RALT(RSFT(KC_GRAVE))
#define OS_RALT OSM(MOD_RALT)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)
#define ____ KC_TRANSPARENT

#define BASE   0  // Base layer - Dvorak
#define SPEC   1  // 
#define QWER   2
#define FN   3  // Functions


enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  RGB_LAY, // toggle layer color
  KC_CR_0,
  KC_CR_1,
  KC_CR_2,
  KC_CR_3,
  KC_CR_4,
  KC_CR_5,
  KC_CR_6,
  KC_CR_7,
  KC_CR_8,
  KC_CR_9,
  KC_CR_A,
  KC_CR_B,
  KC_CR_C,
  KC_CR_D,
  KC_CR_E,
  KC_CR_F,
  KC_CR_W,
  //
  M_EMAIL,
  M_RUBUP,
};

#define CR_0 {0x00,255,255}
#define CR_1 {0x10,255,255}
#define CR_2 {0x20,255,255}
#define CR_3 {0x30,255,255}
#define CR_4 {0x40,255,255}
#define CR_5 {0x50,255,255}
#define CR_6 {0x60,255,255}
#define CR_7 {0x70,255,255}
#define CR_8 {0x80,255,255}
#define CR_9 {0x90,255,255}
#define CR_A {0xA0,255,255}
#define CR_B {0xB0,255,255}
#define CR_C {0xC0,255,255}
#define CR_D {0xD0,255,255}
#define CR_E {0xE0,255,255}
#define CR_F {0xF0,255,255}

#define C___ {0,0,0}
#define CGRE {86,255,255}
#define CBLU {172,255,255}
#define CRED {0,255,255}
#define CWHT {0,0,255}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  #include "layout_base.h"
  #include "layout_spec.h"
  #include "layout_qwer.h"
  #include "layout_fn.h"
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color = 0;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}
/*
#define LAYOUT_ergodox(                                         \
                                                                \
    k00,k01,k02,k03,k04,k05,k06,                                \
    k10,k11,k12,k13,k14,k15,k16,                                \
    k20,k21,k22,k23,k24,k25,                                    \
    k30,k31,k32,k33,k34,k35,k36,                                \
    k40,k41,k42,k43,k44,                                        \
                            k55,k56,                            \
                                k54,                            \
                        k51,k52,k53,                            \
                                                                \
        k07,k08,k09,k0A,k0B,k0C,k0D,                            \
        k17,k18,k19,k1A,k1B,k1C,k1D,                            \
            k28,k29,k2A,k2B,k2C,k2D,                            \
        k37,k38,k39,k3A,k3B,k3C,k3D,                            \
                k49,k4A,k4B,k4C,k4D,                            \
    k57,k58,                                                    \
    k59,                                                        \
    k5A,k5B,k5C )                                               \
                                                                \
   
   {                                                            \
    { k00,   k01, k02, k03, k04, k05,   k06,      k07,   k08,   k09, k0A, k0B, k0C, k0D    }, \
    { k10,   k11, k12, k13, k14, k15,   k16,      k17,   k18,   k19, k1A, k1B, k1C, k1D    }, \
    { k20,   k21, k22, k23, k24, k25,   KC_NO,    KC_NO, k28,   k29, k2A, k2B, k2C, k2D    }, \
    { k30,   k31, k32, k33, k34, k35,   k36,      k37,   k38,   k39, k3A, k3B, k3C, k3D    }, \
    { k40,   k41, k42, k43, k44, KC_NO, KC_NO,    KC_NO, KC_NO, k49, k4A, k4B, k4C, k4D    }, \
    { KC_NO, k51, k52, k53, k54, k55,   k56,      k57,   k58,   k59, k5A, k5B, k5C, KC_NO  }  \
   }
*/

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [SPEC] = { C___, C___, C___, C___, C___, 
            C___, C___, C___, C___, C___,
            C___, C___, C___, C___, C___,
            C___, C___, C___, C___, C___,
                  C___, C___, C___, C___, 
            
            CR_3, CR_2, CR_1, CR_0, C___,
            CR_7, CR_6, CR_5, CR_4, C___,
            CR_B, CR_A, CR_9, CR_8, C___,
            CR_F, CR_E, CR_D, CR_C, C___,
                  C___, CWHT, C___, C___ },

    [QWER] = { C___, C___, C___, C___, C___,
            CGRE, CGRE, CGRE, CGRE, CGRE,
            CGRE, CGRE, CGRE, CGRE, CGRE,
            CGRE, CGRE, CGRE, CGRE, CGRE,
                  C___, C___, C___, C___,
            
            C___, C___, C___, C___, C___,
            CGRE, CGRE, CGRE, CGRE, CGRE,
            CGRE, CGRE, CGRE, CGRE, CGRE,
            CGRE, CGRE, CGRE, CGRE, CGRE,
                  C___, C___, C___, C___ },

    [FN] = { CBLU, CBLU, CBLU, CBLU, CBLU, C___, C___, C___, CBLU, CBLU, C___, C___, C___, C___, C___, C___, CBLU, CBLU, CBLU, C___, CBLU, CBLU, CBLU, C___, CBLU, CBLU, CBLU, CBLU, CBLU, C___, CBLU, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___, C___ },

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
  if (keycode >= KC_CR_0 && keycode <= KC_CR_F) {
    if (record->event.pressed) {
      uint16_t i = keycode-KC_CR_0;
      rgblight_sethsv(i*16,255,255);
    }
    return false;
  }
  switch (keycode) {
    case KC_CR_W:
      if (record->event.pressed) {
        rgblight_sethsv(0,0,255);
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
    case RGB_LAY:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
    case M_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("judison@gmail.com");
      }
      return false;
    case M_RUBUP:
      if (record->event.pressed) {
        SEND_STRING("root" SS_TAP(X_TAB) "123456" SS_TAP(X_ENTER));
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
