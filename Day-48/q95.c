// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1), len2 = strlen(str2);
    if(len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    char temp[2000];
    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}