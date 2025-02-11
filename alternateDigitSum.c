int alternateDigitSum(int n){

    int sum = 0;
    int i = 0;

    while(n != 0){
        if (i % 2 == 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        else
        {
            sum = sum + ((n % 10) * -1);
            n = n / 10;
        } 
        i++;
    }
    return sum;
}