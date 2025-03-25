#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_steno.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),    KC_MINUS,                                       KC_UNDS,        TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           TD(DANCE_6),                                    TD(DANCE_14),   KC_J,           KC_L,           KC_U,           KC_Y,           TD(DANCE_15),   TD(DANCE_16),   
    CW_TOGG,        KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           TD(DANCE_7),                                                                    TD(DANCE_17),   KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           TD(DANCE_18),   
    SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           TD(DANCE_19),   TD(DANCE_20),   TD(DANCE_21),   SC_RSPC,        
    KC_LEFT_CTRL,   MO(7),          KC_LEFT_ALT,    KC_LEFT,        KC_RIGHT,       OSM(MOD_LSFT),                                                                                                  MT(MOD_RALT, KC_ESCAPE),KC_DOWN,        KC_UP,          ST_MACRO_4,     KC_APPLICATION, KC_RIGHT_CTRL,  
    TD(DANCE_8),    MO(4),          KC_LEFT_GUI,                    KC_ENTER,       MO(4),          KC_BSPC
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           TD(DANCE_22),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_HOME,                                        KC_PAGE_UP,     KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_END,                                                                         KC_PGDN,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_LEFT_ALT,    KC_NO,          AS_OFF,         KC_ESCAPE,                                                                                                      TO(0),          KC_RIGHT_ALT,   MT(MOD_RCTL, KC_SLASH),KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       MO(3),          KC_TAB,                         KC_TRANSPARENT, MO(4),          KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                 KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          
    KC_TRANSPARENT, KC_Y,           KC_UP,          KC_U,           KC_I,           KC_O,           KC_PAGE_UP,                                     KC_F2,          KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_F10,         
    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_P,           KC_H,           KC_PGDN,                                                                        KC_F1,          KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, KC_F11,         
    KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_N,           KC_M,                                           KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_KP_PLUS,     KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,                                          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         TD(DANCE_25),   TD(DANCE_26),   
    ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     KC_MINUS,       KC_UNDS,        KC_AT,          ST_MACRO_8,                                     KC_PAGE_UP,     KC_CALCULATOR,  KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    TD(DANCE_27),   
    ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    KC_EQUAL,       KC_PERC,        KC_HASH,        ST_MACRO_12,                                                                    KC_PGDN,        ST_MACRO_15,    KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ASTERISK, TD(DANCE_28),   
    KC_LEFT_SHIFT,  ST_MACRO_13,    ST_MACRO_14,    KC_PIPE,        KC_AMPR,        TD(DANCE_23),                                   ST_MACRO_16,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    TD(DANCE_29),   
    KC_LEFT_CTRL,   KC_LABK,        TD(DANCE_24),   KC_HOME,        KC_END,         KC_TRANSPARENT,                                                                                                 LALT(LCTL(LSFT(KC_P))),KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_KP_PLUS,     TD(DANCE_30),   
    KC_TRANSPARENT, KC_TRANSPARENT, OSL(6),                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_STENO_BOLT,                                  QK_STENO_GEMINI,STN_FN,         STN_RES1,       STN_RES2,       KC_TRANSPARENT, STN_PWR,        TO(0),          
    KC_TRANSPARENT, STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         KC_TRANSPARENT,                                 KC_TRANSPARENT, STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,         
    KC_TRANSPARENT, STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,         
    KC_TRANSPARENT, STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                        STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, STN_NC,         STN_NC,                                                                                                         STN_NC,         STN_NC,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    STN_A,          STN_O,          KC_TRANSPARENT,                 KC_TRANSPARENT, STN_E,          STN_U
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,          LCTL(LSFT(KC_G)),TD(DANCE_31),   TD(DANCE_32),   TD(DANCE_33),   LCTL(LSFT(KC_E)),KC_NO,                                          LGUI(LCTL(LSFT(KC_V))),KC_NO,          KC_NO,          LALT(LGUI(LCTL(LSFT(KC_E)))),TD(DANCE_35),   TD(DANCE_36),   LGUI(LSFT(KC_H)),
    KC_NO,          LGUI(LSFT(KC_Q)),KC_NO,          KC_NO,          LGUI(LCTL(LSFT(KC_T))),LGUI(KC_I),     TD(DANCE_34),                                   LGUI(LSFT(KC_SPACE)),LGUI(KC_GRAVE), LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),     
    KC_NO,          LGUI(LCTL(KC_C)),LALT(LGUI(KC_C)),LGUI(KC_C),     LGUI(KC_K),     LGUI(LSFT(KC_F)),QK_LLCK,                                                                        TD(DANCE_37),   KC_NO,          LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     LGUI(KC_0),     
    KC_LEFT_SHIFT,  LALT(LGUI(KC_J)),LALT(LGUI(KC_K)),LALT(LGUI(KC_L)),LALT(LGUI(KC_B)),LGUI(KC_B),                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          LGUI(LCTL(KC_Y)),LGUI(LCTL(KC_E)),
    KC_NO,          KC_NO,          KC_NO,          LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_RIGHT)),LGUI(KC_D),                                                                                                     LGUI(KC_ESCAPE),LGUI(LCTL(LSFT(KC_LEFT))),LGUI(LCTL(LSFT(KC_RIGHT))),KC_NO,          LGUI(LCTL(LSFT(KC_Y))),LGUI(LCTL(KC_P)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 LGUI(KC_ENTER), LGUI(KC_GRAVE), LGUI(LSFT(KC_Q))
  ),
  [7] = LAYOUT_moonlander(
    DM_RSTP,        DM_REC1,        DM_REC2,        KC_NO,          QK_DYNAMIC_TAPPING_TERM_PRINT,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,                                KC_NO,          KC_PSCR,        KC_PAUSE,       KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        
    KC_NO,          DM_PLY1,        DM_PLY2,        KC_NO,          AS_RPT,         AS_DOWN,        AS_UP,                                          RGB_MODE_FORWARD,RGB_SPI,        KC_PGDN,        KC_UP,          KC_PAGE_UP,     RGB_SAD,        RGB_SAI,        
    KC_CAPS,        KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_NO,          CM_TOGG,                                                                        TOGGLE_LAYER_COLOR,RGB_SPD,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       RGB_HUD,        RGB_HUI,        
    AS_TOGG,        LALT(LGUI(LCTL(LSFT(KC_M)))),KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT,                                 KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,RGB_VAD,        RGB_VAI,        
    QK_LLCK,        KC_TRANSPARENT, LGUI(LCTL(LSFT(KC_LBRC))),LGUI(LCTL(LSFT(KC_RBRC))),LGUI(LCTL(LSFT(KC_EQUAL))),KC_MS_BTN1,                                                                                                     KC_MS_BTN2,     KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,
    TO(1),          TO(0),          TO(2),                          KC_NO,          KC_NO,          KC_NO
  ),
};
const uint16_t PROGMEM combo0[] = { KC_S, KC_T, KC_E, KC_N, KC_O, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_E, KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_X, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_X, KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_R, KC_T, KC_E, KC_M, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_R, KC_N, KC_U, KC_A, KC_G, KC_I, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_G, KC_T, KC_A, KC_M, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_M, KC_T, KC_G, KC_C, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_T, KC_G, KC_M, KC_H, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(5)),
    COMBO(combo1, ST_MACRO_0),
    COMBO(combo2, ST_MACRO_1),
    COMBO(combo3, ST_MACRO_2),
    COMBO(combo4, LCTL(KC_F18)),
    COMBO(combo5, ST_MACRO_3),
    COMBO(combo6, LALT(LGUI(KC_J))),
    COMBO(combo7, LALT(LGUI(KC_K))),
    COMBO(combo8, LALT(LGUI(KC_L))),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_2):
            return g_tapping_term -40;
        case TD(DANCE_3):
            return g_tapping_term -40;
        case TD(DANCE_4):
            return g_tapping_term -60;
        case TD(DANCE_5):
            return g_tapping_term -60;
        case KC_MINUS:
            return g_tapping_term -80;
        case TD(DANCE_7):
            return g_tapping_term -80;
        case TD(DANCE_9):
            return g_tapping_term -60;
        case TD(DANCE_10):
            return g_tapping_term -60;
        case TD(DANCE_11):
            return g_tapping_term -40;
        case TD(DANCE_14):
            return g_tapping_term -80;
        case TD(DANCE_15):
            return g_tapping_term -40;
        case TD(DANCE_16):
            return g_tapping_term -40;
        case TD(DANCE_17):
            return g_tapping_term -80;
        case TD(DANCE_18):
            return g_tapping_term -40;
        case TD(DANCE_19):
            return g_tapping_term -60;
        case TD(DANCE_20):
            return g_tapping_term -60;
        case TD(DANCE_21):
            return g_tapping_term -40;
        case MT(MOD_RALT, KC_ESCAPE):
            return g_tapping_term -80;
        case MO(3):
            return g_tapping_term -120;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {238,255,255}, {238,255,255}, {238,255,255}, {134,255,255}, {29,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {29,255,255}, {29,255,255}, {162,255,255}, {162,255,255}, {162,255,255}, {86,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {29,255,255}, {0,255,255}, {29,255,255}, {0,0,255}, {134,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {238,126,255}, {238,126,255}, {29,255,255}, {29,255,255}, {29,255,255}, {238,126,255}, {238,255,255}, {238,126,255}, {29,255,255}, {29,255,255}, {196,255,255}, {196,255,255}, {196,127,255}, {0,255,255}, {29,255,255}, {162,255,255}, {162,255,255}, {141,255,255}, {86,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {79,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,255}, {134,255,255}, {0,0,255}, {29,255,255} },

    [1] = { {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {29,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {29,255,255}, {0,255,255}, {29,255,255}, {0,0,255}, {134,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {29,255,255}, {0,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {29,255,255}, {86,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {29,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,255}, {134,255,255}, {0,0,255}, {29,255,255} },

    [2] = { {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {134,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {234,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {0,0,0}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {182,255,98}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {0,0,255}, {134,255,255}, {0,0,255}, {0,0,255}, {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {0,255,255}, {0,0,255}, {158,131,255}, {234,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {234,255,255}, {0,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {234,255,255}, {234,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {234,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {0,0,255}, {134,255,255}, {0,0,255}, {134,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {158,131,255}, {0,255,255}, {170,255,255}, {0,0,0}, {0,0,255}, {0,255,255}, {0,255,255}, {170,255,255}, {0,0,0}, {0,0,255}, {158,131,255}, {0,255,255}, {170,255,255}, {0,0,0}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {0,255,255}, {0,0,255}, {158,131,255}, {158,255,255}, {170,255,255}, {0,0,0}, {234,255,255}, {234,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {58,255,255}, {58,255,255}, {58,255,255}, {58,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {58,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {58,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,255,255}, {196,255,255}, {196,255,255}, {29,255,255}, {29,255,255}, {0,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {0,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {0,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {29,255,255}, {0,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {29,255,255}, {0,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {0,255,255}, {196,255,255}, {196,255,255}, {0,0,0}, {0,0,0}, {134,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {58,255,255}, {58,255,255}, {58,255,255}, {58,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {29,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {58,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {176,255,255}, {227,255,255}, {227,255,255}, {0,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {162,255,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {58,255,255}, {58,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {58,255,255}, {58,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {58,255,255}, {58,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {58,255,255}, {58,255,255}, {136,255,255}, {0,0,0}, {0,255,255}, {21,255,255}, {21,255,255}, {192,255,255}, {0,0,0}, {0,0,0}, {58,255,255}, {58,255,255}, {0,0,0}, {136,255,255}, {134,255,255}, {0,255,255}, {58,255,255}, {58,255,255}, {0,0,0}, {192,255,255}, {0,255,255}, {58,255,255}, {58,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {58,255,255}, {58,255,255}, {0,0,0}, {192,255,255}, {0,255,255}, {58,255,255}, {58,255,255}, {0,0,0}, {192,255,255}, {0,255,255}, {58,255,255}, {58,255,255}, {136,255,255}, {192,255,255}, {0,255,255}, {21,255,255}, {21,255,255}, {192,255,255}, {0,0,0}, {0,0,0}, {58,255,255}, {58,255,255}, {0,0,0}, {136,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {29,255,255}, {0,0,0}, {0,0,255}, {0,255,255}, {143,210,238}, {86,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {168,162,242}, {86,255,255}, {0,0,0}, {39,255,255}, {0,0,0}, {244,220,224}, {86,255,255}, {86,255,255}, {161,255,255}, {203,255,255}, {39,255,255}, {37,255,255}, {86,255,255}, {76,255,255}, {29,255,255}, {158,255,255}, {20,255,255}, {0,0,0}, {139,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,255,255}, {209,255,255}, {20,255,255}, {0,0,255}, {0,0,255}, {235,255,255}, {235,255,255}, {37,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {151,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {167,218,204}, {86,255,255}, {86,255,255}, {0,255,255}, {0,0,255}, {86,255,255}, {146,255,255} },

    [7] = { {204,255,255}, {0,0,0}, {29,255,255}, {60,255,255}, {0,255,255}, {204,255,255}, {184,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {204,255,255}, {184,255,255}, {0,0,0}, {0,0,0}, {192,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {47,255,255}, {192,255,255}, {0,255,255}, {60,173,255}, {47,255,255}, {47,255,255}, {232,255,255}, {0,255,255}, {60,255,255}, {0,0,0}, {47,255,255}, {0,255,255}, {60,255,255}, {60,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {47,255,255}, {0,255,255}, {93,255,255}, {195,255,255}, {17,255,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,255,255}, {17,255,103}, {0,0,58}, {0,0,0}, {64,96,255}, {64,255,255}, {167,255,255}, {8,255,255}, {0,0,0}, {64,255,255}, {64,255,255}, {144,255,255}, {38,255,255}, {40,255,255}, {64,96,255}, {64,255,255}, {134,255,255}, {23,255,255}, {40,255,255}, {157,255,255}, {9,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {47,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_8))) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_8))) SS_DELAY(100) SS_TAP(X_F));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_8))) SS_DELAY(100) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(100) SS_LCTL(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_5)) SS_DELAY(100) SS_LSFT(SS_TAP(X_LBRC)) SS_DELAY(100) SS_LSFT(SS_TAP(X_RBRC)) SS_DELAY(100) SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_BSLS)));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLS)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[38];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case SINGLE_HOLD: register_code16(KC_TILD); break;
        case DOUBLE_TAP: register_code16(KC_GRAVE); register_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case SINGLE_HOLD: unregister_code16(KC_TILD); break;
        case DOUBLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_EXLM); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_EXLM); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_AT); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_AT); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_HASH); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_HASH); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_DLR); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_DLR); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_PERC); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_PERC); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_V));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_V)); register_code16(LCTL(KC_V));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
    }
    if(state->count > 3) {
        tap_code16(KC_LBRC);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_LBRC); break;
        case SINGLE_HOLD: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_LBRC); register_code16(KC_LBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LBRC); register_code16(KC_LBRC);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_LBRC); break;
        case SINGLE_HOLD: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_LBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LBRC); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_TAP: register_code16(KC_SPACE); register_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_CIRC); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_CIRC); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_AMPR); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_AMPR); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_ASTR); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_ASTR); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case SINGLE_HOLD: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_9); register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case SINGLE_HOLD: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case SINGLE_HOLD: register_code16(KC_RPRN); break;
        case DOUBLE_TAP: register_code16(KC_0); register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case SINGLE_HOLD: unregister_code16(KC_RPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_EQUAL); break;
        case SINGLE_HOLD: register_code16(KC_PLUS); break;
        case DOUBLE_TAP: register_code16(KC_EQUAL); register_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EQUAL); register_code16(KC_EQUAL);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_EQUAL); break;
        case SINGLE_HOLD: unregister_code16(KC_PLUS); break;
        case DOUBLE_TAP: unregister_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EQUAL); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
    }
    if(state->count > 3) {
        tap_code16(KC_SCLN);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_SCLN); break;
        case SINGLE_HOLD: register_code16(KC_COLN); break;
        case DOUBLE_TAP: register_code16(KC_SCLN); register_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SCLN); register_code16(KC_SCLN);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_SCLN); break;
        case SINGLE_HOLD: unregister_code16(KC_COLN); break;
        case DOUBLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SCLN); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSLS);
        tap_code16(KC_BSLS);
        tap_code16(KC_BSLS);
    }
    if(state->count > 3) {
        tap_code16(KC_BSLS);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_BSLS); break;
        case SINGLE_HOLD: register_code16(KC_PIPE); break;
        case DOUBLE_TAP: register_code16(KC_BSLS); register_code16(KC_BSLS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSLS); register_code16(KC_BSLS);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_BSLS); break;
        case SINGLE_HOLD: unregister_code16(KC_PIPE); break;
        case DOUBLE_TAP: unregister_code16(KC_BSLS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSLS); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RBRC);
        tap_code16(KC_RBRC);
        tap_code16(KC_RBRC);
    }
    if(state->count > 3) {
        tap_code16(KC_RBRC);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_RBRC); break;
        case SINGLE_HOLD: register_code16(KC_RCBR); break;
        case DOUBLE_TAP: register_code16(KC_RBRC); register_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RBRC); register_code16(KC_RBRC);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_RBRC); break;
        case SINGLE_HOLD: unregister_code16(KC_RCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RBRC); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
    }
    if(state->count > 3) {
        tap_code16(KC_QUOTE);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_QUOTE); break;
        case SINGLE_HOLD: register_code16(KC_DQUO); break;
        case DOUBLE_TAP: register_code16(KC_QUOTE); register_code16(KC_QUOTE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_QUOTE); register_code16(KC_QUOTE);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_QUOTE); break;
        case SINGLE_HOLD: unregister_code16(KC_DQUO); break;
        case DOUBLE_TAP: unregister_code16(KC_QUOTE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_QUOTE); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case SINGLE_HOLD: register_code16(KC_LABK); break;
        case DOUBLE_TAP: register_code16(KC_COMMA); register_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case SINGLE_HOLD: unregister_code16(KC_LABK); break;
        case DOUBLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(KC_RABK); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(KC_RABK); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_SLASH);
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_SLASH); break;
        case SINGLE_HOLD: register_code16(KC_QUES); break;
        case DOUBLE_TAP: register_code16(KC_SLASH); register_code16(KC_SLASH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_SLASH); break;
        case SINGLE_HOLD: unregister_code16(KC_QUES); break;
        case DOUBLE_TAP: unregister_code16(KC_SLASH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
    }
    if(state->count > 3) {
        tap_code16(KC_SCLN);
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_SCLN); break;
        case SINGLE_HOLD: register_code16(KC_COLN); break;
        case DOUBLE_TAP: register_code16(KC_SCLN); register_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SCLN); register_code16(KC_SCLN);
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_SCLN); break;
        case SINGLE_HOLD: unregister_code16(KC_COLN); break;
        case DOUBLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SCLN); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DLR);
        tap_code16(KC_DLR);
        tap_code16(KC_DLR);
    }
    if(state->count > 3) {
        tap_code16(KC_DLR);
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_DLR); break;
        case SINGLE_HOLD: register_code16(RALT(KC_5)); break;
        case DOUBLE_TAP: register_code16(KC_DLR); register_code16(KC_DLR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DLR); register_code16(KC_DLR);
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_DLR); break;
        case SINGLE_HOLD: unregister_code16(RALT(KC_5)); break;
        case DOUBLE_TAP: unregister_code16(KC_DLR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DLR); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RABK);
        tap_code16(KC_RABK);
        tap_code16(KC_RABK);
    }
    if(state->count > 3) {
        tap_code16(KC_RABK);
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_RABK); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(KC_RABK); register_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RABK); register_code16(KC_RABK);
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_RABK); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RABK); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F13);
        tap_code16(KC_F13);
        tap_code16(KC_F13);
    }
    if(state->count > 3) {
        tap_code16(KC_F13);
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_F13); break;
        case SINGLE_HOLD: register_code16(KC_F24); break;
        case DOUBLE_TAP: register_code16(KC_F13); register_code16(KC_F13); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F13); register_code16(KC_F13);
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_F13); break;
        case SINGLE_HOLD: unregister_code16(KC_F24); break;
        case DOUBLE_TAP: unregister_code16(KC_F13); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F13); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F14);
        tap_code16(KC_F14);
        tap_code16(KC_F14);
    }
    if(state->count > 3) {
        tap_code16(KC_F14);
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(KC_F14); break;
        case SINGLE_HOLD: register_code16(KC_F23); break;
        case DOUBLE_TAP: register_code16(KC_F14); register_code16(KC_F14); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F14); register_code16(KC_F14);
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(KC_F14); break;
        case SINGLE_HOLD: unregister_code16(KC_F23); break;
        case DOUBLE_TAP: unregister_code16(KC_F14); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F14); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F15);
        tap_code16(KC_F15);
        tap_code16(KC_F15);
    }
    if(state->count > 3) {
        tap_code16(KC_F15);
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_F15); break;
        case SINGLE_HOLD: register_code16(KC_F22); break;
        case DOUBLE_TAP: register_code16(KC_F15); register_code16(KC_F15); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F15); register_code16(KC_F15);
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_F15); break;
        case SINGLE_HOLD: unregister_code16(KC_F22); break;
        case DOUBLE_TAP: unregister_code16(KC_F15); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F15); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(tap_dance_state_t *state, void *user_data);
