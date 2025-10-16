/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/
#include <stdio.h>

void print_binary(int n) {
    if (n == 0) {
        return;
    }
    
    print_binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int number;
    
    printf("Enter a non-negative integer:\n");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid Input: Please enter a valid integer.\n");
        return 1;
    }
    
    if (number < 0) {
        printf("Output: Error: Input must be non-negative.\n");
        return 1;
    }
    
    printf("Output: ");
    
    if (number == 0) {
        printf("0");
    } else {
        print_binary(number);
    }
    
    printf("\n");
    
    return 0;
}