#include "eliuds_eggs.h"
    unsigned int egg_count(unsigned int i)
    {
        unsigned int count = 0;
        while (i>0)
        {
            if (i%2) {count++;}
            i/=2;
        }
        
        return count;
    }
