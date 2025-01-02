#include <stdio.h>
#include <math.h>

int reverse(int x)
{
    int number = x;
    int remainder;
    long reversed = 0;

    while (number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if(reversed < pow(-2 , 31) || reversed > __INT_MAX__ )
        return 0;
    else
        return reversed;   
}