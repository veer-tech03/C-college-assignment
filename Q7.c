#include <stdio.h>
#include <conio.h>

int main()
{
    int minutes;
    float hours;

    //USER INPUT
    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    // CONVERT MINUTES INTO HOURS
    hours = (float)minutes / 60;

    // OUTPUT DISPLAY
    printf("%d minutes is equal to %f hours.\n", minutes, hours);

    return 0;
}

