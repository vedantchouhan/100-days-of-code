/*
Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check only if it's a square matrix
    if (r != c) {
        printf("False\n");
        return 0;
    }

    int isDistinct = 1;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) {
            if (a[i][i] == a[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}