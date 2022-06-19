/*
24. Write a C program that reads two integers and checks whether they are multiplied or not. 

Test Data :
    Input the first number: 5
    Input the second number: 15
Expected Output:
    Multiplied!
*/
#include <stdio.h>

int
main() {
    int first, second;

    printf("Input the first number: ");
    scanf("%d", &first);

    printf("Input the second number: ");
    scanf("%d", &second);

    if(first > second) {
        int temp = first;
        first = second;
        second = temp; 
    }

    if(second % first == 0) {
        puts("Multiplied!");
    } else {
        puts("Not Multiplied!");
    }
}