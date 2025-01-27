#include "high_scores.h"
#include <stdio.h>
#include <string.h>

int32_t latest(const int32_t *scores, size_t scores_len)
{
    return scores[scores_len-1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len)
{
    int32_t best = 0;
    for (size_t i = 0; i < scores_len; i++)
    {
        if(scores[i] > best)
        {best = scores[i];}
    }
    return best;
}

void bub_sort(int32_t *a, size_t scores_len) {
  for (size_t i = 0; i < scores_len-1; i++)
  {
    for (size_t j = 0; j < scores_len-1; j++ ) {
     if (a[j] < a[j+1])
      {
        int32_t temp = a[j]; 
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }

}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output)
{
    size_t cnt = 0;
    int32_t a[scores_len];  // Allocate an array of the same size

    memcpy(a, scores, scores_len * sizeof(int32_t));  // Proper memcpy call

    bub_sort(a, scores_len);  // Sort the copied array

    while (cnt < 3 && cnt < scores_len)
    {
        output[cnt] = a[cnt];  // Get top three scores from sorted array
        cnt++;
    }
    return cnt;
}
