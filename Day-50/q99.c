// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>

int main() {
    char date[20];
    fgets(date, sizeof(date), stdin);

    char day[3], month[3], year[5];
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    char monthName[3][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    int m = atoi(month);
    printf("%s-%s-%s", day, monthName[m-1], year);

    return 0;
}