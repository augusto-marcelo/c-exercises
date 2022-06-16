/*
18. Write a C program to convert a given integer (in days) to years, months and days,
 assumes that all months have 30 days and all years have 365 days.
 
Test Data :
    Input no. of days: 2535
Expected Output:
    6 Year(s)
    11 Month(s)
    15 Day(s)
*/
#include <stdio.h>

void print_date(int days){

    int temp, y, m, d;

    y = days / 365;
    m = (days - (y * 365)) / 30;
    d = (days - (y * 365)) - (m * 30);

    printf("%d Year(s)\n", y);
    printf("%d Month(s)\n", m);
    printf("%d Day(s) \n", d);

}

int main() {
    int days = 2535;
    print_date(days);
}