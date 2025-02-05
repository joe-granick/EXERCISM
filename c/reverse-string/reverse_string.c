#include "reverse_string.h"
#include <string.h>
#include <stdlib.h>

char *reverse(const char *value){
  size_t len = strlen(value);
  char* rev = calloc(len+1, sizeof(char));
  rev[len] = '\0';
  for(size_t i = 0; i < len; i++)
  {
    rev[i] = value[len-i-1];
  }

  return rev;
  }



