// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while(str[i] != '\0' && str[i] != '\n') {
        if(i == 0 && str[i] != ' ')
            printf("%c.", toupper(str[i]));
        else if(str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ')
            printf("%c.", toupper(str[i+1]));
        i++;
    }

    return 0;
}