#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, result;

    //INPUT FROM USER
    printf("ENTER TWO INTEGERS: ");

    //DEFINING INPUT
    scanf("%d %d", &num1, &num2);

    //SUBTRACTING INPUT
    result = num1 - num2;

    //DISPLAYING OUTPUT
    printf("%d - %d = %d\n", num1, num2, result);

    return 0;
}
