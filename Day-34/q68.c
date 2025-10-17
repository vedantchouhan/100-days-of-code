/*
Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, i, pos;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &pos);
    
    for(i = pos; i < n-1; i++)
        arr[i] = arr[i+1];
    
    for(i = 0; i < n-1; i++)
        printf("%d ", arr[i]);
    
    return 0;
}