/*
Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Case:
Input:
Name: Asha
Roll: 101
Marks: 90

Output:
Name: Asha | Roll: 101 | Marks: 90
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll_no, s.marks);

    return 0;
}