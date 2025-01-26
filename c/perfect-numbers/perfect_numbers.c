#include "perfect_numbers.h"

kind classify_number(int n) {
    if (n < 1)
    {return ERROR;}
    int a_sum = aliquot_sum(n);
    if (a_sum == n)
    {return PERFECT_NUMBER;}
    if (n < a_sum)
    {return ABUNDANT_NUMBER;}
    return DEFICIENT_NUMBER;
    
}

int aliquot_sum(int n) {
    int i = 1;
    int sum = 0;
    while (i < n) {
        if (!(n%i)) {sum+=i;}
        i++;
    }
    return sum;
}