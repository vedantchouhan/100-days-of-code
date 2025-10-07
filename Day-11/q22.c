/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main()
{
    float cost_price, selling_price, difference, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cost_price, &selling_price);

    difference = selling_price - cost_price;

  
    if (difference == 0)
    {
        printf("No Profit No Loss\n");
    }
    else if (difference > 0)
    {
  
        percentage = (difference / cost_price) * 100;
        printf("Profit %.0f%%\n", percentage);
    }
   
    else
    {

        percentage = (-difference / cost_price) * 100;
        printf("Loss %.0f%%\n", percentage);
    }

    return 0;
}
