/*
10. Write a C program that accepts two integers from the user and calculate the product of the two integers.

Test Data :
Input the first integer: 25
Input the second integer: 15

Expected Output:
Product of the above two integers = 375
*/
#include <stdio.h>

int main() {

    int first, second;

    printf("Enter the first int: ");
    scanf("%d", &first);

    printf("Enter the second int: ");
    scanf("%d", &second);

    int product = first * second;

    printf("Product of the above two integers = %d \n\n", product);

}

