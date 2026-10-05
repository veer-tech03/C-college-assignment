#include <stdio.h>
#include <conio.h>

int main()
{
    float length, width, area, perimeter;

    // INPUT
    printf("ENTER LENGTH OF RECTANGLE: ");
    scanf("%f", &length);

    printf("ENTER WIDTH OF RECTANGLE: ");
    scanf("%f", &width);

    // CALCULATION
    area = length * width;
    perimeter = 2 * (length + width);

    // OUTPUT
    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}

