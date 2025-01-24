#include "rna_transcription.h"


char *to_rna(const char* dna){
  int i = 0;
  char* rna;
  while(*(dna+i)) {
    switch (*(dna+i)) {
      case 'G':
        *(rna+i) = 'C';
        break;

      case 'G':
        *(rna+i) = 'C';
        break;
      
      case 'C':
        *(rna+i) = 'G';
        break;

      case 'T':
        *(rna+i) = 'A';
        break;
      default :
        break;
    }

    ++i;
  }
  *(rna+i) = '/0';
  return rna;
}
