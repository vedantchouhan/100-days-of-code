/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/



#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, n, count = 0, maxLen = 0;
    scanf("%s", s);
    n = strlen(s);

    for (i = 0; i < n; i++) {
        int freq[256] = {0};
        count = 0;
        for (j = i; j < n; j++) {
            if (freq[(unsigned char)s[j]] == 1)
                break;
            freq[(unsigned char)s[j]] = 1;
            count++;
        }
        if (count > maxLen)
            maxLen = count;
    }

    printf("%d", maxLen);
    return 0;
}