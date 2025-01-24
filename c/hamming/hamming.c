#include "hamming.h"

int compute(const char *s1, const char *s2) {
  int err=0;
  int l1=0; 
  int l2=0;
  int i =0;
  while(*(s1+i)) {
    l1++;
    i++;
  }
  i=0;

  while(*(s2+i)) {
    l2++;
    i++;}
  if (l1 != l2){return -1;}

  int j=0;
  while (*(s1+j)) {
    if (*(s1+j) != *(s2+j))
    {err++;}
    j++;
  }
  return err;
}
