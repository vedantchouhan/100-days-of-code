/*
Q138: Print all enum names and integer values using a loop.

Sample Test Case:
No input
Output:
RED=0
YELLOW=1
GREEN=2
*/

#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}