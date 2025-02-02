#include <stdio.h>
#include <math.h>

int isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++){
        if (arr[i] < arr[i - 1])
            return -1;
    }
    return 0; 
}


int mini (int x , int y)
{
    if (x < y)
        return x; 
    else
        return y;    
}


int maxa (int x , int y)
{
    if (x > y)
        return x;
    else
        return y;    
}


int findUnsortedSubarray(int* nums, int numsSize){
    
    if(isSorted(nums , numsSize) == 0)
        return 0;

    if( numsSize == 1)
        return 0;

    int left;
    int right;
    int min = __INT_MAX__;
    int max = pow(-2 , 31);

    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            {
                left = i;
                break;
            }
    }

    for (int i = numsSize - 1; i != 0; i--)
    {
        if (nums[i] < nums[i - 1])
        {
            right = i;
            break;
        }
    }

     int length = right - left + 1;
     int reminder = left;

    while(left <= right)
    {
        min = mini(min , nums[left]);
        max = maxa(max , nums[left]);
        left++;
    }

    left = reminder;

    for (int i = 0; i != left; i++)
    {
        if( min < nums[i])
        {
            length = length + (left - i);
            break;
        }
    }

    for (int i = numsSize - 1; i > right; i--)
    {
        if(max > nums[i])
        {
            length = length + (i - right);
            break;
        }
    }

    return length;
}
