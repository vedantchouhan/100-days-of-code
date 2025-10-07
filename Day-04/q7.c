/*
Q7: Write a program to swap two numbers without using a third variable.

Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter two numbers (e.g., 10 20): ");
   
    scanf("%d %d", &num1, &num2);

    
    num1 = num1 + num2;
    
    num2 = num1 - num2;

    num1 = num1 - num2;

    printf("After swap: %d %d\n", num1, num2);

    return 0;
}
