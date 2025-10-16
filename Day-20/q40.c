/*
Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char binary[MAX_SIZE];
    int length, i;

    printf("Enter a binary number (max %d digits):\n", MAX_SIZE - 1);

    if (scanf("%s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    length = strlen(binary);

    // Find 1's complement by flipping bits
    for (i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else {
            // If it's not '0', we assume it's '1' and flip it to '0'.
            binary[i] = '0';
        }
    }

    printf("Output: %s\n", binary);

    return 0;
}
