/*
11. Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values)
 and calculate the average value of the items. 


Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4

Expected Output:
Average Value = 19.444444
*/
#include <stdio.h>

int main() {
    float item1_weight, item1_qtty, item2_weight, item2_qtty, avg; 

    printf("Weight - Item1: ");
    scanf("%f", &item1_weight);

    printf("No. of item1: ");
    scanf("%f", &item1_qtty);

    printf("\n");

    printf("Weight - Item2: ");
    scanf("%f", &item2_weight);

    printf("No. of item2: ");
    scanf("%f", &item2_qtty);

    avg = ( (item1_weight * item1_qtty) + (item2_weight * item2_qtty) ) / (item1_qtty + item2_qtty);

    printf("Average Value = %.2f \n\n", avg);
}