void dance_28_finished(tap_dance_state_t *state, void *user_data);
void dance_28_reset(tap_dance_state_t *state, void *user_data);

void on_dance_28(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F16);
        tap_code16(KC_F16);
        tap_code16(KC_F16);
    }
    if(state->count > 3) {
        tap_code16(KC_F16);
    }
}

void dance_28_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(KC_F16); break;
        case SINGLE_HOLD: register_code16(KC_F21); break;
        case DOUBLE_TAP: register_code16(KC_F16); register_code16(KC_F16); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F16); register_code16(KC_F16);
    }
}

void dance_28_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(KC_F16); break;
        case SINGLE_HOLD: unregister_code16(KC_F21); break;
        case DOUBLE_TAP: unregister_code16(KC_F16); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F16); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(tap_dance_state_t *state, void *user_data);
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void on_dance_29(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F17);
        tap_code16(KC_F17);
        tap_code16(KC_F17);
    }
    if(state->count > 3) {
        tap_code16(KC_F17);
    }
}

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(KC_F17); break;
        case SINGLE_HOLD: register_code16(KC_F20); break;
        case DOUBLE_TAP: register_code16(KC_F17); register_code16(KC_F17); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F17); register_code16(KC_F17);
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(KC_F17); break;
        case SINGLE_HOLD: unregister_code16(KC_F20); break;
        case DOUBLE_TAP: unregister_code16(KC_F17); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F17); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(tap_dance_state_t *state, void *user_data);
