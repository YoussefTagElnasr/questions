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

    *returnSize = 2;
    int length = *returnSize;
    int* ret = (int*)malloc(length * sizeof(int));
    
    for( int i = 0; i < numbersSize - 1; i++)
    {
        int index = binarySearch(numbers , i + 1 , numbersSize - 1 , target , numbers[i]);
        if( index != -1)
        {
            ret[0] = i + 1;
            ret[1] = index + 1;
            return ret;
        }
    }    
    return ret;
}