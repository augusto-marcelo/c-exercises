/*
23. Write a C program that reads three floating values and check if it is possible 
to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid. 

Test Data :
    Input the first number: 25
    Input the second number: 15
    Input the third number: 35
Expected Output:
    Perimeter = 75.0
*/
#include <stdio.h>

#define TRUE 0
#define FALSE 1

float calc_perimeter(float x, float y, float z) {
    float perimeter; 

    perimeter = x + y + z;

}

int is_triangle(float x, float y, float z) {
    //int test = 1;

    if(x < (y+z) && y < (x+z) && z < (y+x)) {
        return TRUE;
    }

    return FALSE;
}

int
main() {
    
    float x, y, z, perimeter;

    printf("Input the first number:  ");
    scanf("%f", &x);

    printf("Input the second number:  ");
    scanf("%f", &y);

    printf("Input the third number:  ");
    scanf("%f", &z);

    int triangle_bool = is_triangle(x, y, z);

    if (triangle_bool == TRUE) {
        perimeter = calc_perimeter(x, y, z);
        printf("Perimeter = %.1f\n", perimeter);
    } else {
        printf("Not possible to create a triangle...");
    }
}