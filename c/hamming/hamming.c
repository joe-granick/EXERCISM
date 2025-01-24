#include "hamming.h"

int compute(char* s1, char* s2) {
  int err=0;
  int l1; int l2;

  while(*(s1++)){l1++;}
  while(*(s2++)){l2++;}
  if (l1 != l2){return ERROR_VALUE;}

  int i=0;
  while (*(s1++)) {
    if (*(s1+i) != *(s2+i)){err++;}
    i++;
  }
  return err;
}
