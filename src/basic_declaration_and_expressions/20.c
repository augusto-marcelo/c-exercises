/*
20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.

Test Data :
    Input the first number(a): 25
    Input the second number(b): 35
    Input the third number(c): 12
Expected Output:
    Root1 = -0.60000
    Root2 = -0.80000
*/
#include <stdio.h>
#include <math.h>

int
main() {
    double a, b, c, pr1;

    printf("Input the first number(a): ");
    scanf("%lf", &a);

    printf("Input the second number(b): ");
    scanf("%lf", &b);

    printf("Input the third number(c): ");
    scanf("%lf", &c);

    pr1 = (b * b) - (4* (a) * (c));

    if(pr1 > 0 && a != 0) {
        double x, y;
        pr1 = sqrt(pr1);
        x = (-b + pr1) / (2 * a);
        y = (-b - pr1) / (2 * a);
        printf("Root1 = %.5lf \n", x);
        printf("Root2 = %.5lf \n", y);
    } else {
        printf("Impossible to find the roots. \n");
    }

}