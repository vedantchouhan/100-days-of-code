/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Case:
Input:
GUEST
Output:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    enum Role r;

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0) r = ADMIN;
    else if (strcmp(input, "USER") == 0) r = USER;
    else if (strcmp(input, "GUEST") == 0) r = GUEST;
    else {
        printf("Invalid role");
        return 0;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!");
            break;
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}