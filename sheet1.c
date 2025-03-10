// #include <stdio.h>
// q1
// int main(){
//     int num1;
//     int num2;
//     int operation;

//     printf("please enter the two integers\n");
//     scanf("%d" , &num1);
//     scanf("%d" , &num2);

//     printf("please select the operation you want to make\n 1-addition\n 2-substraction\n 3- multiplication\n 4-division\n 5-exit the program");
//     scanf("%d" , &operation);

//     if(operation == 5)
//         return 0;
//     else if(operation == 1)
//         printf("%d" , num1 + num2);
//     else if(operation == 2)
//         printf("%d" , num1 - num2);
//     else if(operation == 3)
//         printf("%d" , num1 * num2);
//     else if(operation == 4 && num2 != 0)
//         printf("%f" , num1 / num2);
//     return 0;
// }


// q2-1
// float clacArea(float height , float base){
//     return 0.5 * height * base;
// }
// int main (void){
//     float area = clacArea(5,4);
//     printf("%0.2f",area);
// }


// q2-2
// int find_greatest(){
//     int a, b, c;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &a, &b, &c);
    
//     int max = a;
//     if (b > max) {
//         max = b;
//     }
//     if (c > max) {
//         max = c;
//     }
//     return max;
// }

// int calculateDifference(int min, int max) {
//     return max - min;
// }

// int main() {
//     int num, min, max, count = 0;

//     printf("Enter 10 integer values:\n");

//     while (count < 10) {
//         printf("Enter a number: ");
//         scanf("%d", &num);

//         if (count == 0) {
//             min = max = num; 
//         } else {
//             if (num < min) {
//                 min = num;
//             }
//             if (num > max) {
//                 max = num;
//             }
//         }
//         count++;
//     }

//     int difference = calculateDifference(min, max);
//     printf("Smallest value: %d\n", min);
//     printf("Greatest value: %d\n", max);
//     printf("Difference: %d\n", difference);

//     return 0;
// }
// int sumNatural(int n) {
//     if (n == 1) {
//         return 1;
//     }
//     return n + sumNatural(n - 1);
// }

// int main() {
//     int n;
    
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
    
//     if (n <= 0) {
//         printf("Please enter a positive integer.\n");
//     } else {
//         printf("Sum of first %d natural numbers is: %d\n", n, sumNatural(n));
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int n , int start){
//     if (n == start)
//         return true;
//     else if(n % start == 0)
//         return false;
     
//     return isPrime(n , start + 1);
// }

// int main (){
//     int start = 2;
//     int number;

//     printf("please enter you nubmer\n");
//     scanf("%d" , &number);
    
//     if (isPrime(number , 2))
//         printf("the number is prime");
//     else
//         printf("the number is not prime");

//     return 0;
// }

//q2-3

// #include <stdio.h>
// #include <stdbool.h>

// int isEven (int n){
//     if(n % 2 == 0)
//         return true;
//     else
//         return false;
// }

//q3-3

// #include <stdio.h>

// void compare (int a , int b){
//     if (a > b)
//         printf("the first number is bigger than the second number");
//     else if ( a < b)
//         printf("the second number is bigger that the first number");
//     else
//         printf("both numbers are equal");
// }
// q3-4
// void find_triangle_type(int a, int b, int c) {
//     if (a + b + c != 180) {
//         printf("Invalid triangle. The sum of angles must be 180 degrees.\n");
//     } else if (a == b && b == c) {
//         printf("Equilateral triangle\n");
//     } else if (a == b || b == c || a == c) {
//         printf("Isosceles triangle\n");
//     } else {
//         printf("Scalene triangle\n");
//     }
// }

// int main() {
//     int angle1, angle2, angle3;
    
//     printf("Enter three angles of the triangle: ");
//     scanf("%d %d %d", &angle1, &angle2, &angle3);
    
//     find_triangle_type(angle1, angle2, angle3);
    
//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     int sum = 0;
//     int number;
//     int remainder;
//     printf("please enter the number: \n");
//     scanf("%d" ,&number);

//     while (number != 0){
//         remainder = number % 10;
//         sum += remainder;
//         number /= 10; 
//     }

//     printf("%d" , sum);
// }


// q7 

// the code given is used to calculate the sum of the numbers between 1 and the number that the 
// user will give it to the program using recursion


// #include <stdio.h>

// int find_greatest(int a, int b, int c) {
//     if (a >= b && a >= c)
//         return a;
//     else if (b >= a && b >= c)
//         return b;
//     else
//         return c;
// }

// int main() {
//     int num1, num2, num3;
//     printf("Enter three integers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     int greatest = find_greatest(num1, num2, num3);
//     printf("The greatest number is: %d\n", greatest);
//     return 0;
// }


#include <stdio.h>

void determine_grade() {
    int score1, score2, score3;
    printf("Enter three scores: ");
    scanf("%d %d %d", &score1, &score2, &score3);

    float average = (score1 + score2 + score3) / 3.0;
    char grade;

    if (average >= 90)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);
}

int main() {
    determine_grade();
    return 0;
}

