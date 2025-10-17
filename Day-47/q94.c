// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    char longest[1000] = "", word[1000];
    int i = 0, j = 0;

    while(1) {
        j = 0;
        while(str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        if(j > strlen(longest)) {
            strcpy(longest, word);
        }

        if(str[i] == '\0' || str[i] == '\n')
            break;
        i++;
    }

    printf("%s", longest);
    return 0;
}