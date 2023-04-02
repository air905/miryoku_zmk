// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_LAYER_MOUSE                                      \
  U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND, \
    &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R, \
    U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R, \
    U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP

#define U_MOUSE_MOVE_MAX 1250
#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_MAX 1
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5
#define U_MOUSE_SCROLL_DELAY 1000

#undef MOVE_UP
#undef MOVE_DOWN
#undef MOVE_LEFT
#undef MOVE_RIGHT
#undef SCROLL_UP
#undef SCROLL_DOWN
#undef SCROLL_LEFT
#undef SCROLL_RIGHT
#define MOVE_UP MOVE_VERT(-U_MOUSE_MOVE_MAX)
#define MOVE_DOWN MOVE_VERT(U_MOUSE_MOVE_MAX)
#define MOVE_LEFT MOVE_HOR(-U_MOUSE_MOVE_MAX)
#define MOVE_RIGHT MOVE_HOR(U_MOUSE_MOVE_MAX)
#define SCROLL_UP SCROLL_VERT(U_MOUSE_SCROLL_MAX)
#define SCROLL_DOWN SCROLL_VERT(-U_MOUSE_SCROLL_MAX)
#define SCROLL_LEFT SCROLL_HOR(-U_MOUSE_SCROLL_MAX)
#define SCROLL_RIGHT SCROLL_HOR(U_MOUSE_SCROLL_MAX)
