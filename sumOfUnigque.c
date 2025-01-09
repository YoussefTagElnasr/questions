#include <stdio.h>
#include <string.h>

int sumOfUnique(int* nums, int numsSize){

    int sum = 0;
    int numbers[101];
    memset(numbers , 0 , 101*sizeof(int));

    for ( int i = 0; i < numsSize; i++)
    {
        numbers[nums[i]]++;

        if (numbers[nums[i]] == 1)
            sum = sum + nums[i];
        else if( numbers[nums[i]] == 2)
            sum = sum - nums[i];
        else
            continue;
    }
    return sum;
}