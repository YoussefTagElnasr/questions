#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int min ( int a , int b)
{
    if ( a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int* shortestToChar(char* s, char c, int* returnSize)
{
    int length = strlen(s);
    *returnSize = length;
    int occurrences[length];
    int* ret = (int*)malloc(length * sizeof(int));
    int lastIndex = 0;
    int smallestDiff = INT_MAX;
    

    for( int i = 0; i < length; i++)
    {
        if (s[i] == c)
        {
            occurrences[lastIndex] = i;
            lastIndex++;
        }
    }

    for( int i = 0; i < length; i++)
    {
        for(int j = 0; j < lastIndex; j++)
        {
            smallestDiff = min(abs(i - occurrences[j]) , smallestDiff);
        }
        ret[i] = smallestDiff;
        smallestDiff = INT_MAX;
    }
    return ret;
}




int main (void)
{

    return 0;
}