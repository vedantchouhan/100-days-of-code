// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}