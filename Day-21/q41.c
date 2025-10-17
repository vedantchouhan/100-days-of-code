/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int count_digits(int n) {
    if (n == 0) return 1;
    return floor(log10(n)) + 1;
}

int swap_first_last(int n) {
    int last, first, middle, power;
    int digits;

    if (n < 10 && n >= 0) {
        return n;
    }
    
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n;
    }

    last = n % 10;

    digits = count_digits(n);
    
    power = 1;
    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    first = n / power;

    middle = (n % power) / 10;
    
    int swapped_n = last * power + middle * 10 + first;

    return swapped_n * sign;
}

int main() {
    int input_num;
    int result;

    printf("Enter an integer:\n");
    if (scanf("%d", &input_num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    result = swap_first_last(input_num);

    printf("Output: %d\n", result);

    return 0;
}