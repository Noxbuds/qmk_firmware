#pragma once

#include "quantum.h"

#define LAYOUT( \
         L01, L02, L03,           R01, R02, R03,      \
    L10, L11, L12, L13, L14, R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24, R20, R21, R22, R23, R24, \
                   L33, L34, R30, R31                 \
) { \
  { L14, L03, L02, L01, L10 }, \
  { L24, L13, L12, L11, L20 }, \
  { L34, L23, L22, L21, L33 }, \
  { R10, R01, R02, R03, R14 }, \
  { R20, R11, R12, R13, R24 }, \
  { R30, R21, R22, R23, R31 }, \
}
