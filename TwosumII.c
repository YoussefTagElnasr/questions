#include <stdio.h>
#include <stdlib.h>


int binarySearch(int arr[], int left, int right, int key , int number) {
  
    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] + number == key){
            return mid;
        }
        if (arr[mid] + number < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return -1;
}

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){

    int length = *returnSize;
    int* ret = (int*)malloc(length * sizeof(int));
    
    for( int i = 0; i < numbersSize - 1; i++)
    {
        for(int j = i + 1; j < numbersSize; j++)
        {
            if ( binarySearch(numbers , j , numbersSize - 1 , target , numbers[i]) != -1)
            {
                ret[0] = i;
                ret[1] = binarySearch(numbers , j , numbersSize - 1 , target , numbers[i]);
                return ret;
            }
        }
    }    
    return ret;
}

int main ()
{
    int number[] = {1, 3, 4, 5, 6, 7 , 9 , 11 ,12};
    int targer = 18;
    int lenth = 10;
    int ret = 2;
    int* store = twoSum( number , lenth , targer , &ret);
    printf ("%d" , store[0]);
    printf ("%d" , store[1]);
}