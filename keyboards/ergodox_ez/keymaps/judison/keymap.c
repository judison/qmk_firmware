#include QMK_KEYBOARD_H
#include "version.h"

#define OS_TILD RALT(RSFT(KC_GRAVE))
#define OS_RALT OSM(MOD_RALT)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)

#define BASE   0  // Base layer - Dvorak
#define SPEC   1  // 
#define QWER   2
#define FN     3  // Functions

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
  [BASE] = LAYOUT_ergodox_pretty(
    /*=======================================================================================================*/    /*=======================================================================================================*/	
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ KC_ESC,       /**/ KC_1,    /**/ KC_2,    /**/ KC_3,    /**/ KC_4,    /**/ KC_5,    /**/ KC_DEL,  /**/    /**/ KC_GRV,  /**/ KC_6,    /**/ KC_7,    /**/ KC_8,    /**/ KC_9,    /**/ KC_0,    /**/ KC_BSPC,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ KC_TAB,       /**/ KC_QUOT, /**/ KC_COMM, /**/ KC_DOT,  /**/ KC_P,    /**/ KC_Y,    /**/ KC_PGUP, /**/    /**/ KC_UP,   /**/  KC_F,   /**/ KC_G,    /**/ KC_C,    /**/ KC_R,    /**/ KC_L,    /**/ KC_BSLS,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ KC_CAPS,      /**/ KC_A,    /**/ KC_O,    /**/ KC_E,    /**/ KC_U,    /**/ KC_I,    /*==============*/    /*==============*/ KC_D,    /**/ KC_H,    /**/ KC_T,    /**/ KC_N,    /**/ KC_S,    /**/ KC_ENTER,     /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ OS_LSFT,      /**/ KC_SCLN, /**/ KC_Q,    /**/ KC_J,    /**/ KC_K,    /**/ KC_X,    /**/ KC_PGDN, /**/    /**/ KC_DOWN, /**/ KC_B,    /**/ KC_M,    /**/ KC_W,    /**/ KC_V,    /**/ KC_Z,    /**/ OS_RSFT,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
        /**/           /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
        /**/ KC_LCTL,  /**/ KC_LGUI, /**/ KC_LALT, /**/ OS_TILD, /**/ OS_RALT, /**/                                                            /**/ KC_SLSH, /**/ KC_LBRC, /**/ KC_RBRC, /**/ KC_EQL,  /**/ KC_MINS, /**/
        /**/           /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
        /*===================================================================================================*/    /*==================================================================================================*/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                               /**/ C(KC_C), /**/ C(KC_V), /**/    /**/ KC_LEFT, /**/ KC_RGHT, /**/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /**/ TT(1),   /**/    /**/ TT(2),   /**/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /*==============*/    /*==============*/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/ KC_SPC,  /**/ KC_BSPC, /**/ TT(3),   /**/    /**/ TT(3),   /**/ KC_BSPC, /**/ KC_SPC   /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
),
  [SPEC] = LAYOUT_ergodox_pretty(
    /*=======================================================================================================*/    /*=======================================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ RGB_RMOD,     /**/ RGB_MOD, /**/ KC_CR_0, /**/ KC_CR_1, /**/ KC_CR_2, /**/ KC_CR_3, /**/ RGB_TOG, /**/    /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ RESET,        /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ RGB_HUD,      /**/ RGB_HUI, /**/ KC_CR_4, /**/ KC_CR_5, /**/ KC_CR_6, /**/ KC_CR_7, /**/ RGB_SLD, /**/    /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ RGB_SAD,      /**/ RGB_SAI, /**/ KC_CR_8, /**/ KC_CR_9, /**/ KC_CR_A, /**/ KC_CR_B, /*==============*/    /*==============*/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ RGB_VAD,      /**/ RGB_VAI, /**/ KC_CR_C, /**/ KC_CR_D, /**/ KC_CR_E, /**/ KC_CR_F, /**/ RGB_LAY, /**/    /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
         /**/          /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
         /**/ _______, /**/ _______, /**/ _______, /**/ KC_CR_W, /**/ _______, /**/                                                            /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/
         /**/          /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
         /*==================================================================================================*/    /*==================================================================================================*/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                               /**/ _______, /**/ _______, /**/    /**/ _______, /**/ _______, /**/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /**/ _______, /**/    /**/ _______, /**/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /*==============*/    /*==============*/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/ _______, /**/ _______, /**/ _______, /**/    /**/ _______, /**/ _______, /**/ _______  /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
),
  [QWER] = LAYOUT_ergodox_pretty(
    /*=======================================================================================================*/    /*=======================================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ _______,      /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/    /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______,      /**/  
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ _______,      /**/  KC_Q,   /**/  KC_W,   /**/  KC_E,   /**/  KC_R,   /**/  KC_T,   /**/ _______, /**/    /**/ _______, /**/  KC_Y,   /**/  KC_U,   /**/  KC_I,   /**/  KC_O,   /**/  KC_P,   /**/ _______,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ _______,      /**/  KC_A,   /**/  KC_S,   /**/  KC_D,   /**/  KC_F,   /**/  KC_G,   /*==============*/    /*==============*/  KC_H,   /**/  KC_J,   /**/  KC_K,   /**/  KC_L,   /**/ KC_SCLN, /**/ _______,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ _______,      /**/  KC_Z,   /**/  KC_X,   /**/  KC_C,   /**/  KC_V,   /**/  KC_B,   /**/ _______, /**/    /**/ _______, /**/  KC_N,   /**/  KC_M,   /**/ KC_COMM, /**/  KC_DOT, /**/ KC_QUOT, /**/ _______,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
         /**/          /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
         /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/                                                            /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/
         /**/          /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
         /*==================================================================================================*/    /*==================================================================================================*/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                               /**/ _______, /**/ _______, /**/    /**/ _______, /**/ _______, /**/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /**/ _______, /**/    /**/ _______, /**/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /*==============*/    /*==============*/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/ _______, /**/ _______, /**/ _______, /**/    /**/ _______, /**/ _______, /**/ _______  /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
),
  [FN] = LAYOUT_ergodox_pretty(
    /*=======================================================================================================*/    /*=======================================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/  A(KC_F4),    /**/ KC_F1,   /**/ KC_F2,   /**/ KC_F3,   /**/ KC_F4,   /**/ KC_F6,   /**/ KC_INS,  /**/    /**/ _______, /**/ KC_F6,   /**/ KC_F7,   /**/ KC_F8,   /**/ KC_F9,   /**/ KC_F10,  /**/ KC_F11,       /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ _______,      /**/ _______, /**/ _______, /**/ _______, /**/ KC_PSCR, /**/ _______, /**/ _______, /**/    /**/ KC_PGUP, /**/ _______, /**/ _______, /**/ _______, /**/ M_RUBUP, /**/ _______, /**/ KC_F12,       /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ _______,      /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /*==============*/    /*==============*/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ KC_F13,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=========================================================================================*/          /**/    /**/          /*=========================================================================================*/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /**/ _______,      /**/ _______, /**/ _______, /**/ M_EMAIL, /**/ _______, /**/ _______, /**/ _______, /**/    /**/ KC_PGDN, /**/ _______, /**/ KC_HOME, /**/ KC_UP,   /**/ KC_END,  /**/ _______, /**/ KC_LOCK,      /**/
    /**/               /**/          /**/          /**/          /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/          /**/          /**/          /**/               /**/
    /*=======================================================================================================*/    /*=======================================================================================================*/
         /**/          /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
         /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/ _______, /**/                                                            /**/ KC_LEFT, /**/ KC_DOWN, /**/ KC_RGHT, /**/ _______, /**/ KC_RCTL, /**/
         /**/          /**/          /**/          /**/          /**/          /**/                                                            /**/          /**/          /**/          /**/          /**/          /**/
         /*==================================================================================================*/    /*==================================================================================================*/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                               /**/ C(KC_X), /**/ _______, /**/    /**/ KC_HOME, /**/ KC_END,  /**/
                                                                               /**/          /**/          /**/    /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /**/ _______, /**/    /**/ _______, /**/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/          /**/          /*==============*/    /*==============*/          /**/          /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /**/ _______, /**/ _______, /**/ _______, /**/    /**/ _______, /**/ _______, /**/ _______  /**/
                                                                 /**/          /**/          /**/          /**/    /**/          /**/          /**/          /**/
                                                                 /*==========================================*/    /*==========================================*/
),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
bool disable_layer_color = 1;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

