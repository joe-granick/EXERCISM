#include "resistor_color_trio.h"
#include <math.h>
#include <stdint.h>
resistor_value_t color_code(resistor_band_t colors[]){
  resistor_value_t r;
  uint16_t sum = 0;
  sum += (colors[0]*10);
  sum+=(colors[1]);
  sum *= pow(10, colors[2]);
  r.value = sum;
  r.unit = (ohms_unit)colors[2];
  
  return r;


}
