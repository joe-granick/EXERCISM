#include "all_your_base.h"

size_t rebase(int8_t digits[], int16_t input_base, int16_t output_base, size_t input_length)
{
    int16_t base = 1;
    int64_t base_10 = 0;
    if(input_base <= 1 || output_base <= 1){digits[0] = 0; return 0;}
    if(input_length == 0){digits[0] = 0; return 0;}
    for(size_t i = 0; i  < input_length; i++){     
      int16_t d = digits[input_length-1-i];
      if(d>=input_base){digits[0] = 0; return 0;}
      if(d<0){digits[0] = 0; return 0;}
      base_10+=base*d;
      base*=input_base;
        
        //10*10 = 100
        //think about how to implement palce tracking for base conversion
    }
  if(base_10 == 0){digits[0] = 0; return 1;}  
  size_t count = 0;
  int64_t base_10count = base_10;
  while (base_10count){
    base_10count/=output_base;
    count++;
    
  }
  
  for(size_t j = 0; j < count; j++)
  {
    digits[count-1-j] = base_10%output_base;
    base_10/=output_base;
  }

return count;
}
