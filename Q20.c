#include <stdio.h>
#include <conio.h>

int main()
{
    float base, height, area;

    // INPUT
    printf("ENTER VALUE OF BASE OF TRIANGLE: ");
    scanf("%f", &base);

    printf("ENTER VALUE OF HEIGHT OF TRIANGLE: ");
    scanf("%f", &height);

    // CALCULATION
    area = 0.5 * base * height;

    // OUTPUT
    printf("The area of the triangle is: %f\n", area);

    return 0;
}

