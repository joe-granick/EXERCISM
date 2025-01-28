#include "binary_search.h"
const int *binary_search(int value, const int *arr, size_t length)
{
    if (length == 0) // Handle empty array
        return NULL;
    size_t l = 0;
    size_t r = length-1;
    int val_ind = search(value, arr, l, r);
    if (val_ind == -1)
    {return NULL;}
    return &arr[val_ind];
}

int search(int value, const int *arr, size_t l, size_t r)
{   
    if(l > r) {
        return -1;
    }
    int m = l+(r-l)/2;
    if (arr[m] == value)
    {return m;}

    if (arr[m]<value)
    {
        return search(value, arr,m+1, r);
    }

    if (arr[m]> value)
    {
        return search(value,arr,l,m-1);
    }
    return -1;
}