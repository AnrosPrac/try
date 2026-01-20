#include<stdio.h>
void main()
{
float a,b,result;
int n;
printf("\n  simple calculator");
printf("\n  1.Addition");
printf("\n 2.Subbracion");
printf("\n 3.multiplication");
printf("\n 4 .division");
printf("\n enter choice(1-4)");
scanf("%d",&n);
printf("\n enter a :");
scanf("%f",&a);
printf("\n enter b :");
scanf("%f",&b);
switch(n)
{
case 1:
printf("\n add = %f",a+b);
break;
case 2:
printf("\n sub = %f",a-b);
break;
case 3:
printf("\n mul = %f",a*b);
break;
case 4:
if(a!=0)
{
printf("\n div = %f",a/b);
}
else
{
printf(" not defined");
}
break;
default:
printf("not provided");
}
}