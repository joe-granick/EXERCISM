#include "sieve.h"
#include <stdbool.h>
#include <stdlib.h>
  uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes){
  uint32_t *mark = calloc(limit + 1, sizeof(uint32_t));
  uint32_t i = 2;
  uint32_t f;

 mark[0]=1;
 mark[1]=1;
 mark[2]=0;
  while(i*i < limit){
    if(mark[i]==1){i++;continue;}
    f=i;
    while (i*f <= limit){mark[i*f] = 1;f++;}
    i++;}

  uint32_t count = 0;  
  for(uint32_t j = 2; j <= limit && count < max_primes; j++)
    {
      if(mark[j]==0)
      {
        primes[count] = j;
        count++;
      }
    }
  free(mark);
  return count;
}
