#include "yacht.h"
#include <stdbool.h>
int score(dice_t dice, category_t category){
  int score = 0;
  int rolls[6];
  for(int i = 0; i < 6; i++)
      {rolls[i] = 0;}

  for(int i = 0; i < 5; i++)
  {rolls[dice.faces[i]-1] += 1;}
    int face = 1;
  switch(category){
    case ONES:
      face = 1;
      score+=rolls[face-1]*face;
      break;

    case TWOS:
      face = 2;
      score+=rolls[face-1]*face;
      break;
    
    case THREES:
      face = 3;
      score+=rolls[face-1]*face;
      break;
    
    case FOURS:
      face = 4;
      score+=rolls[face-1]*face;
      break;

    case FIVES:
      face = 5;
      score+=rolls[face-1]*face;
      break;

    case SIXES:
      face = 6;
      score+=rolls[face-1]*face;
      break;
    
    case FULL_HOUSE:
      bool three = false;
      bool two = false;
      int three_val;
      int two_val;
      for(int i = 0; i <6; i++)
      {if(rolls[i]==3){three = true; three_val=i;}
      if(rolls[i]==2){two = true; two_val=i;}}
      if (two && three){ 
        if (three_val > two_val) score+=16;
        else score+=19;}
      break;
    
    case FOUR_OF_A_KIND:
      for(int i = 0; i <6; i++)
      {if(rolls[i]>=4){score+=4*(i+1); return score;}}
      break;
    
    case LITTLE_STRAIGHT:
      for(int i = 0; i <5; i++)
      {if(rolls[i]!=1) return 0;}
      score+=30;
      break;
    
    case BIG_STRAIGHT:
      for(int i = 1; i <6; i++)
      {if(rolls[i]!=1) return 0;}
      score+=30;
      break;
    
    case CHOICE:
      for(int i = 0; i <5; i++)
        score+=dice.faces[i];
      break;

    case YACHT:
      for(int i = 0; i < 6; i++){
        if(rolls[i] == 5){score+=50; return score;}
      }
      return 0;
      break;
    
    default:
      score = 0;
      break;
  }
    return score;
}
