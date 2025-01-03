char* longestCommonPrefix(char** strs, int strsSize)
{ 
    if (strsSize == 0)
    {
        return strdup("");
    }
    // make the first word our refrence
    char* refrence = strs[0];
    char* ret = (char*)malloc(201);
    int lastIndex = 0;
    int flag = 0;
    int i = 0;
    int j = 0;

    while (refrence[i] != '\0')
    {
        while( j < strsSize)
        {
            // if the chars doesnt match close the array and return it 
            if (strs[j][i] != refrence[i] || strs[i][j] == '\0' )
            {
                ret[lastIndex] = '\0';
                return ret;
            }
            // if the char matches the char from the refrence move to the next string
            else if(strs[j][i] == refrence[i])
            {
                j++;
            }
            // if the inner loop breaks then break this one 2
        }
        // if the loop completes begin the begain the search of the second char
        if( j == strsSize)
        {
            ret[lastIndex] = refrence[i];
            lastIndex++;
            i++;
            j = 0;
        }      
    }
        return ret;
}