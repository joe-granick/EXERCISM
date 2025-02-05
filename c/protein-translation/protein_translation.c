#include "protein_translation.h"
#include <stdlib.h>
#include <string.h>

proteins_t proteins(const char *const rna){
  proteins_t prot;
  prot.count = 0;
  prot.valid = false;
  if(rna[0] == '\0'){prot.valid = true; return prot;}
  
  for (size_t i = 0; rna[i] != '\0' && rna[i+2] != '\0'; i += 3) {
        char *codon = malloc(4);
        codon[0] = rna[i]; 
        codon[1] = rna[i+1]; 
        codon[2] = rna[i+2];
        codon[3] = '\0';
  
  if(check_codon(codon, "UAA") || check_codon(codon, "UAG") || check_codon(codon, "UGA"))
    {prot.valid = true; free(codon); return prot;}
  
  if(check_codon(codon, "AUG")){
    prot.proteins[prot.count++] = Methionine;
    free(codon);
    continue;}
  
  else if(check_codon(codon, "UUU") || check_codon(codon, "UUC") ){
    prot.proteins[prot.count++] = Phenylalanine;
    free(codon);
    continue;}
  
  else if(check_codon(codon, "UUA") || check_codon(codon, "UUG")){
    prot.proteins[prot.count++] = Leucine;
    free(codon);
    continue;}
  
  else if(check_codon(codon, "UCU") || check_codon(codon, "UCC") || check_codon(codon, "UCA") || check_codon(codon, "UCG")){
    prot.proteins[prot.count++] = Serine;
    free(codon);
    continue;}
  
  else if(check_codon(codon, "UAU") || check_codon(codon, "UAC") ){
    prot.proteins[prot.count++] = Tyrosine;
    free(codon);
    continue;}
  
  else if(check_codon(codon, "UGU") || check_codon(codon, "UGC")){
    prot.proteins[prot.count++] = Cysteine;
    free(codon);
    continue;}
  
  else if(check_codon(codon, "UGG")){
    prot.proteins[prot.count++]= Tryptophan;
    free(codon);
    continue;}
    else{
      free(codon);
      return prot;
    }
    free(codon);
  }
  if(prot.count > 0){prot.valid = true;}
  //else{prot.valid = false;}
  return prot;
}

bool check_codon(char *codon, const char *protein){
    if(codon[0] == protein[0] && codon[1] == protein[1] && codon[2] == protein[2]){return true;}

  return false;
  

}






