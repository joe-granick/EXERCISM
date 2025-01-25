#include "binary.h"

int convert(const char *input){
    int base = 1;
    int sum = 0;
    int l = 0;
    while(*(input+l))
    {l++;}
    l = l-1;
    while(l>=0)
    {
        if (*(input+l) > '1') return -1;
        if(*(input+l) == '1'){sum += base;}
         base*=2;
         l--;}
    return sum;
}