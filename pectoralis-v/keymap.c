#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_jp.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_ENTER,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_MINUS,       KC_SCOLON,      
    MT(MOD_LSFT, KC_TAB),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       MT(MOD_RSFT, KC_QUOTE),
    KC_TRANSPARENT, KC_LCTRL,       KC_LGUI,        KC_RALT,        LT(1,KC_SPACE), KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(2,KC_ENTER), RSFT(KC_RCTRL), KC_TRANSPARENT, LGUI(KC_S),     KC_TRANSPARENT, 
                                                    LT(3,KC_LANG2), KC_DELETE,                                      KC_CAPSLOCK,    LT(8,KC_LANG1)
  ),
  [1] = LAYOUT_voyager(
    TG(2),          LALT(KC_F4),    LCTL(KC_W),     KC_NO,          LCTL(KC_F),     KC_NO,                                          KC_NO,          RCTL(RSFT(KC_TAB)),RALT(KC_LEFT),  RALT(KC_RIGHT), RCTL(KC_TAB),   KC_NO,          
    ST_MACRO_0,     LCTL(KC_A),     LCTL(KC_S),     KC_LCTRL,       KC_LSHIFT,      ST_MACRO_1,                                     KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          
    LCTL(KC_Y),     LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LGUI(KC_V),                                     KC_NO,          KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_NO,          
    KC_TRANSPARENT, KC_N,           KC_LGUI,        KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    LGUI(KC_L),     KC_NO,                                          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_LANG2,                                       KC_NO,          KC_LCBR,        KC_LBRACKET,    KC_RBRACKET,    KC_RCBR,        KC_PIPE,        
    KC_TRANSPARENT, KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_TILD,                                        DYN_MACRO_PLAY1,KC_PLUS,        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_COLN,        
    KC_TRANSPARENT, KC_COLN,        KC_1,           KC_2,           KC_3,           KC_GRAVE,                                       DYN_MACRO_PLAY2,KC_EQUAL,       KC_LABK,        KC_RABK,        KC_QUES,        KC_DQUO,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_NO,          KC_TRANSPARENT, 
                                                    KC_ENTER,       KC_BSPACE,                                      KC_NO,          ST_MACRO_2
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESET,          
    KC_NO,          KC_NO,          LALT(KC_TAB),   LGUI(KC_TAB),   LGUI(LSFT(KC_S)),KC_NO,                                          KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(4),                                          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_LCTRL,       LT(5,KC_LANG2), KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(6,KC_LANG1), RSFT(KC_RGUI),  KC_TRANSPARENT, RGUI(KC_SPACE), KC_TRANSPARENT, 
                                                    LT(7,KC_BSPACE),KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(8,KC_ENTER)
  ),
  [5] = LAYOUT_voyager(
    TG(6),          LGUI(KC_Q),     LGUI(KC_W),     LCTL(LSFT(KC_R)),LGUI(KC_F),     KC_NO,                                          KC_NO,          RCTL(RSFT(KC_TAB)),RGUI(KC_LEFT),  RGUI(KC_RIGHT), RCTL(KC_TAB),   KC_NO,          
    LGUI(KC_BSPACE),LGUI(KC_A),     LGUI(KC_S),     KC_LGUI,        KC_LSHIFT,      LCTL(KC_K),                                     KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          
    LGUI(KC_Y),     LGUI(KC_Z),     LGUI(KC_X),     LGUI(KC_C),     LGUI(KC_V),     LGUI(LCTL(KC_V)),                                KC_NO,          RCTL(KC_A),     KC_PGDOWN,      KC_PGUP,        RCTL(KC_E),     KC_NO,          
    KC_TRANSPARENT, KC_N,           KC_LCTRL,       KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    LGUI(LCTL(KC_Q)),KC_NO,                                          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_LANG2,                                       KC_NO,          KC_LCBR,        KC_LBRACKET,    KC_RBRACKET,    KC_RCBR,        KC_PIPE,        
    KC_TRANSPARENT, KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_TILD,                                        DYN_MACRO_PLAY1,KC_PLUS,        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_COLN,        
    KC_TRANSPARENT, KC_COLN,        KC_1,           KC_2,           KC_3,           KC_GRAVE,                                       DYN_MACRO_PLAY2,KC_EQUAL,       KC_LABK,        KC_RABK,        KC_QUES,        KC_DQUO,        
    KC_TRANSPARENT, KC_LGUI,        KC_0,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_RGUI),  KC_SPACE,       KC_NO,          KC_TRANSPARENT, 
                                                    KC_ENTER,       KC_BSPACE,                                      KC_NO,          KC_NO
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          DYN_REC_STOP,   KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESET,          
    KC_NO,          KC_NO,          LGUI(KC_TAB),   LCTL(KC_UP),    LGUI(LCTL(LSFT(KC_4))),KC_NO,                                          DYN_REC_START1, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          DYN_REC_START2, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_AMPR,        KC_ASTR,        KC_NO,          KC_NO,                                          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_NO,          KC_NO,          KC_DLR,         KC_PERC,        KC_CIRC,        KC_NO,                                          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_EXLM,        KC_AT,          KC_HASH,        KC_NO,                                          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_NO,          KC_NO,                                          TO(0),          KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_H, KC_J, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_DOWN),
    COMBO(combo1, KC_UP),
    COMBO(combo2, KC_BSPACE),
    COMBO(combo3, KC_F10),
    COMBO(combo4, KC_F7),
    COMBO(combo5, KC_RIGHT),
    COMBO(combo6, KC_LEFT),
};

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return false;
    }
}

