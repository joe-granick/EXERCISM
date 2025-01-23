#include "resistor_color_duo.h"
#include <stdarg.h>

uint16_t color_code(resistor_band_t col[])
{
  return ((col[0]*10) + col[1]);
}
