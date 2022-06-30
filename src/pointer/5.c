/*
5. Write a program in C to add numbers using call by reference. 


Test Data :
    Input the first number : 5
    Input the second number : 6
Expected Output :
    The sum of 5 and 6  is 11
*/
#include <stdio.h>

int
main() {
    int first = 5;
    int second = 6;
    int sum = 0;

    sum = add(&first, &second);

    printf("The sum of %d and %d is %d \n", first, second, sum);

}

int add(int *first, int *second) {
    return *first + *second;
}