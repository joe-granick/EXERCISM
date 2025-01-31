#include "sum_of_multiples.h"


unsigned int sum(const unsigned int *factors, const size_t number_of_factors,const unsigned int limit)
{
  unsigned int m =1;
  unsigned int sum = 0;
  size_t i = 0;
  while(i < number_of_factors)
  {
    unsigned int fac = factors[i];
    while((m*fac) < limit)
    {sum+=(m*fac);m++;}
    i++;
  }
  return sum;
}
