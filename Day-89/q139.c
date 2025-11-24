/*
Q139: Show that enums store integers by printing assigned values.

Sample Test Case:
No input
Output:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/

#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}