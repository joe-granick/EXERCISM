#include "luhn.h"
#include <string.h>
#include <ctype.h>
bool luhn(const char *num)
{
  int l = 0;
  int i = 0;
  int sum = 0;
  while (num[i] != '\0'){
    if(!isspace(*(num+i))){
      l++;
      if(!isdigit(num[i]))
      {return false;}
    }
    i++;}
  
    if (l<=1){return false;}
  
  i=0;

  while (num[i] != '\0'){
    if (!isspace(num[i])){
      if (l%2==0){
        int dbl = 2*(num[i]-'0');
        if(dbl>9){dbl = dbl-9;}
        sum+=dbl;}
      if (l%2!=0){sum+=(num[i]-'0');}
      l++;
    }
    i++;  
  }

  if (sum%10 == 0){return true;}

  return false;
}
