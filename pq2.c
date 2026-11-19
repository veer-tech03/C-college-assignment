#include<stdio.h>
#include<conio.h>

void main()
{
  float bs, hra, da, gs;

  printf("ENTER BASIC SALARY = ");
  scanf("%f", &bs);

  if(bs<1500)
  {
      hra=0.1*bs;
      da=0.9*bs;
      gs=bs+hra+da;
      printf("GROSS SALARY IS %fRS.", gs);
  }
  else
  {
      hra=500;
      da=0.98*bs;
      gs=bs+hra+da;
      printf("GROSS SALARY IS %fRS.", gs);
  }

}
