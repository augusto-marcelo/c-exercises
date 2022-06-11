/*
5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.

Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/
#include <stdio.h>

int calc_perimeter_area_rectangle(int *height, int *width) {
    int perimeter = 2 * (*height + *width);
    int area = *height * *width;


    printf("A rectangle with a height of %d inches and width of %d inches has a: \n", *height, *width);
    printf("Perimeter: %d inches\n", perimeter);
    printf("Area: %d square inches\n", area);

    printf("\n\n\n");
}

int main() {

    int height = 7;
    int width = 5;

    calc_perimeter_area_rectangle(&height, &width);

}