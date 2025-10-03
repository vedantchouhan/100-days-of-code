/*
Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int temp; 

    printf("Enter two numbers (e.g., 3 5): ");
    scanf("%d %d", &num1, &num2);

   
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap: %d %d\n", num1, num2);

    return 0;
}
