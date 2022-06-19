/*
27. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.


Test Data :
    Input the first number: 5
    Input the second number: -4
    Input the third number: 10
    Input the fourth number: 15
    Input the fifth number: -1
Expected Output:
    Number of positive numbers: 3
    Number of negative numbers: 2
*/
#include <stdio.h>

int
main() {
    int numbers[5];
    int qtty_of_positive_nums = 0;
    int qtty_of_negative_nums = 0;

    for(int i = 0; i < 5; i++) {
        printf("Input some number: ");
        scanf("%d", &numbers[i]);
    }

    puts("\n");

    for(int i = 0; i < 5; i++) {
        
        if(numbers[i] >= 0) {
            qtty_of_positive_nums += 1;
        } else {
            qtty_of_negative_nums += 1;
        }

    }

    printf("Qtty of POSITIVE numbers: %d \n", qtty_of_positive_nums);
    printf("Qtty of NEGATIVE numbers: %d \n", qtty_of_negative_nums);
}