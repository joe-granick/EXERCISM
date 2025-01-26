#include "dnd_character.h"
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int ability(void) {
  int min = INT_MAX;
  int sum = 0;
  for (int i = 0; i <4; i++)
  {
    int r = rand()%6 + 1; 
    if ( r < min) min = r;
    sum += r;
  }
  sum = sum - min;
  return sum;
}

int modifier(int score) {
  return floor((double)((score-10.0)/2.0));

}

dnd_character_t make_dnd_character(void) {
  dnd_character_t dndC;
  dndC.strength = ability();
  dndC.dexterity = ability();
  dndC.constitution = ability();
  dndC.intelligence = ability();
  dndC.wisdom = ability();
  dndC.charisma = ability();
  dndC.hitpoints = modifier(dndC.constitution);

  return dndC;


}

