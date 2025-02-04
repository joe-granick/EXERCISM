#include "rotational_cipher.h"
#include <string.h>
#include <stdlib.h>


char *rotate(const char *text, int shift_key){
  char* cypher = malloc(sizeof(char)*strlen(text));
  for(int i = 0; text[i]!='\0'; i++){
      cypher[i] = ((text[i] -'a')+shift_key)%26 + 'a';
  }
  
  return cypher;
}