void dance_30_finished(tap_dance_state_t *state, void *user_data);
void dance_30_reset(tap_dance_state_t *state, void *user_data);

void on_dance_30(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F18);
        tap_code16(KC_F18);
        tap_code16(KC_F18);
    }
    if(state->count > 3) {
        tap_code16(KC_F18);
    }
}

void dance_30_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(KC_F18); break;
        case SINGLE_HOLD: register_code16(KC_F19); break;
        case DOUBLE_TAP: register_code16(KC_F18); register_code16(KC_F18); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F18); register_code16(KC_F18);
    }
}

void dance_30_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(KC_F18); break;
        case SINGLE_HOLD: unregister_code16(KC_F19); break;
        case DOUBLE_TAP: unregister_code16(KC_F18); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F18); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_LBRC)));
        tap_code16(LCTL(LSFT(KC_LBRC)));
        tap_code16(LCTL(LSFT(KC_LBRC)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_LBRC)));
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_LBRC))); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_LEFT))); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_LBRC))); register_code16(LCTL(LSFT(KC_LBRC))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_LBRC))); register_code16(LCTL(LSFT(KC_LBRC)));
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_LBRC))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_LEFT))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_LBRC))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_LBRC))); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(tap_dance_state_t *state, void *user_data);
void dance_32_finished(tap_dance_state_t *state, void *user_data);
void dance_32_reset(tap_dance_state_t *state, void *user_data);

