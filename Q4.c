#include <stdio.h>
#include <conio.h>

int main()

{
    float num1, num2, result;

    //INPUT FROM USER
    printf("ENTER TWO NUMBERS: ");

    //DEFINING THE INPUT
    scanf("%f %f", &num1, &num2);

    // EXCEPTION
    if (num2 == 0)
{
        printf("Error: NOT DEFINED.\n");
    }
    else
{
        //DIVIDING THE INPUT
        result = num1 / num2;

        //DISPLAYING OUTPUT
        printf("Result: %f\n", result);
    }
     return 0;
}
