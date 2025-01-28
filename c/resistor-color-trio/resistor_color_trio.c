#include "resistor_color_trio.h"
#include <math.h>
#include <stdint.h>
#include <stdio.h>
resistor_value_t color_code(resistor_band_t colors[]){
  resistor_value_t r;
  uint64_t sum = 0;
  sum += (colors[0]*10);
  sum+=(colors[1]);
  int p = pow(10, colors[2]);
  ohms_unit o = 0;
  sum = sum * p;
    while (sum>1000)
    {
      o +=3;
      sum/=1000;
    }
  r.value = sum;
  r.unit = o;
  
  return r;
}

