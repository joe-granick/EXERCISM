#include "all_your_base.h"

size_t rebase(int8_t digits[], int16_t input_base, int16_t output_base, size_t input_length)
{
    int16_t base = input_base;
    int16_t base_10 = 0;
    for(size_t i = 0; i  < input_length; i++){
        base_10+=base*digits[input_length-1-i];
        base*=base;
        
        //10*10 = 100
        //think about how to implement palce tracking for base conversion
    }
    
  size_t count = 0;
  int16_t base_10count = base_10;
  while (base_10count){
    base_10count/=output_base;
    count++;
    
  }

return count;
}
