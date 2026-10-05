#include <stdio.h>
#include <conio.h>

int main()
{
    float principal, rate, time, simple_interest;

    // INPUT
    printf("ENTER PRINCIPAL AMT.: ");
    scanf("%f", &principal);

    printf("ENTER ANNUAL RATE OF INTEREST (%%): ");
    scanf("%f", &rate);

    printf("ENTER NO. OF YEARS (in years): ");
    scanf("%f", &time);

    // CALCULATION
    simple_interest = (principal * rate * time) / 100;

    // OUTPUT
    printf("\nResults\n");
    printf("Principal Amount: %f\n", principal);
    printf("Rate of Interest: %f%%\n", rate);
    printf("Time Period     : %f years\n", time);
    printf("Simple Interest : %f\n", simple_interest);

    return 0;
}

