/*
Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int n, i;
    int sum_of_divisors = 0;

    printf("Enter a positive integer:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

  
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;
        }
    }

    
    if (sum_of_divisors == n) {
        printf("Output: Perfect number\n");
    } else {
        printf("Output: Not perfect number\n");
    }

    return 0;
}
