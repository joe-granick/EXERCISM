#include "darts.h"
uint8_t score(coordinate_t landing_position) {
  double x = landing_position.x;
  double y = landing_position.y;
  if ((x*x)+(y*y) <= (1.0F)){return 10;}
  if ((x*x)+(y*y) <= (25.0F)){return 5;}
  if ((x*x)+(y*y) <= (100.0F)){return 1;}
  return 0;
}










