#include <stdio.h>
#include <conio.h>

int main()
{
    float side, area, perimeter;

    // USER INPUT
    printf("ENTER THE LENGTH OF SQUARE SIDE: ");
    scanf("%f", &side);

    // CALCULATION
    area = side * side;
    perimeter = 4 * side;

    // OUTPUT
    printf("\nResultsn");
    printf("Area of the Square: %f\n", area);
    printf("Perimeter of the Square: %f\n", perimeter);

    return 0;
}

