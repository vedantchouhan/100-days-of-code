/*
Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }
    
    printf("Positive=%d, Negative=%d, Zero=%d", pos, neg, zero);
    return 0;
}