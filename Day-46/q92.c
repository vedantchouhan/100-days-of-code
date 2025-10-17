// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int freq[26] = {0}, i = 0;
    char firstRepeat = '\0';

    while(str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if(freq[ch - 'a'] == 2 && firstRepeat == '\0') {
                firstRepeat = ch;
            }
        }
        i++;
    }

    if(firstRepeat != '\0')
        printf("%c", firstRepeat);

    return 0;
}