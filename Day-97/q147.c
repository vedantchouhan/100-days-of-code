/*
Q147: Store employee data in a binary file using fwrite() 
and read using fread().

Sample Test Case:
Input:
Employee details entered and stored in file.

Output:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;

    // Taking input
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Writing to binary file
    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    // Reading from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error reading file!");
        return 1;
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    // Output
    printf("\nEmployee Data Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", e_read.name, e_read.id, e_read.salary);

    return 0;
}