#include <stdio.h>
#include <conio.h>

int main()
{
    float kilograms, grams;

    // INPUT FROM USER
    printf("ENTER KGS.: ");
    scanf("%f", &kilograms);

    // COVERSION FORMULA
    grams = kilograms * 1000.0;

    // DISPLAYING OUTPUT
    printf("%f kg is equal to %f grams\n", kilograms, grams);

    return 0;
}

