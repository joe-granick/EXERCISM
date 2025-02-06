#include "nth_prime.h"

uint32_t nth(uint32_t n)
{
  if(n == 0) return 0;
  if(n== 1) return 2;
  uint32_t primes = 1;
  uint32_t candidate =2;
  uint32_t next_prime = 2;
  while (primes < n)
  {
    uint32_t i = candidate-1;
    while(i>1){
      if(candidate%i==0){break;}
      if(i == 2){next_prime = candidate; primes++;}
      i--;
    }
    candidate++;

  }
  return next_prime;
}
