#include "isogram.h"
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
    if(phrase == NULL)
    {return 0;}
    int alpha[26]={0};
    int i = 0;
    while(phrase[i] != '\0')
    {
        if (isalpha(phrase[i])){
        int ltr = tolower(phrase[i])-'a';
        alpha[ltr]+=1;
        }
        i++;
    }
    for ( int j = 0; j < 26; j++)
    {
        if (alpha[j] > 1)
            return 0;
    }
    return 1;
}