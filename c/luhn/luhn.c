#include "luhn.h"
#include <string.h>
bool luhn(const char *num)
{
  int l = 0;
  int i = 0;
  int sum = 0;
  while (*(num+i) != NULL)
  {
    if(*(num+i) != " "){l++;}
    i++;
  }

  i=0;
 

  while (*(num+i) != NULL)
  {

    if (*(num+i))
    {
    
      if (l%2)
      {
        int dbl = 2*(*(num+i));
        if(dbl>9){dbl = dbl-9;}
        sum+=dbl;
      };
    
      if (!l%2){sum+=*(num+i)};

      l++;
    }
    i++;  
  }

  if (sum%10){return false;}

  return true;
}
