/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum 
of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. 
If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max_sum = arr[0], current_sum = arr[0];
    for(int i = 1; i < n; i++) {
        if(current_sum < 0)
            current_sum = arr[i];
        else
            current_sum += arr[i];

        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("%d\n", max_sum);
    return 0;
}