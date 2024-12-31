char binarySearch(char arr[], int left, int right, char key) {
    char result = '\0';

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > key ) { 
            result = arr[mid];
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

char nextGreatestLetter(char* letters, int lettersSize, char target) {
    if (target >= letters[lettersSize - 1]) {
        return letters[0];
    }

    char ret = binarySearch(letters, 0, lettersSize - 1, target);

    return ret;
}