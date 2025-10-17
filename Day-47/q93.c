// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0;

    while(str1[i] != '\0' && str1[i] != '\n') {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while(str2[i] != '\0' && str2[i] != '\n') {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }

    int isAnagram = 1;
    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}