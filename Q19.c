#include <stdio.h>
#include <conio.h>

int main()
{
    float radius, area;

    // INPUT
    printf("ENTER THE RADIUS OF CIRCLE: ");
    scanf("%f", &radius);

    // CALCULATION
    area = 22/7 * radius * radius;

    // OUTPUT
    printf("The area of the circle is: %f\n", area);

    return 0;
}

