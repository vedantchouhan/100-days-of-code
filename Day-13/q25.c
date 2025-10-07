/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter calculation (e.g., 4 2 +): ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("%d\n", result);
            }
            else
            {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0)
            {
                result = num1 % num2;
                printf("%d\n", result);
            }
            else
            {
                printf("Error: Modulo by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}