#include <stdio.h>
#include <conio.h>

int main()
{
    float gross_salary, allowance, deduction, net_salary;

    // INPUT
    printf("ENTER GROSS SALARY: ");
    scanf("%f", &gross_salary);

    // FIXED ALLOWANCE AND DEDUCTION
    allowance = 0.10 * gross_salary;
    deduction = 0.03 * gross_salary;

    // CALCULATION
    net_salary = gross_salary + allowance - deduction;

    // OUTPUT
    printf("\n--- Salary Breakdown ---\n");
    printf("Gross Salary: $%.2f\n", gross_salary);
    printf("Allowance (10%%): $%.2f\n", allowance);
    printf("Deduction (3%%): $%.2f\n", deduction);
    printf("Net Salary: $%.2f\n", net_salary);

    return 0;
}

