/*
Q144: Write a function that accepts a structure as a parameter and prints its members.

Sample Test Case:
Input:
Student: Neha 104 92
Output:
Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    printStudent(s);

    return 0;
}