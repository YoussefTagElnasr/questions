void BubbleSort(int a[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}


int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    BubbleSort ( nums1 , nums1Size);
    BubbleSort ( nums2 , nums2Size);


    int counter = 0;

    for ( int i = 0; i <  nums1Size; i++)
    {
        if(nums1[i] == nums2[i])
        {
            counter++;
        }
        else{
            break;
        }
    }

    if ( nums1Size == counter)
    {
        return 0;
    }

    int* BigNumbers = nums1;
    int* SmallNumbers = nums2;

    if ( nums1[0] < nums2[0] )
    {
        int* temp = BigNumbers;
        BigNumbers = nums2;
        SmallNumbers = nums1;
    }

    int x = BigNumbers[0] - SmallNumbers[0];

    if ( BigNumbers == nums1)
    {
        x  = x * -1;
    }

    return x;
}