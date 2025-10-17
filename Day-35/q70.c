/*
Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n, i, k;
    scanf("%d", &n);
    int arr[n], temp[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &k);
    k = k % n;
    
    for(i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);
    
    return 0;
}