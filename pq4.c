#include<stdio.h>

int main()
{
    int num, rev, remainder;

    printf("ENTER ANY NUMBER = ");
    scanf("%d", &num);

    while(num!=0)
    {
        remainder=num%10;
        rev=(rev*10)+remainder;
        num=num/10;
    }
    printf("REVERSED NUMBER = %d",rev);

    return 0;
}