void on_dance_32(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_ENTER)));
        tap_code16(LCTL(LSFT(KC_ENTER)));
        tap_code16(LCTL(LSFT(KC_ENTER)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_ENTER)));
    }
}

void dance_32_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_ENTER))); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_ENTER))); register_code16(LCTL(LSFT(KC_ENTER))); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(LSFT(KC_T)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_ENTER))); register_code16(LCTL(LSFT(KC_ENTER)));
    }
}

void dance_32_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_ENTER))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_ENTER))); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(LSFT(KC_T)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_ENTER))); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(tap_dance_state_t *state, void *user_data);
void dance_33_finished(tap_dance_state_t *state, void *user_data);
void dance_33_reset(tap_dance_state_t *state, void *user_data);

void on_dance_33(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_RBRC)));
        tap_code16(LCTL(LSFT(KC_RBRC)));
        tap_code16(LCTL(LSFT(KC_RBRC)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_RBRC)));
    }
}

void dance_33_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_RBRC))); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_RIGHT))); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_RBRC))); register_code16(LCTL(LSFT(KC_RBRC))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_RBRC))); register_code16(LCTL(LSFT(KC_RBRC)));
    }
}

void dance_33_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_RBRC))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_RIGHT))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_RBRC))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_RBRC))); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(tap_dance_state_t *state, void *user_data);
void dance_34_finished(tap_dance_state_t *state, void *user_data);
void dance_34_reset(tap_dance_state_t *state, void *user_data);

