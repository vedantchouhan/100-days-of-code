/*
Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character
*/
#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    // Check for Uppercase (ASCII range A-Z)
    if (c >= 'A' && c <= 'Z')
    {
        printf("Uppercase alphabet\n");
    }
    // Check for Digit (ASCII range 0-9)
    else if (c >= '0' && c <= '9')
    {
        printf("Digit\n");
    }
    // Check for Alphabet (ASCII range a-z)
    else if (c >= 'a' && c <= 'z')
    {
        printf("Lowercase alphabet\n");
    }
    // If none of the above, it is a Special character
    else
    {
        printf("Special character\n");
    }

    return 0;
}
