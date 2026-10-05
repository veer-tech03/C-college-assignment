#include<stdio.h>

int main()
{
    int num1;
    int num2;

    printf("ENTER THE VALUE OF NUMBER 1: ");
    scanf("%d", &num1);
    printf("ENTER THE VALUE OF NUMBER 2: ");
    scanf("%d", &num2);

    if(num1>num2)
        {
        printf("THE LARGEST NUMBER IS: %d\n", num1);
        printf("THE SMALLEST NUMBER IS: %d\n", num2);
    }
    else if(num1<num2)
        {
        printf("THE LARGEST NUMBER IS: %d\n", num2);
        printf("THE SMALLEST NUMBER IS: %d\n", num1);
    }
    else
        {
        printf("BOTH THE GIVEN NUMBERS ARE EQUAL\n");
    }
}
