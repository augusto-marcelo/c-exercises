/*
4. Write a program in C to add two numbers using pointers.

Test Data :
    Input the first number : 5
    Input the second number : 6
Expected Output :
    The sum of the entered numbers is : 11
*/
#include <stdio.h>

int
main() {
    int first, second;
    int *p1, *p2;
    int sum = 0;

    p1 = &first;
    p2 = &second;

    printf("Input the first number: ");
    scanf("%d", &first);

    printf("Input the second number: ");
    scanf("%d", &second);

    sum = *p1 + *p2;

    printf("The sum of the entered numbers is: %d \n", sum);


}