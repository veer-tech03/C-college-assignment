#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 5;
    int b = 10;
    int temp;

    // Swapping logic
    temp = a;   // Save the value of a
    a = b;      // Assign b's value to a
    b = temp;   // Assign the saved value to b

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

