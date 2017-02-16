#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* 0: qwerty */
    KEYMAP(ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,EQL, BSPC, PSCR,  \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC,RBRC, BSLS, INS,  \
           CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,    ENT, DEL,        \
           LSFT, Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   SLSH,        RSFT, PGUP,             \
           LCTL, FN1, LALT,           SPC,                   RALT,RCTL,RGUI,MENU, PGDN),                \

   /* 1: FN 1 */
    KEYMAP(GRV, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  TRNS, PSCR, \
           TRNS, TRNS, UP, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   TRNS, TRNS, PAUS,  \
           TRNS, LEFT, DOWN, RIGHT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, SLCK, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, HOME, \
           TRNS, TRNS, TRNS,          TRNS,                   TRNS, TRNS, TRNS, TRNS, END),
		   
};
		   
const uint16_t PROGMEM fn_actions[] = {
	  [1] = ACTION_LAYER_MOMENTARY(1)
	  
};
