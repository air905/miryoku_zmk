// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE                             \
  &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT, \
    &kp A,     &kp R,     &kp S,    &kp T,    &kp G,             &kp M,             &kp N,    &kp E,    &kp I,     &kp O, \
  &kp Z,       &kp X,     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,   &kp SLASH, \
    U_NP,              U_NP,              &to U_MOUSE,  &kp SPACE,   &kp ESC,  &sk LSHIFT,   &key_repeat,  &kp BACKSPACE,  U_NP,              U_NP


/* #define MIRYOKU_LAYER_STENO                                              \ */
/*   &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT, \ */
/*     &kp A,     &kp R,     &kp S,    &kp T,    &kp G,             &kp M,             &kp N,    &kp E,    &kp I,     &kp O, \ */
/*     &kp LALT,       &kp LGUI,     &kp LCTRL,             &kp LSHIFT,             &kp V,             &kp K,             &kp LSHIFT,             &kp RCTRL,         &kp RGUI,   &kp RALT, \ */
/*     U_NP,              U_NP,              &kp ESC,  &kp SPACE,   &kp TAB,  &kp RET,   &kp BSPC,  &kp DEL,  U_NP,              U_NP */


#define MIRYOKU_LAYER_TAP       \
  &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT, \
    &kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O, \
      &kp LALT,       &kp LGUI,     &kp LCTRL,             &kp LSHIFT,             &kp V,             &kp K,             &kp LSHIFT,             &kp RCTRL,         &kp RGUI,   &kp RALT, \
    U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_LAYER_MOUSE                                      \
  U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND, \
    &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &to U_TAP,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R, \
    U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R, \
    U_NP,              U_NP,              U_NA,              &to U_BASE,              U_NA,              U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP


#define MIRYOKU_LAYER_NAV                                        \
  U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND, \
    &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT, \
    U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END, \
    U_NP,              U_NP,              U_NA,              &to U_BASE,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_LAYER_MEDIA                                             \
  U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI, \
    &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT, \
    U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3, \
    U_NP,              U_NP,              U_NA,              &to U_BASE,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_SYM                                               \
  &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, \
    &kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI, \
    &kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA, \
    U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              &to U_BASE,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN                                               \
  &kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, \
    &kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI, \
    &kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA, \
    U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              &to U_BASE,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM                                               \
  &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, \
    &kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI, \
    &kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA, \
    U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              &to U_BASE,              U_NA,              U_NP,              U_NP


/* #define MIRYOKU_LAYER_LIST                      \ */
/*   MIRYOKU_X(BASE,   "Base")                     \ */
/*   MIRYOKU_X(EXTRA,  "Extra")                  \ */
/*   MIRYOKU_X(TAP,    "Tap")                    \ */
/*   MIRYOKU_X(BUTTON, "Button")                 \ */
/*   MIRYOKU_X(NAV,    "Nav")                    \ */
/*   MIRYOKU_X(MOUSE,  "Mouse")                  \ */
/*   MIRYOKU_X(MEDIA,  "Media")                  \ */
/*   MIRYOKU_X(NUM,    "Num")                    \ */
/*   MIRYOKU_X(SYM,    "Sym")                    \ */
/*   MIRYOKU_X(FUN,    "Fun")                    \ */
/*   MIRYOKU_X(STENO,  "Steno") */

/* #define U_BASE   0 */
/* #define U_EXTRA  1 */
/* #define U_TAP    2 */
/* #define U_BUTTON 3 */
/* #define U_NAV    4 */
/* #define U_MOUSE  5 */
/* #define U_MEDIA  6 */
/* #define U_NUM    7 */
/* #define U_SYM    8 */
/* #define U_FUN    9 */
/* #define U_STENO  10 */
