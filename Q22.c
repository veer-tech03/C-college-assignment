#include <stdio.h>
#include <conio.h>

int main()
{
    double gross_sales, discount, net_sales;

    // INPUT
    printf("ENTER AMT. OF GROSS SALES: ");
    if (scanf("%lf", &gross_sales) != 1) {printf("Invalid input. Please enter a numeric value.\n");
        return 1;}

    // CALCULATING DISCOUNT
    discount = 0.10 * gross_sales;

    // CALCULATING NET SALES
    net_sales = gross_sales - discount;

    // OUPUT
    printf("\nFinancial Statement\n");
    printf("Gross Sales: $%f\n", gross_sales);
    printf("Discount (10%%): $%f\n", discount);
    printf("Net Sales: $%f\n", net_sales);

    return 0;
}

