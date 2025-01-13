char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0 || strlen(strs[0]) == 0)
        return "";

    // Reference the first string for comparison
    char* reference = strs[0];
    int i = 0;
    int j = 0;

    while (reference[i] != '\0')
    {
        while( j < strsSize)
        {
                if (strs[j][i] != reference[i] || strs[j][i] == '\0')
                {
                // if the chars are diffrent terminate the refrence and return it 
                reference[i] = '\0';
                return reference;
                }
            j++;   
        }
        i++;
        j = 0;
    }
return reference;            
}
    