#include "nucleotide_count.h"
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

char *count(const char *dna_strand)
{ int A = 0, C =0, G =0, T =0;
size_t i = 0;
char* buffer = malloc(15);
char* def = "";
while(dna_strand[i] != '\0' && dna_strand != NULL){

char nuc = dna_strand[i];
  switch(nuc){
    case 'A':
      A++;
      break;
    case 'C':
      C++;
      break;
    case 'G':
      G++;
      break;
    case 'T':
      T++;
      break;
    case ' ':
      break;
    
    default:
      sprintf(buffer, "%s",def);
      return buffer;
  }
  i++;
}
sprintf(buffer, "A:%d C:%d G:%d T:%d",A ,C ,G ,T );
return buffer;

}
