#include "raindrops.h"
#include <stdio.h>
#include <string.h>


void convert(char result[], int drops) {
  if (!(drops%3)) {
      sprintf(result, "%s", "Pling");
  }

  if(!(drops%5)) {
    sprintf(result, "%s", "Plang");
  }

  if(!(drops%7)) {
    sprintf(result, "%s", "Plong");
  }

  if((drops%3) && (drops%5) && (drops%7)) {
    sprintf(result, "%d", drops);
  }
}
