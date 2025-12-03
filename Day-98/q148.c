/*
Q148: Take two structs as input and check if they are identical.

Sample Test Case:
Input:
Student1: Asha 101 90
Student2: Asha 101 90

Output:
Same
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter Student 1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    printf("Enter Student 2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("Same");
    } else {
        printf("Not Same");
    }

    return 0;
}