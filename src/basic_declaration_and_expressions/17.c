/*
17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. 

Test Data :
    Input seconds: 25300
Expected Output:
    There are:
    H:M:S - 7:1:40
*/
#include <stdio.h>

void print_time(int seconds) {

    int total, hours, min, sec;

    hours = (seconds / 3600);
    min = (seconds -(3600 * hours)) / 60;
    sec = (seconds - (3600 * hours) - (min * 60));

    printf("H:M:S - %d:%d:%d \n\n", hours, min, sec);
}

int main() {
    int seconds = 25300;

    printf("Seconds: %d \n", seconds);
    print_time(seconds);
}