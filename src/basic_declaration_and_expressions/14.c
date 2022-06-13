/*
14. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) 
   traveled (in km) and spent fuel (in liters, float number – 2 decimal point). 
   

Test Data :
    Input total distance in km: 350
    Input total fuel spent in liters: 5
Expected Output:
    Average consumption (km/lt) 70.000
*/
#include <stdio.h>

float avg_consumption(int total_distance, float fuel) {
    return total_distance / fuel;
}

int main() {

    int total_distance = 350;
    float used_fuel = 5.0;

    float avg = avg_consumption(total_distance, used_fuel);

    printf("Total distance in km: %d \n", total_distance);
    printf("Total fuel spent in liters: %.2f \n", used_fuel);
    printf("Average consumption: %.3f \n", avg);

    printf("\n\n");
}
