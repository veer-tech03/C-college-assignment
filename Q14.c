#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius, fahrenheit;

    // INPUT FROM USER
    printf("ENTER TEMP. IN CELSIUS: ");
    scanf("%f", &celsius);

    // CONVERSION FORMULA
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // OUTPUT
    printf("%f °C is equal to %f °F\n", celsius, fahrenheit);

    return 0;
}

