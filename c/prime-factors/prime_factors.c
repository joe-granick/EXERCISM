#include "prime_factors.h"
size_t find_factors(uint64_t n, uint64_t factors[static MAXFACTORS]){
    int prime = 2;
    size_t i = 0;

    while(n>1)
    if(!(n%prime))
    {
        factors[i] = prime;
        n = n/prime;
        i++;
    }
    else{
        prime++;
    }

    return i;
    
}