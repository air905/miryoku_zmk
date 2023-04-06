// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE                             \
  &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT, \
    U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),     U_MT(LSHIFT, T),    &kp G,             &kp M,              U_MT(LSHIFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O), \
    U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
    U_NP,              U_NP,              U_NP, U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_NUM, LSHIFT),  &key_repeat, U_NP,  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM                                               \
  &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, \
    &kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI, \
    &kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA, \
    U_NP,              U_NP,              &kp DOT,           &kp MINUS,            &kp N0,         U_NA,              &to U_BASE,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM                                               \
  &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, \
    &kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI, \
    &kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA, \
    U_NP,              U_NP,              &kp LPAR,          &kp UNDER,          &kp RPAR,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP
#define U_TD_SHIFT &u_td_shift

#define U_TAPPING_TERM 150
