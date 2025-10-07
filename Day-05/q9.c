/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100.00, Compound Interest=102.50

Input 2:
5000 7 3
Output 2:
Simple Interest=1050.00, Compound Interest=1125.76
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float simple_interest, compound_interest;
    float amount;

    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow( (1 + rate / 100), time );
    compound_interest = amount - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);

    return 0;
}
