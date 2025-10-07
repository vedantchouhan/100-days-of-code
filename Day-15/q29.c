/*
Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main()
{
    int n;
    int i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("%lld\n", factorial);
    }

    return 0;
}
