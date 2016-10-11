#include "fortyeight.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: Base
   * ,-----------------------------------------------------------.
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Bspc|
   * |-----------------------------------------------------------|
   * |Esc  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|    Enter|
   * |-----------------------------------------------------------|
   * |Shift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|    /|  -|    =|
   * |-----------------------------------------------------------|
   * |Ctrl | Gui| Alt|         Space         | Fn0| Fn1| Fn2| Fn3|
   * `-----------------------------------------------------------'
   */
[0] = KEYMAP(
  TAB,  Q,  W,  E,  R,  T,  Y,  U,  I,  O,  P, LBRC,  RBRC, BSPC, \
  ESC,  A,  S,  D,  F,  G,  H,  J,  K,  L,  SCLN,  QUOT,  ENTER, \
  LSFT,  Z,  X, C,  V,  B,  N,  M, COMMA,  DOT,  SLASH,  MINS,  EQL, \
  LCTL,  LGUI,  LALT, SPC,  FN0, FN1, FN2, FN3 \
),

  /* 1: Fn0
   * ,-----------------------------------------------------------.
   * |~    |  !|  @|  #|  $|  %|  ^|  &|  *|  (|  )|  _|  +| Del |
   * |-----------------------------------------------------------|
   * |`    |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ||         |
   * |-----------------------------------------------------------|
   * |Trans  |   |   |   |   |   |   |   |   |   |    \|    |    |
   * |-----------------------------------------------------------|
   * |Trns |Trns|Trns|          Trans        |Trns|Trns|Trns|Trns|
   * `-----------------------------------------------------------'
   */
[1] = KEYMAP(
  TILD, EXLM,  AT,  HASH,  DLR,  PERC,  CIRC,  AMPR,  ASTR,  LPRN,  RPRN,  UNDS, PLUS, DEL, \
  GRV,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  PIPE,  NO, \
  TRNS, NO, NO, NO, NO, NO, NO, NO, NO, NO, BSLS, NO, NO, \
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS \
),

  /* 2: Fn1
   * ,-----------------------------------------------------------.
   * |     |   | Up|   |   |   |   | F1| F2| F3| F4|   |   |     |
   * |-----------------------------------------------------------|
   * |     |Lef|Dow|Rig|   |   |   | F5| F6| F7| F8|   |         |
   * |-----------------------------------------------------------|
   * |Trans  |   |   |   |   |   |   | F9| F10|F11|  F12|   |    |
   * |-----------------------------------------------------------|
   * |Trns |Trns|Trns|          Trans        |Trns|Trns|Trns|Trns|
   * `-----------------------------------------------------------'
   */
[2] = KEYMAP(
  NO, NO, UP,   NO, NO, NO, NO, F1, F2, F3, F4, NO, NO, NO, \
  NO, LEFT, DOWN, RGHT, NO, NO, NO, F5, F6, F7, F8, NO, NO, \
  TRNS, NO, NO, NO, NO, NO, NO, F9, F10, F11, F12, NO, NO, \
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS \
)
};

const uint16_t PROGMEM fn_actions[] = {
  ACTION_LAYER_MOMENTARY(1),                  // FN0
  ACTION_LAYER_MOMENTARY(2)                  // FN1
};
