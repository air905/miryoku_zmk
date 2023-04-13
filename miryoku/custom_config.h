// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE                             \
  &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT, \
    U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),     U_MT(LSHIFT, T),    &kp G,             &kp M,              U_MT(LSHIFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O), \
    U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
    U_NP,              U_NP,              U_NP, U_LT(U_NAV, SPACE), &lt U_MOUSE TAB,u_lt_shift(U_NUM, LSHIFT),  &key_repeat, U_NP,  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM                                               \
  &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, \
    &kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI, \
    &kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA, \
    U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              &to U_BASE,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM                                               \
  &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, \
    &kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI, \
    &kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA, \
    U_NP,              U_NP,              &kp LPAR,          &kp LPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE                                      \
  &sk LGUI,              &sk LALT,          &sk LCTRL,       &sk LSHIFT,     U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND, \
    &mouse_speed_1,          &mouse_speed_2,          &mouse_speed_3,         &mouse_speed_4,         U_NA,              &to U_TAP,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R, \
    U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R, \
    U_NP,              U_NP,              U_NA,              &to U_BASE,              &to U_BASE,              U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_TAP                                               \
  &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT, \
    &kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O, \
    &kp Z,       &kp X,     &kp C,             &to U_BASE,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,   &kp SLASH, \
    U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
/* #define U_TD_SHIFT &u_td_shift */
#define U_LT_TO(LAYER, TAP) &u_lt_to LAYER TAP

#define U_TAPPING_TERM 150

