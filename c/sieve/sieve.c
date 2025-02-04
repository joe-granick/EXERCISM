#include "sieve.h"
#include <stdbool.h>
uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes){
  bool mark[max_primes];
  uint32_t i = 2;
  size_t f = 2;

  for(size_t k = 0; k < max_primes; k++){
    mark[k] = 0;
  }
  
  while (i*f < limit){
    if(mark[i])
    {
      i++;
      f=i;
    }
    else{
      mark[i*f] = 1;
    }
  }
    uint32_t count = 0;
    for(uint32_t j = 2; j <= limit; j++)
    {
      if(!mark[j])
      {
        primes[j-2] = j;
        count++;
      }
    }
  
  return count;
}
