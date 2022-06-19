/*
28. Write a C program that read 5 numbers and counts the number of positive numbers 
and print the average of all positive values. 

Test Data :
    Input the first number: 5
    Input the second number: 8
    Input the third number: 10
    Input the fourth number: -5
    Input the fifth number: 25
Expected Output:
    Number of positive numbers: 4
    Average value of the said positive numbers: 12.00
*/
#include <stdio.h>

int
main() {
    float avg = 0;
    int numbers[5];
    int qtty_of_positive_nums = 0;


    for(int i = 0; i < 5; i++) {
        printf("Input some number: ");
        scanf("%d", &numbers[i]);
    }

    puts("\n");

    for(int i = 0; i < 5; i++) {
        
        if(numbers[i] >= 0) {
            qtty_of_positive_nums += 1;
            avg +=  (float)numbers[i];
        } 
        
    }

    avg = avg / qtty_of_positive_nums;

    printf("Qtty of POSITIVE numbers: %d \n", qtty_of_positive_nums);
    printf("Average value of the said positive numbers: %.2f \n", avg);

    puts("\n");
}