void on_dance_34(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_J));
        tap_code16(LGUI(KC_J));
        tap_code16(LGUI(KC_J));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_J));
    }
}

void dance_34_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_J)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_J))); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_J)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_J)); register_code16(LGUI(KC_J));
    }
}

void dance_34_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_J)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_J))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_J)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_J)); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(tap_dance_state_t *state, void *user_data);
void dance_35_finished(tap_dance_state_t *state, void *user_data);
void dance_35_reset(tap_dance_state_t *state, void *user_data);

void on_dance_35(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LGUI(KC_I)));
        tap_code16(LCTL(LGUI(KC_I)));
        tap_code16(LCTL(LGUI(KC_I)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LGUI(KC_I)));
    }
}

void dance_35_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(LCTL(LGUI(KC_I))); break;
        case SINGLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_I)))); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(KC_I))); register_code16(LCTL(LGUI(KC_I))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LGUI(KC_I))); register_code16(LCTL(LGUI(KC_I)));
    }
}

void dance_35_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LGUI(KC_I))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_I)))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(KC_I))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LGUI(KC_I))); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(tap_dance_state_t *state, void *user_data);
void dance_36_finished(tap_dance_state_t *state, void *user_data);
void dance_36_reset(tap_dance_state_t *state, void *user_data);

void on_dance_36(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_C)));
        tap_code16(LGUI(LSFT(KC_C)));
        tap_code16(LGUI(LSFT(KC_C)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_C)));
    }
}

void dance_36_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_C))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_R))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_C))); register_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_C))); register_code16(LGUI(LSFT(KC_C)));
    }
}

void dance_36_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_R))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(tap_dance_state_t *state, void *user_data);
void dance_37_finished(tap_dance_state_t *state, void *user_data);
void dance_37_reset(tap_dance_state_t *state, void *user_data);

void on_dance_37(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_PGDN));
        tap_code16(LGUI(KC_PGDN));
        tap_code16(LGUI(KC_PGDN));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_PGDN));
    }
}

void dance_37_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_PGDN)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_PGDN))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_PGDN)); register_code16(LGUI(KC_PGDN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_PGDN)); register_code16(LGUI(KC_PGDN));
    }
}

void dance_37_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_PGDN)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_PGDN))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_PGDN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_PGDN)); break;
    }
    dance_state[37].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
};
