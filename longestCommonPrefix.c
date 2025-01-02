char* longestCommonPrefix(char** strs, int strsSize)
{
    // make the first word our refrence
    char* refrence = strs[0];
    char* ret = malloc(200 * sizeof(char));
    int lastIndex = 0;
    int flag = 0;
    int i = 0;
    int j = 0;

    while (refrence[i] != '\0')
    {
        while( j < strsSize)
        {
            // if the first char doesnt match return emptya array
            if(strs[j][i] != refrence[i] && i == 0)
            {
                strdup("");
            }
            else if (strs[j][i] != refrence[i])
            {
                flag = 1;
                break;
            }
            // if the char matches the char from the refrence move to the next string
            if(strs[j][i] == refrence[i])
            {
                j++;
            }
        }
        if(flag)
        {
            break;
        }
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