/*
Q125: Write a C program to open an existing file in append mode and allow the user 
to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter filename to append data: ");
    scanf("%s", filename);
    getchar();  // To clear the newline character left by scanf

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: File not found or cannot be opened!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "\n%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}