#include "keymap_common.h"

/*
 * All layers keymap definition. Fn actions are defined in fn_actions.
 */
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

  /* Keymap 0: Default Layer
   * ,-----------------------------------------------------------.
   * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space             |Fn0 |Ctrl |Alt |Fn1|
   * `-----------------------------------------------------------'
   */
  KEYMAP_ANSI(
      GRV,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
      TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
      CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
      LSFT,      Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT, \
      LCTL, LGUI,LALT,          SPC,                     FN0, RCTL,RALT,FN1
      ),

  /* Keymap 1: Fn0 Layer
   * ,-----------------------------------------------------------.
   * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
   * |-----------------------------------------------------------|
   * |     |Hom|Up |End|   |   |Cal|   |Ins|   |Psc|PgU|PgD|     |
   * |-----------------------------------------------------------|
   * |      |Lef|Dow|Rig|   |VoD|VoU|Mut|   |   |Hom|End|        |
   * |-----------------------------------------------------------|
   * |        |Ply|Prv|Nxt|Stp|LeU|LeD|LeO|Mut|   |   |      |   |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  KEYMAP_ANSI(
      ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
      NO,  HOME,UP,  END, NO,  NO,  CALC,NO,  INS, NO,  PSCR,PGUP,PGDN,NO,   \
      NO,  LEFT,DOWN,RGHT,NO,  VOLD,VOLU,MUTE,NO,  NO,  HOME,END,      NO,   \
      TRNS,     MPLY,MPRV,MNXT,MSTP,FN4, FN5, FN6, NO,  NO,  NO,       NO,   \
      TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS
      ),

  /* Keymap 2: Gaming Layer, same as default layer but with ESC swapped with GRV.
   * ,-----------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space             |Fn2 |Ctrl |Alt |Fn3|
   * `-----------------------------------------------------------'
   */
  KEYMAP_ANSI(
      ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
      TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
      CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
      LSFT,      Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT, \
      LCTL, LGUI,LALT,          SPC,                     FN2, RCTL,RALT,FN3
      ),

  /* Keymap 3: Fn2 Layer, Fn Layer for Gaming Layer. This layer is required because
   * for ACTION_LAYER_MOMENTARY you can only move to a layer higher than your current
   * one. Could be I did something wrong, or there are some subtle caveats that I
   * missed.
   * ,-----------------------------------------------------------.
   * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
   * |-----------------------------------------------------------|
   * |     |Hom|Up |End|   |   |Cal|   |Ins|   |Psc|PgU|PgD|     |
   * |-----------------------------------------------------------|
   * |      |Lef|Dow|Rig|   |VoD|VoU|Mut|   |   |Hom|End|        |
   * |-----------------------------------------------------------|
   * |        |Ply|Prv|Nxt|Stp|LeU|LeD|LeO|Mut|   |   |      |   |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  KEYMAP_ANSI(
      GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
      NO,  HOME,UP,  END, NO,  NO,  CALC,NO,  INS, NO,  PSCR,PGUP,PGDN,NO,   \
      NO,  LEFT,DOWN,RGHT,NO,  VOLD,VOLU,MUTE,NO,  NO,  HOME,END,      NO,   \
      TRNS,     MPLY,MPRV,MNXT,MSTP,FN4, FN5, FN6, NO,  NO,  NO,       NO,   \
      TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS
      ),
};

/*
 * Fn action definition
 */
const uint16_t fn_actions[] PROGMEM = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_DEFAULT_LAYER_SET(2),
  [2] = ACTION_LAYER_MOMENTARY(3),
  [3] = ACTION_DEFAULT_LAYER_SET(0),
  [4] = ACTION_BACKLIGHT_INCREASE(),
  [5] = ACTION_BACKLIGHT_DECREASE(),
  [6] = ACTION_BACKLIGHT_TOGGLE(),
};
