/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int is_prime = 1;

    printf("Enter an integer:\n");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input: Please enter a valid integer.\n");
        return 1;
    }

    if (n <= 1) {
        is_prime = 0;
    } else if (n == 2) {
        is_prime = 1;
    } else if (n % 2 == 0) {
        is_prime = 0;
    } else {
        
        for (i = 3; i * i <= n; i = i + 2) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    printf("Output: ");
    if (is_prime == 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
