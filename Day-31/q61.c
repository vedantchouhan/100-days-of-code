/*
Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, i, key, found = -1;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &key);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }
    
    if(found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");
    
    return 0;
}