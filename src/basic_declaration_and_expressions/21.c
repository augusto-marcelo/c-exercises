/*
21. Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80. 

Test Data :
    t an integer: 15
Expected Output:
    Range [0, 20]
*/
#include <stdio.h>

int
main() {
    int x;
    printf("Input an integer: ");
    scanf("%d", &x);

    if(x >= 0 && x <= 20) {
        printf("Range [0, 20] \n");
    } else if( x >= 21 && x <= 40) {
        printf("Range (25, 50) \n");
    } else if( x >= 41 && x <= 60) {
        printf("Range [50, 75] \n");
    } else if (x > 61 && x <= 80) {
        printf("Range [61, 80] \n");
    } else {
        printf("Outside the range \n");
    }
}