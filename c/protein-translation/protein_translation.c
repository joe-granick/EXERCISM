#include "protein_translation.h"
#include <stdlib.h>
#include <string.h>

proteins_t proteins(const char *const rna){
  proteins_t prot;
  prot.valid = true;
  size_t p_index = 0;
  prot.count = 0;
  
  for(size_t i = 0; rna[i+2] != '\0'; i++){
  char* codon = malloc(4);
  codon[0] = rna[i]; codon[1] = rna[i+1]; codon[2] = rna[i+2];
  codon[3] = '\0';
  if(rna == NULL || rna[0] == '\0'){return prot;}
  if(check_codon(codon, "UAA")){prot.valid = true;  return prot;}
  if(check_codon(codon, "UAG")){prot.valid = true;  return prot;}
  if(check_codon(codon, "UGA")){prot.valid = true;  return prot;}
  
  if(check_codon(codon, "AUG")){
    prot.proteins[p_index++] = Methionine;
    prot.valid = true;
    continue;}
  
  if(check_codon(codon, "UUU") || check_codon(codon, "UUC") ){
    prot.proteins[p_index++] = Phenylalanine;
    prot.valid = true;
    continue;}
  
  if(check_codon(codon, "UUA") || check_codon(codon, "UUG")){
    prot.proteins[p_index++] = Leucine;
    prot.valid = true;
    continue;}
  
  if(check_codon(codon, "UCU") || check_codon(codon, "UCC") || check_codon(codon, "UCA") || check_codon(codon, "UCG")){
    prot.proteins[p_index++] = Serine;
    prot.valid = true;
    continue;}
  
  if(check_codon(codon, "UAU") || check_codon(codon, "UAC") ){
    prot.proteins[p_index++] = Tyrosine;
    prot.valid = true;
    continue;}
  
  if(check_codon(codon, "UGU") || check_codon(codon, "UGC")){
    prot.proteins[p_index++] = Cysteine;
    prot.valid = true;
    continue;}
  
  if(check_codon(codon, "UGG")){
    prot.proteins[p_index++] = Tryptophan;
    prot.valid = true;
    continue;}
  
  }
  prot.count = p_index;
  return prot;
}

bool check_codon(char *codon,const char *protein){
  for(int i = 0; i <3; i++)
  {
    if(codon[i] != protein[i]){return false;}
  }

  return true;
  

}

