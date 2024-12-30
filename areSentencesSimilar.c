bool areSentencesSimilar(char* sentence1, char* sentence2) {
    if( strcmp ( sentence1 , sentence2 ) == 0 )
        return true;

    char *small = sentence1;
    char *big = sentence2;

    int sizeOfSmall = strlen(sentence1);
    int sizeOfBig = strlen(sentence2);
    if (sizeOfBig < sizeOfSmall)
    {
        char *tempStr = small;
        small = big;
        big = tempStr;

        int tempSize = sizeOfSmall;
        sizeOfSmall = sizeOfBig;
        sizeOfBig = tempSize;
    }

    int i = 0;
    int lastLeftSpace = 0;

    int lastRightSpace = sizeOfSmall;
    int rightIterSmall = sizeOfSmall - 1;
    int rightIterBig = sizeOfBig - 1;

    while (i < sizeOfSmall && small[i] == big[i])
    {
        if (small[i] == ' ')
            lastLeftSpace = i;
        i++;
    }
    if (small[i] == '\0' && big[i] == ' ')
        return true;

    while (rightIterSmall >= 0 && small[rightIterSmall] == big[rightIterBig])
    {
        if (small[rightIterSmall] == ' ')
            lastRightSpace = rightIterSmall;
        rightIterSmall--;
        rightIterBig--;
    }
    if (rightIterSmall == -1 && big[rightIterBig] == ' ')
        return true;
    if (lastLeftSpace >= lastRightSpace)
        return true;
    return false;
}