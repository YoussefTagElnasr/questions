bool is_sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function to check if array can be sorted as per the conditions
bool canSortArray(int* nums, int numsSize) {
    int i = 0;
    int j;
    int temp;

    // Bubble sort based on the specified condition
    while (i < numsSize) {
        j = 0;
        while (j < numsSize - 1) {
            if (nums[j + 1] < nums[j] && __builtin_popcount(nums[j]) == __builtin_popcount(nums[j + 1])) {
                // Swap elements
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    // Check if the array is sorted after the sorting attempt
    return is_sorted(nums, numsSize);
}