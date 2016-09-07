#include "fortyeight.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: Base
   * ,-----------------------------------------------------------.
   * |Esc  |  Q|  w|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Bspc|
   * |-----------------------------------------------------------|
   * |Tab  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|    Enter|
   * |-----------------------------------------------------------|
   * |Shift    |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|   /|Shft|Fn4|
   * |-----------------------------------------------------------'
   * |Ctrl | Gui| Alt|            Space          |Fn0|Fn1|Fn2|Fn3|
   * `-----------------------------------------------------------'
   */
[0] = KEYMAP(
  ESC,  Q,  W,  E,  R,  T,  Y,  U,  I,  O,  P, LBRC,  RBRC, BSPC, \
  TAB,  A,  S,  D,  F,  G,  H,  J,  K,  L,  SCLN,  QUOT,  ENTER, \
  LSFT,  Z,  X, C,  V,  B,  N,  M, COMMA,  DOT,  SLASH,  RSFT,  FN4, \
  LCTL,  LGUI,  LALT, SPC,  FN0, FN1, FN2, FN3 \
),

  /* 1: Fn0
   * ,-----------------------------------------------------------.
   * |~    |  !|  @|  #|  $|  %|  ^|  &|  *|  (|  )|  _|  +| Del |
   * |-----------------------------------------------------------|
   * |`    |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ||         |
   * |-----------------------------------------------------------|
   * |         |   |   |   |   |   |   |   |   |   |    |    |   |
   * |-----------------------------------------------------------'
   * |    |    |     |                           |   |   |   |   |
   * `-----------------------------------------------------------'
   */
[1] = KEYMAP(
  TILD, EXLM,  AT,  HASH,  DLR,  PERC,  CIRC,  AMPR,  ASTR,  LPRN,  RPRN,  UNDS, PLUS, DEL, \
  GRV,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  PIPE,  TRNS, \
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
  TRNS,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS \
),

  /* 2: Fn1
   * ,-----------------------------------------------------------.
   * |     |   | Up|   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |     |Lef|Dow|Rig|   |   |   |   |   |   |   |   |         |
   * |-----------------------------------------------------------|
   * |         |   |   |   |   |   |   |   |   |   |    |    |   |
   * |-----------------------------------------------------------'
   * |    |    |     |                           |   |   |   |   |
   * `-----------------------------------------------------------'
   */
[2] = KEYMAP(
  TRNS, TRNS, UP,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
  TRNS, LEFT, DOWN, RGHT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS \
)
};

const uint16_t PROGMEM fn_actions[] = {
  ACTION_LAYER_MOMENTARY(1),                  // FN0
  ACTION_LAYER_MOMENTARY(2)                  // FN1
};
