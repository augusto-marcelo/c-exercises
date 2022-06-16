/*
22. Write a C program that read 5 numbers and sum of all odd values between them.

Test Data :
    Input the first number: 11
    Input the second number: 17
    Input the third number: 13
    Input the fourth number: 12
    Input the fifth number: 5
Expected Output:
    Sum of all odd values: 46
*/
#include <stdio.h>

int
main() {
    int numbers[5];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        printf("Input some number: ");
        scanf("%d", &numbers[i]);

        if(numbers[i] % 2 != 0) {
            //printf("%d \n", numbers[i]);
            sum += numbers[i];
        }

    }

    printf("Sum of all odd values: %d \n", sum);
}