#define LEDMAP_ergodox_pretty(\
    l00,l01,l02,l03,l04,        r00,r01,r02,r03,r04, \
    l10,l11,l12,l13,l14,        r10,r11,r12,r13,r14, \
    l20,l21,l22,l23,l24,        r20,r21,r22,r23,r24, \
    l30,l31,l32,l33,l34,        r30,r31,r32,r33,r34, \
    l40,l41,l42,l43,                r41,r42,r43,r44) \
   {  r00, r01, r02, r03, r04, \
      r10, r11, r12, r13, r14, \
      r20, r21, r22, r23, r24, \
      r30, r31, r32, r33, r34, \
           r41, r42, r43, r44, \
    \
      l04, l03, l02, l01, l00, \
      l14, l13, l12, l11, l10, \
      l24, l23, l22, l21, l20, \
      l34, l33, l32, l31, l30, \
           l43, l42, l41, l40 }

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {

    [SPEC]=LEDMAP_ergodox_pretty(
      C___, CR_0, CR_1, CR_2, CR_3,     C___, C___, C___, C___, C___,
      C___, CR_4, CR_5, CR_6, CR_7,     C___, C___, C___, C___, C___,
      C___, CR_8, CR_9, CR_A, CR_B,     C___, C___, C___, C___, C___,
      C___, CR_C, CR_D, CR_E, CR_F,     C___, C___, C___, C___, C___,
      C___, C___, CWHT, C___,                 C___, C___, C___, C___
    ),

    [QWER]=LEDMAP_ergodox_pretty(
      C___, C___, C___, C___, C___,     C___, C___, C___, C___, C___,
      CGRE, CGRE, CGRE, CGRE, CGRE,     CGRE, CGRE, CGRE, CGRE, CGRE,
      CGRE, CGRE, CGRE, CGRE, CGRE,     CGRE, CGRE, CGRE, CGRE, CGRE,
      CGRE, CGRE, CGRE, CGRE, CGRE,     CGRE, CGRE, CGRE, CGRE, CGRE,
      C___, C___, C___, C___,                 C___, C___, C___, C___
    ),

    [FN]=LEDMAP_ergodox_pretty(
      CBLU, CBLU, CBLU, CBLU, CBLU,     CBLU, CBLU, CBLU, CBLU, CBLU,
      C___, C___, C___, CBLU, C___,     C___, C___, C___, C___, C___,
      C___, C___, C___, C___, C___,     C___, C___, C___, C___, C___,
      C___, C___, C___, C___, C___,     C___, CBLU, CBLU, CBLU, C___,
      C___, C___, C___, C___,                 CBLU, CBLU, CBLU, C___
    ),

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