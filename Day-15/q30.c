/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main()
{
    int n, reversed_n = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

while (n != 0)
{
   
    remainder = n % 10;
    
   
    reversed_n = reversed_n * 10 + remainder;
    
    
    n /= 10;
}

    printf("%d\n", reversed_n);

    return 0;
}