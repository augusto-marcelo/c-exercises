/*
12. Write a C program that accepts an employee's ID, total worked hours of a month 
and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.

Test Data :
    Input the Employees ID(Max. 10 chars): 0342
    Input the working hrs: 8
    Salary amount/hr: 15000

Expected Output:
    Employees ID = 0342
    Salary = U$ 120000.00
*/
#include <stdio.h>

double calc_salary(float hours, float salary_hour) {
    double salary = salary_hour * hours;

    return salary;
}

int main() {

    float hours, salary_hour;
    double salary_month;
    char emp_id[10];

    printf("Employee ID (Max. 10 chars): ");
    scanf("%s", &emp_id);

    printf("Working hours: ");
    scanf("%f", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &salary_hour);

    salary_month = calc_salary(hours, salary_hour);

    printf("Employee ID = %s \n", emp_id);
    printf("Salary = U$ %.2f \n", salary_month);

}

