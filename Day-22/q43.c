/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

// Function to calculate the factorial of a digit (n!)
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, temp_n, digit;
    long long sum_of_factorials = 0;

    printf("Enter a positive integer:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    temp_n = n;

    // Separate the digits and sum their factorials
    while (temp_n > 0) {
        digit = temp_n % 10;
        sum_of_factorials += factorial(digit);
        temp_n /= 10;
    }

    // Check if the sum of factorials equals the original number
    if (sum_of_factorials == n) {
        printf("Output: Strong number\n");
    } else {
        printf("Output: Not strong number\n");
    }

    return 0;
}