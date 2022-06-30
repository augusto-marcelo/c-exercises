/*
6. Write a program in C to find the maximum number between two numbers 
using a pointer. 

Test Data :
    Input the first number : 5
    Input the second number : 6
Expected Output :
    6 is the maximum number.
*/
#include <stdio.h>

int
main() {
    int first = 5;
    int second = 6;

    int *p1 = &first;
    int *p2 = &second;

    if(*p1 > *p2) {
        printf("%d is the maximum number.\n", *p1);
    } else {
        printf("%d is the maximum number.\n", *p2);
    }
}