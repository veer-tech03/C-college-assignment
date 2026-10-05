#include <stdio.h>
#include <conio.h>

int main()
{
    float grams, kilograms;

    // INPUT FROM USER
    printf("ENTER WEIGHT IN GRAMS: ");
    scanf("%f", &grams);

    // CONVERSION (1 kg = 1000 grams)
    kilograms = grams / 1000.0;

    // DISPLAYING OUTPUT
    printf("%f grams is equal to %f kilograms\n", grams, kilograms);

    return 0;
}

