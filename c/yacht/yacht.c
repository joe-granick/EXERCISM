#include "yacht.h"
#include <stdbool.h>
int score(dice_t dice, category_t category){
  int score = 0;
  int rolls[6];
  for(int i = 0; i < 6; i++)
      {rolls[i] = 0;}
  for(int i = 0; i < 6; i++)
  {
    rolls[dice.faces[i]-1] += 1;
  }
    category_t face;
  switch(category){
    case ONES:
      face = ONES;
      score+=rolls[face-1]*face;
      break;

    case TWOS:
      face = TWOS;
      score+=rolls[face-1]*face;
      break;
    
    case THREES:
      face = THREES;
      score+=rolls[face-1]*face;
      break;
    
    case FOURS:
      face = FOURS;
      score+=rolls[face-1]*face;
      break;

    case FIVES:
      face = FIVES;
      score+=rolls[face-1]*face;
      break;

    case SIXES:
      face = SIXES;
      score+=rolls[face-1]*face;
      break;
    
    case FULL_HOUSE:
      bool three = false;
      bool two = false;
      for(int i = 0; i <6; i++)
      {if(rolls[i]==3) three = true;
      if(rolls[i]==2) two = true;}
      if (two && three) score+=19;
      break;
    
    case FOUR_OF_A_KIND:
      for(int i = 0; i <6; i++)
      {if(rolls[i]==4){score+=16; break;}}
      break;
    
    case LITTLE_STRAIGHT:
      for(int i = 0; i <5; i++)
      {if(rolls[i]!=1) break;}
      score+=30;
      break;
    
    case BIG_STRAIGHT:
      for(int i = 1; i <6; i++)
      {if(rolls[i]!=1) break;}
      score+=30;
      break;
    
    case CHOICE:
      for(int i = 0; i <5; i++)
        score+=dice.faces[i];
      break;

    case YACHT:
      for(int i = 0; i < 6; i++)
        if(rolls[i] == 5){score+=50; break;}
      break;
    
        default:
      score = 0;
      break;
  }
    return score;
}
