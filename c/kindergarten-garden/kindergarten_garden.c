#include "kindergarten_garden.h"
#include <stddef.h>
plants_t plants(const char *diagram, const char *student){
  size_t inl = (student[0]-'A'); // for use in integer division to find corresponding student index value
  size_t lin = 0; // input line length
  while(diagram[lin] != '\n'){lin++;}
  plants_t stg;
  //plant_t garden[4];
  for(size_t i = inl; i < (inl+2); i++)
  {
      stg.plants[i] = plant(diagram[i]);
      stg.plants[i+2] = plant(diagram[lin+i+1]);
  }
  //stg.plants = garden;
  return stg;
  }


plant_t plant(char a){
  switch(a){
    case 'C':
    return CLOVER;

    case 'G':
    return GRASS;
    
    case 'R':
    return RADISHES;

    default:
    return VIOLETS;
  }
}

