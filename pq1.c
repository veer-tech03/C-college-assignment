#include<stdio.h>
#include<conio.h>

void main()
{
int qty;
float cp,total,ntotal;

printf("ENTER QUANTITY");
scanf("%d", &qty);
printf("ENTER COST PRICE");
scanf("%f", &cp);

total=cp*qty;
ntotal=0.9*cp*qty;

if(total>1000)
{
    printf("FINAL TOTAL = %f", ntotal);
}
else
{
    printf("FINAL TOTAL = %f", total);
}
}
