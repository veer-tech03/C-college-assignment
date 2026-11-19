#include<stdio.h>

int main()
{
    int cp,sp,net,qty;

    printf("ENTER THE COST PRICE = ");
    scanf("%d", &cp);
    printf("ENTER QUANTITY = ");
    scanf("%d", &qty);
    printf("ENTER THE SELLING PRICE = ");
    scanf("%d", &sp);

    net=(sp*qty)-(cp*qty);

    if(net>0)
    {
        printf("IT IS PROFIT OF %dRS.",net);
    }
    else
    {
        net=(cp*qty)-(sp*qty);
        printf("IT IS LOSS OF %dRS.", net);
    }
 return 0;
}
