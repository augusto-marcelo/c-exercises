/*
29. Write a C program that read 5 numbers and sum of all odd values between them.

Test Data :
    Input the first number: 5
    Input the second number: 7
    Input the third number: 9
    Input the fourth number: 10
    Input the fifth number: 13
Expected Output:
    Sum of all odd values: 34
*/
#include <stdio.h>

int
main() {
    int numbers[5];
    int sum_odd_values = 0;

    for(int i = 0; i < 5; i++) {
        printf("Input some number: ");
        scanf("%d", &numbers[i]);

        if(numbers[i] % 2 != 0) {
           sum_odd_values += numbers[i];
        }
    }

    puts("\n");

    printf("Sum of all odd values: %d \n", sum_odd_values);
}