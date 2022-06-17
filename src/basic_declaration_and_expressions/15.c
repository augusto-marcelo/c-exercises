/*
15. Write a C program to calculate the distance between the two points. 

Test Data :
    Input x1: 25
    Input y1: 15
    Input x2: 35
    Input y2: 10

Expected Output:
    Distance between the said points: 11.1803
*/
#include <stdio.h>
#include <math.h>

float calc_distance(float x1, float y1, float x2, float y2) {
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

int main() {
    float x1 = 25;
    float y1 = 15;

    float x2 = 35;
    float y2 = 10;

    float distance = calc_distance(x1, y1, x2, y2);

    printf("x1: %.2f \n", x1);
    printf("y1: %.2f \n", y1);
    printf("x2: %.2f \n", x2);
    printf("y2: %.2f \n", y2);

    printf("Distance between the said points: %.4f", distance);

    printf("\n\n");
}
