#include "rna_transcription.h"
#include <stdlib.h>

char *to_rna(const char* dna){
  int l = 1;
  int j =0;
  while(*(dna+j)) {
    l++;
    j++;
  }

  int i = 0;
  char* rna = malloc(l*sizeof(char));
  while(*(dna+i)) {
    switch (*(dna+i)) {
      case 'G':
        *(rna+i) = 'C';
        break;

      case 'C':
        *(rna+i) = 'G';
        break;
      
      case 'T':
        *(rna+i) = 'A';
        break;

      case 'A':
        *(rna+i) = 'U';
        break;
      default :
        break;
    }

    ++i;
  }
  *(rna+i) = '\0';
  return rna;
}