extern rgb_config_t rgb_matrix_config;

layer_state_t layer_state_set_user(layer_state_t state) {
    bool LED_1 = false;
    bool LED_2 = false;
    bool LED_3 = false;

    switch (get_highest_layer(state)) {
        // base and Ignis no led, no anime
        case 4:
        case 5:
            LED_2 = true;
            // breakせずスルー
        case 0:
        case 1:
            if (rgb_matrix_get_mode() != RGB_MATRIX_SOLID_COLOR) {
                rgb_matrix_sethsv_noeeprom(0, 0, 0);
                rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
            }
            break;
        // AQUA
        case 6:
            LED_2 = true;
            // breakせずスルー
        case 2:
            LED_1 = true;
            if (rgb_matrix_get_mode() != RGB_MATRIX_SOLID_COLOR) {
                rgb_matrix_sethsv_noeeprom(0, 0, 0);
                rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
            }
            break;
        // TERRA
        case 7:
            if (rgb_matrix_get_mode() != RGB_MATRIX_BAND_SPIRAL_VAL) {
                rgb_matrix_sethsv_noeeprom(32, 255, 128);
                rgb_matrix_mode_noeeprom(RGB_MATRIX_BAND_SPIRAL_VAL);
            }
            break;
        // AER
        case 8:
            LED_2 = true;
            // breakせずスルー
        case 3:
            LED_3 = true;
            if (rgb_matrix_get_mode() != RGB_MATRIX_SOLID_REACTIVE_CROSS) {
                rgb_matrix_sethsv_noeeprom(121, 255, 128);
                rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE_CROSS);
            }
            break;
        default:
            break;
    }
    STATUS_LED_1(LED_1);
    STATUS_LED_2(LED_2);
    STATUS_LED_3(LED_3);
    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_ENTER:
    if (record->event.pressed) {
      rgb_matrix_sethsv_noeeprom(201, 255, 255);
      rgb_matrix_mode_noeeprom(RGB_MATRIX_SPLASH);
    }
    return true;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_HOME)) SS_DELAY(50) SS_TAP(X_BSPACE));
    }
    return false;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_END)) SS_DELAY(50) SS_TAP(X_DELETE));
    }
    return false;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_DELETE))) SS_DELAY(300) "99295\t");
    }
    return false;
  }
  return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_ENTER:
      break;
    default:
      if (!record->event.pressed) {
        if (rgb_matrix_get_mode() == RGB_MATRIX_SPLASH) { 
          rgb_matrix_sethsv_noeeprom(0, 0, 0);
          rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        }
      }
      break;
  }
}

