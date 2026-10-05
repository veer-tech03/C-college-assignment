#include <stdio.h>
#include <conio.h>

int main()
{
    float fahrenheit, celsius;

    //INPUT
    printf("ENTER TEMPERATURE IN FAHRENHEIT: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%f Fahrenheit is equal to %f Celsius\n", fahrenheit, celsius);

    return 0;
}
