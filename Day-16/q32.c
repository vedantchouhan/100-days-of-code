/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/
#include <stdio.h>

int main() {
    int n, reversed_n = 0, remainder, original_n;

    printf("Enter an integer:\n");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input: Please enter a valid integer.\n");
        return 1;
    }
    
    original_n = n;

    if (n < 0) {
        printf("Output: Not palindrome\n");
        return 0;
    }

    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }

    printf("Output: ");
    
    if (original_n == reversed_n) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}