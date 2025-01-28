#include "armstrong_numbers.h"
#include <math.h>
bool is_armstrong_number(int candidate)
{
    int cnt = 0;
    int temp = candidate;
    int armstrong = 0;
    while(temp>0)
    {
        temp/=10;
        cnt++;
    }
    
    temp = candidate;
    for(int i = 0; i < cnt; i++)
    {
        int t = temp%10;
        armstrong += pow(t, cnt);
        temp/=10;
    }

    return (armstrong == candidate);
    
}