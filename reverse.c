#include <stdio.h>
#include <math.h>

int reverse(int x)
{
    int number = x;
    int remainder;
    int reversed = 0;

    while (number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if(reversed <  )

    if(number < 0)
       return reversed = reversed * -1;
    else
        return reversed;   
}

int main (void)
{
    int number = 321;

    int reversed = reverse(number);
    printf("%d" , reversed);
}
