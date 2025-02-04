#include "rotational_cipher.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char *rotate(const char *text, int shift_key){
  size_t len = strlen(text);
  char* cypher = malloc(sizeof(char)*(len+1));
  
  if(!cypher){ return NULL;}

  for(size_t i = 0; i <  len; i++){
      if(isalpha(text[i]))
      {
      if(islower(text[i]))
        cypher[i] = ((text[i] - 'a')+shift_key)%26 + 'a';
      else 
        cypher[i] = ((text[i] - 'A')+shift_key)%26 + 'A';
      }
      else{cypher[i] = text[i];}
  }
  cypher[len] = '\0';
  
  return cypher;
}
