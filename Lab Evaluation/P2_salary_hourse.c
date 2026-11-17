/*
Question-2: 
A company has N employees. 
For each employee, input the basic salary and working hours. 
Employees working more than 40 hours receive Tk. 
200 for each extra hour. Calculate the salary of each employee and the total payroll. (10 Marks)
*/

#include <stdio.h>

int main() {
    int n, hours;
    float basicSalary, salary, totalPayroll = 0;

    printf("Enter the number of employees: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of employees!\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("\nEnter basic salary and working hours for Employee %d: ", i);
        if (scanf("%f %d", &basicSalary, &hours) != 2 || basicSalary <= 0 || hours < 0) {
            printf("Invalid basic salary and working hours\n", i);
            return 1;
        }

        salary = basicSalary;

        if (hours > 40) salary += (hours-40)*200;

        printf("Employee %d Salary: %.2f\n", i, salary);
        totalPayroll += salary;
    }
    printf("Total Payroll: %.2f\n", totalPayroll);

    return 0;
}






