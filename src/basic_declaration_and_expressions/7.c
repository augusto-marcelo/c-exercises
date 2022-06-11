/*
7. Write a C program to display multiple variables. 

Sample Variables :
a+ c, x + c, dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
Declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
*/
#include <stdio.h>

void display_operations(void) {

    int a = 125;
    int b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    // a + c | int + char
    printf("a + c = %d \n", a + c);

    // x + c | float + char
    printf("x + c = %f \n", x + c);

    // dx + x double + float
    printf("dx + x = %f \n", dx + c);

    // ((int) dx) + ax | int + long
    printf("((int) dx) + ax = %ld \n", ((int) dx) + ax);

    // a + x | int + float
    printf("a + x = %f \n", a + x);

    // s + b | short + int
    printf("s + b = %d \n", s + b);

    // ax + b | long + int
    printf("ax + b = %ld \n", ax + b);

    // s + c | short + char
    printf("s + c = %hd \n", s + c);

    // ax + c | long + char
    printf("ax + c = %ld \n", ax + c);

    // ax + ux | long + unsigned long
    printf("ax + ux = %lu \n", ax + ux);

    printf("\n\n");
}

int main(int arg) {
   display_operations();   
}