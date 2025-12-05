/*
Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Case:
Input:
Student allocated dynamically with details: Tina 105 88

Output:
Name: Tina | Roll: 105 | Marks: 88
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    s = (struct Student*)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    printf("\nName: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);

    free(s);
    return 0;
}