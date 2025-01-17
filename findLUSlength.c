#include <stdio.h>
#include <string.h>
#include <math.h>

int findLUSlength(char* a, char* b){
    int lenA = strlen(a);
    int lenB = strlen(b);

    if( lenA > lenB)
        return lenA;
    else if(lenB > lenA)
        return lenB;

        if (lenA == lenB)
        {
            for (int i = 0; i < lenA; i++)
            {
                if(a[i] != b[i])
                {
                    return lenA;
                }
            }
        }
        return -1;        
}
