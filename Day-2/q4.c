/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main()
{
    float radius;
    float area;
    float circumference;
    // Using 3.14159 as an approximation for PI
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Area = PI * radius * radius
    area = PI * radius * radius;
    // Circumference = 2 * PI * radius
    circumference = 2 * PI * radius;

    // Output formatted to two decimal places to match sample cases
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
