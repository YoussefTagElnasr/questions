#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areTheSame(char first , char second)
{
    if(first == '(' && second == ')')
        return true;
    if(first == '{' && second == '}')
        return true;
    if(first == '[' && second == ']')
        return true;
    else
        return false;
}

bool isValid(char* s) {

    int length = strlen(s);
    char stack[length];
    int lastIndex = -1;

    if(length == 1)
    {
        return false;
    }

    for(int i = 0; i < length; i++)
    {

         if(s[i] == '(' || s[i] == '{' || s[i] == '[')
         {
            lastIndex++;
            stack[lastIndex] = s[i];
         }
         else if (lastIndex == -1 && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            return false;
         else if(areTheSame(stack[lastIndex] , s[i]))
            lastIndex--;
         else
            return false;
    }
    
    if (lastIndex == -1)
        return true;
    else
        return false;      
    
}