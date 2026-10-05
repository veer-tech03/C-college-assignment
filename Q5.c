#include <stdio.h>
#include <conio.h>

int main()

{

    float num1, num2;
    float sum, difference, product, quotient;

    //INPUT FROM USER AND DEFINING INPUT
    printf("ENTER TWO NUMBERS: ");
    scanf("%f %f", &num1, &num2);

    // PERFORMING OPERATIONS
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // EXCEPTION CHECK FOR DIVISION
    if (num2 != 0)
 {quotient = num1 / num2;}

    // DISPLAYING OUTPUT
    printf("\n--- Results ---\n");
    printf("Addition:       %f + %f = %f\n", num1, num2, sum);
    printf("Subtraction:    %f - %f = %f\n", num1, num2, difference);
    printf("Multiplication: %f * %f = %f\n", num1, num2, product);

    if (num2 != 0)
{
        printf("Division:       %f / %f = %f\n", num1, num2, quotient);
    }
    else
{
        printf("ERROR: NOT DEFINED\n");
    }

    return 0;
}

