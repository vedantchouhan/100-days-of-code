/*
Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/
#include <stdio.h>

int main() {
    int n1, n2, temp, remainder;

    printf("Enter two integers:\n");
    
    if (scanf("%d %d", &n1, &n2) != 2 || n1 <= 0 || n2 <= 0) {
        printf("Invalid Input: Please enter two positive integers.\n");
        return 1;
    }

    int a = n1;
    int b = n2;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("Output: %d\n", a);

    return 0;
}
