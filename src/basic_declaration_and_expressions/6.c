/*
6. Write a C program to compute the perimeter and area of a circle with a given radius. 

Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/
#include <stdio.h>

void compute_perimeter_and_area_circle(int radius) {
    float perimeter = 2 * (3.14 * radius);
    float area = 3.14 * (radius * radius);

    printf("The perimeter of a circle of radius %d is: %.2f inches \n", radius, perimeter);
    printf("The area of a circle of radius %d is: %.2f square inches \n", radius, area);

    printf("\n\n\n");
}

int main() {
    int radius = 6;
    compute_perimeter_and_area_circle(radius);
}
