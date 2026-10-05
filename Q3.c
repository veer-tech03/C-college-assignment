#include <stdio.h>
#include <conio.h>

int main()

{

    int num1, num2, product;

    // INPUT FROM USER
    printf("Enter two integers: ");

    //DEFINING INPUT
    scanf("%d %d", &num1, &num2);

    // MULTIPLYING INPUT
    product = num1 * num2;

    // DISPLAYING OUTPUT
    printf("Product = %d\n", product);

    return 0;
}
