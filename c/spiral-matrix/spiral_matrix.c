#include "spiral_matrix.h"
#include <stddef.h>
#include <stdlib.h>
spiral_matrix_t* spiral_matrix_create(size_t n){
  size_t max_j = n;
  size_t max_i = n;
  size_t max_n = (n*n); //finds inner most value
  size_t min_j = 0;
  size_t min_i = 0; 
  size_t i = 0;
  size_t j = 0;
  size_t k = 1;// tracks current value
  
  spiral_matrix_t* spiral = malloc(sizeof(spiral_matrix_t));
  spiral->size = (int)n;
  if(n >0){
  spiral->matrix = malloc(sizeof(int*)*n);
  for(size_t a = 0; a < n; a++){spiral->matrix[a] = malloc(sizeof(int)*n);}
  }else spiral->matrix = NULL;

  while(k < max_n){
      while(j < max_j){
        spiral->matrix[i][j] = k++;
      j++;} max_j--;
    
    while(i < max_i){
      spiral->matrix[i][j] = k++;
      i++;
      }max_i--;
    
    while(i > min_j){
      spiral->matrix[i][j] = k++;
      j--;}min_j++;
  
    while(i > min_i){
      spiral->matrix[i][j] = k++;
      i++;} min_i++;
    }
    return spiral;
  }
void spiral_matrix_destroy(spiral_matrix_t* actual){

  free(actual->matrix);
  free(actual);
}
