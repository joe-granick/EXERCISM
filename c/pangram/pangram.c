#include "pangram.h"
#include <string.h>
#include <ctype.h>
bool is_pangram(const char* sentence)
{
  if (sentence == NULL)
  {
    return 0;
  }
  char alphabet[26] = {0};
  int i = 0;
  int alpha_index = 0;
  while(sentence[i] != '\0')
  {
    if (isalpha(sentence[i]))
    {
      alpha_index = tolower(sentence[i]) - 'a';
      alphabet[alpha_index] = 1;
    }
    i++;
  }

  for (int j = 0; j < 26; j++)
  {
    if (alphabet[j]==0)
    {return 0;}
  }
 
  return 1;

}
