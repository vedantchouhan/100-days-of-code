/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/
#include <stdio.h>

int main() {
    int n1, n2, max, lcm;

    printf("Enter two integers:\n");
    
    if (scanf("%d %d", &n1, &n2) != 2 || n1 <= 0 || n2 <= 0) {
        printf("Invalid Input: Please enter two positive integers.\n");
        return 1;
    }

    
    max = (n1 > n2) ? n1 : n2;
    lcm = max;

    
    while (1) {
        if (lcm % n1 == 0 && lcm % n2 == 0) {
            printf("Output: %d\n", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
