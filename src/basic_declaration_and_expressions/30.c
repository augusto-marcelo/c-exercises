/*
30. Write a C program to find and print the square of each one of the even values 
from 1 to a specified value.

Test Data :
    List of square of each one of the even values from 1 to a 4 :
Expected Output:
    2^2 = 4
    4^2 = 16
*/
#include <stdio.h>

int
main() {

    int start = 1;
    int stop = 0;

    printf("Input the stop index: ");
    scanf("%d", &stop);

    printf("List of square of each one of the even values from 1 to %d \n", stop);


    for(int i = start; i <= stop; i++) {
        
        // is even?
        if(i % 2 ==0) {
            printf("%d\n", (i * i));
        }
    }

    puts("\n");
}