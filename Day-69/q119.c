/*
Q119: Write a program to take an integer array as input. 
Only one element will be repeated. Print the repeated element. 
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements (one element is repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int visited[1000] = {0}; // assuming numbers are small (0–999)

    for (int i = 0; i < n; i++) {
        if (visited[nums[i]] == 1) {
            printf("Repeated element: %d", nums[i]);
            return 0;
        }
        visited[nums[i]] = 1;
    }

    printf("No repeated element found");
    return 0;
}