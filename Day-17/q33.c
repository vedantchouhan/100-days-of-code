/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original_n, num_digits = 0, sum = 0, remainder;
    
    printf("Enter an integer:\n");

    if (scanf("%d", &n) != 1) {
        printf("Invalid Input: Please enter a valid integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Output: Not Armstrong\n");
        return 0;
    }

    original_n = n;
    
    int temp_n = n;
    while (temp_n != 0) {
        temp_n /= 10;
        num_digits++;
    }

    temp_n = original_n;
    while (temp_n != 0) {
        remainder = temp_n % 10;
        sum += (int)pow(remainder, num_digits); 
        temp_n /= 10;
    }

    printf("Output: ");

    if (original_n == sum) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}