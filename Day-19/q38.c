/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/
#include <stdio.h>

int main() {
    int n, original_n, sum = 0, digit;

    printf("Enter an integer:\n");

    if (scanf("%d", &n) != 1) {
        printf("Invalid Input: Please enter an integer.\n");
        return 1;
    }
    

    if (n < 0) {
        n = -n;
    }

   
    if (n == 0) {
        sum = 0;
    } else {
       
        while (n > 0) {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
    }

    printf("Output: %d\n", sum);

    return 0;
}
