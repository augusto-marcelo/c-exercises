/*
25. Write a C program that reads an integer between 1 and 12 and print the month of the year in English. 

Test Data :
    Input a number between 1 to 12 to get the month name: 8
Expected Output:
    August
*/
#include <stdio.h>

int
main() {
    int input; 

    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        puts("January");
        break;

    case 2:
        puts("February");
        break;

    case 3:
        puts("March");
        break;

    case 4:
        puts("April");
        break;

    case 5:
        puts("May");
        break;

    case 6:
        puts("June");
        break;

    case 7:
        puts("July");
        break;

    case 8:
        puts("August");
        break;

    case 9:
        puts("September");
        break;

    case 10:
        puts("October");
        break;

    case 11:
        puts("November");
        break;

    case 12:
        puts("December");
        break;

    default:
        puts("Out of range!");
        break;
    }
}