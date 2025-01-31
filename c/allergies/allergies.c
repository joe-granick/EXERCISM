#include "allergies.h"
#include <stdlib.h>

bool is_allergic_to(allergen_t al, int score)
{
  allergen_list_t list = get_allergens(score);

  return list.allergens[al];

}


allergen_list_t get_allergens(int score)
{
  allergen_list_t al_list;
  al_list.count = 0;
  for(int i = 0; i < ALLERGEN_COUNT; i++)
  {al_list.allergens[i] = false;}

  int i = 0x00000001;
  allergen_t include = ALLERGEN_EGGS;
  while(include < ALLERGEN_COUNT){
    
    if(i&score)
    {al_list.allergens[include] = true;}
    else{al_list.allergens[include] = false;}
  
    include+=1;
    i = i << 1;}

  int count = 0;
  for (allergen_t j = ALLERGEN_EGGS; j < ALLERGEN_COUNT; j++)
  {
     if(al_list.allergens[j]){count++;}
  }

  al_list.count = count;

  return al_list;

}
