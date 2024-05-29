#pragma once

#include "config_common.h"

// 4 rows, 6 cols per side
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { C6, D7, B6, D4 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2 }
#define MATRIX_COL_PINS_LEFT { B2, B3, B1, F7, F6, F5 }

#define MASTER_RIGHT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000

#define SOFT_SERIAL_PIN D3

#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define COMBO_COUNT 1

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
