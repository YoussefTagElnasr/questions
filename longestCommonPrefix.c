char* longestCommonPrefix(char** strs, int strsSize)
{
    int j = 0;
    
    if (strsSize == 0 || strlen(strs[0]) == 0)
        return strdup("");

    // Reference the first string for comparison
    char* reference = strs[0];
    int i = 0;

    while (reference[i] != '\0') 
    {
        while ( j < strsSize)
        {
            if (strs[j][i] != reference[i] || strs[j][i] == '\0') {
                // Terminate the prefix at this point
                reference[i] = '\0';
                return reference;
            }
            j++;
        }
         j = 0;
         i++;   
    }
    return reference;    
}

