#include <stdio.h>
#include <conio.h>

int main()
{
    float hours, minutes;

    // INPUT FROM USER
    printf("Enter time in hours: ");
    scanf("%f", &hours);

    // CONVERTING HOURS INTO MINUTES
    minutes = hours * 60;

    // DISPLAYING OUTPUT
    printf("%f hours is %f minutes.\n", hours, minutes);

    return 0;
}

