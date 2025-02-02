#include "sum_of_multiples.h"


unsigned int sum(const unsigned int *factors, const size_t number_of_factors,const unsigned int limit)
{
  size_t count = 0;
  for (size_t i = 0; i < number_of_factors; i++)
  {
    if (factors[i] == 0){continue;}
    for(unsigned int m =1; m*factors[i] < limit; m++)
    {count++;}
  }
 if(count == 0){return 0;} 

 unsigned int a[count];
 size_t index = 0;
 for(size_t i = 0; i < number_of_factors; i++)
  {
    if(factors[i] == 0){continue;}
    for(unsigned int m = 1; m*factors[i] < limit; m++)
    {a[index++] = m*factors[i];}
  }
  
  size_t r = count-1;
  size_t l = 0;
  mergesort(a, l,  r);

  unsigned int sum = a[0];
  for(size_t k = 1; k<count; k++ )
  {if(a[k] != a[k-1]){sum+=a[k];}}

  return sum;
}

/*
void mergeAB(unsigned int *c, unsigned int *a, size_t N, unsigned int *b, size_t M)
{
  size_t i, j, k;
  for (i = 0, j = 0; k< N+M, k++)
  {
    if(i==N){c[k] = b[j++]; continue;}
    if(j==M){c[k] = a[i++]; continue;}
    c[k] = (a[i] < b[j]) ? a[i++] : b[j++];
  }
}
*/
/*
void merge_sortAB
{
  merge_sortAB();
  merge_sortAB();
  mergeAB();
}
*/

void merge(unsigned int *a, size_t l, size_t m, size_t r)
{
  size_t n1 = m - l + 1;
  size_t n2 = r - m;
    
  unsigned int L[n1];
  unsigned int R[n2];
  for(size_t i = 0; i < n1; i++)
  {
    L[i] = a[l+i];
  }

  for(size_t j = 0; j < n2; j++)
  {
    R[j] = a[m+j+1];
  }

  size_t i=0, j=0, k=l;
  while(i < n1 && j < n2)
  {
    if(L[i]<R[j]){a[k++]=L[i++];}
    else{a[k++]=R[j++];}
  }
  while(i < n1){a[k++] = L[i++];}
  
  while(j<n2){a[k++] = R[j++];}
}

void mergesort(unsigned int *a, size_t l, size_t r)
{
  size_t m = (r+l)/2;
  if (r <= l) return;
  mergesort(a, l, m);
  mergesort(a, m+1,r);
  merge(a,l,m,r);
}
