#include <stdio.h>
#include <conio.h>

int main()
{
    float dollars, rupees, pounds;

    // INPUT FROM USER
    printf("ENTER AMT. OF DOLLARS: ");
    scanf("%f", &dollars);

    //INTERCONVERION OF CURRENCIES
    rupees = dollars * 48.0;
    pounds = rupees / 70.0;

    //DISPLAYING OUTPUT
    printf("Amount in Pounds: %f\n", pounds);

    return 0;
}

