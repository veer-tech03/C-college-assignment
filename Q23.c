#include <stdio.h>
#include <conio.h>

int main()
{
    float sub1, sub2, sub3, total, average;

    // INPUT
    printf("ENTER MARKS FOR SUBJECT 1: ");
    scanf("%f", &sub1);
    printf("ENTER MARKS FOR SUBJECT 2: ");
    scanf("%f", &sub2);
    printf("ENTER MARKS FOR SUBJECT 3: ");
    scanf("%f", &sub3);

    // CALCULATION TOTAL
    total = sub1 + sub2 + sub3;

    // CALCULATING AVERAGE
    average = total / 3.0;

    // OUTPUT
    printf("\n Results \n");
    printf("Total Marks:   %f\n", total);
    printf("Average Marks: %f\n", average);

    return 0;
}

