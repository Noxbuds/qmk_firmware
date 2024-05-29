#pragma once

//#include "config_common.h"

// 3 rows, 5 cols per side
#define MATRIX_ROWS 6
#define MATRIX_COLS 10

#define MASTER_RIGHT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000

#define SOFT_SERIAL_PIN D3

#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define COMBO_TERM 200

#define TAPPING_TERM 200
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
