#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize)
<<<<<<< HEAD
{ 
    // make the first word our refrence
    char* refrence = strs[0];
    char* ret = (char*)malloc(201);
    int lastIndex = 0;
    int flag = 0;
    int i = 0;
=======
{
>>>>>>> 7a1b17c3ae28c4c64c93a7f31b99870e03a0fc21
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
<<<<<<< HEAD
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


int main()
{
    char* test[] = {"wavojwpzoyihecxgkhtzjhhlcyhesehzmbqjdgbtuexvfojjpeeywncfcyiuxisroaouhfmtqcbypsltyvqxxwvrlfecwaliotzvvmbqudoqbnhvzzoqguteq","wavnuvqjwvbvhdzumdychscrqnkdpqtopiwnvieqieuxrnbnhmrohuivseiwbrgevwazhovhbeptmcq"};
    char* s = longestCommonPrefix(test , 2);
    printf("%c", s[0]);
}
=======
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

>>>>>>> 7a1b17c3ae28c4c64c93a7f31b99870e03a0fc21
