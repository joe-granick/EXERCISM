#include "scrabble_score.h"
#include <string.h>
#include <ctype.h>

unsigned int score(const char *word){
int i = 0;
int score = 0;
while(word[i]!='\0')
{
  char let = toupper(word[i]);
  if(let == 'Q' || let == 'Z') score+= 10;
  else if(let == 'J' || let == 'X') score+=8;
  else if(let == 'K') score+=5;
  else if(let == 'F' || let == 'H' || let == 'V' || let == 'W' || let == 'Y') score += 4;
  else if(let == 'B' || let == 'C' || let == 'M' || let == 'P')score +=3;
  else if(let == 'D' || let == 'G') score +=2;
  else score +=1;
  i++;
}return score;}
