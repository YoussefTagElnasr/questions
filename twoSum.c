int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;
    int* ret =  malloc(sizeof(int) * 2);

    for( int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if( nums[i] + nums[j] == target)
            {
               ret[0] = i; ret[1] = j;
               return ret;
            }
        }
    }
    return ret;
}