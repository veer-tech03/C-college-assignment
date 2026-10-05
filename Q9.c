#include <stdio.h>
#include <conio.h>

int main()
{
    float rupees, dollars;

    //INPUT FROM USER
    printf("ENTER AMT. IN RS. : ");
    scanf("%f", &rupees);

    //CONVERT DOLLARS INTO RS.
    dollars = rupees / 48.0;

    //DISPLAYING OUTPUT
    printf("Amount in Dollars: $%f\n", dollars);

    return 0;
}

