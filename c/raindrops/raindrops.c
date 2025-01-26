#include "raindrops.h"
#include <stdio.h>
#include <string.h>


void convert(char result[], int drops) {
  if (!(drops%3)) {
    strcat(result, "Pling");
  }

  if(!(drops%5)) {
    strcat(result, "Plang");
  }

  if(!(drops%7)) {
    strcat(result, "Plong");
  }

  if((drops%3) && (drops%5) && (drops%7)) {
    sprintf(result, "%d", drops);
  }
}
