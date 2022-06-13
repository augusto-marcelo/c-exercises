/*
13. Write a C program that accepts three integers and find the maximum of three. 

Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15

Expected Output:
Maximum value of three integers: 35
*/
#include <stdio.h>

int find_max(int x, int y, int z) {

    if(x > y & x > z) {
        return x;

    } else if (y > x & y > z) {
        return y;

    } else {
        return z;
        
    }

}

int main() {
    int x = 10; 
    int y = 20;
    int z = 0;

    int max = find_max(x, y, z);

    printf("X = %d \nY = %d\nZ = %d \n\n", x, y, z);
    printf("Max is: %d \n\n", max);
}