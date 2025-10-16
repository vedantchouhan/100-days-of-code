/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/
#include <stdio.h>

int main() {
    int n, digit;
    long long product = 1;

    printf("Enter an integer:\n");

    if (scanf("%d", &n) != 1) {
        printf("Invalid Input: Please enter an integer.\n");
        return 1;
    }
    
    if (n < 0) {
        n = -n;
    }
    
    if (n != 0) {
        while (n > 0) {
            digit = n % 10;
            
            if (digit % 2 != 0) {
                product *= digit;
            }
            
            n /= 10;
        }
    }

    printf("Output: %lld\n", product);

    return 0;
}
