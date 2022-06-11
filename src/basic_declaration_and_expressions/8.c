/*
8. Write a C program to convert specified days into years, weeks and days. 

Note: Ignore leap year.

Test Data :
Number of days : 1329

Expected Output :
Years: 3
Weeks: 33
Days: 3
*/
#include <stdio.h>

void format_date(int days) {

    int years, weeks; 

    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ( (years * 365) + (weeks * 7) );

    printf("Years: %d \n", years);
    printf("Weeks: %d \n", weeks);
    printf("Days: %d \n", days);


    printf("\n\n");
}

int main() {

    // test data
    int days = 1329;

    printf("Days = %d \n", days);
    format_date(days);
    
}

