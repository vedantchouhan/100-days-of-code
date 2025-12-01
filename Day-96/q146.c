/*
Q146: Create Employee structure with nested Date structure for joining date 
and print details.

Sample Test Case:
Input:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020

Output:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee e;

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id, e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}