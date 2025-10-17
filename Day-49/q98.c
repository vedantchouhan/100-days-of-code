// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0, lastSpace = -1;
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ')
            lastSpace = i;
        i++;
    }

    i = 0;
    while(i < lastSpace) {
        if(i == 0 && str[i] != ' ')
            printf("%c.", toupper(str[i]));
        else if(str[i] == ' ' && str[i+1] != ' ' && i+1 < lastSpace)
            printf("%c.", toupper(str[i+1]));
        i++;
    }

    if(lastSpace != -1)
        printf(" %s", str + lastSpace + 1);

    return 0;
}