char* toLowerCase(char* s) {

        int length = strlen(s);

       for(int i=0; i < length ; i++)
       {
            if( isupper(s[i]))
            s[i]=s[i]+32;
       } 
       return (s);
}