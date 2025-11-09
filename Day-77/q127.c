/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters 
to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: input.txt not found!");
        return 1;
    }

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Cannot create output.txt!");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("File converted successfully! Output written to output.txt");

    return 0;
}