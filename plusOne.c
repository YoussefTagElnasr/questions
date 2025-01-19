/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){

    int lastIndex = digitsSize - 1;
    int checker = lastIndex;

    for(checker; checker != -1; checker--)
    {
        if (digits[checker] == 9)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    if (checker == -1)
    {
        *returnSize = digitsSize + 1;
        int* ret = malloc(*returnSize * sizeof(int));
        ret[0] = 1;
        for (int i = 1; i < *returnSize; i++)
        {
            ret[i] = 0;
        }
        
        return ret;
    }

    for (lastIndex; lastIndex != -1; lastIndex--)
    {
        if (digits[lastIndex] != 9)
        {
            digits[lastIndex]++;
            *returnSize = digitsSize;
            int* ret = malloc(digitsSize * sizeof(int));

            for (int i = 0; i < digitsSize; i++)
            {
                ret[i] = digits[i];
            }

            return ret;
        }
        if (digits[lastIndex] = 9)
        {
            digits[lastIndex] = 0;
        }
    }
    
    return NULL;
}