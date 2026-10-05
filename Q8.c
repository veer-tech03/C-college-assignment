#include <stdio.h>
#include <conio.h>

int main()
{
    float dollars, rupees;
    float rate = 48.0f;

    // INPUT FROM USER
    printf("ENTER DOLLARS VALUE: ");
    scanf("%f", &dollars);

    // CONVERT DOLLARS TO RUPEES
    rupees = dollars * rate;

    // DISPLAYING OUTPUT
    printf("%f Dollars = %f Rupees\n", dollars, rupees);

    return 0;
}

