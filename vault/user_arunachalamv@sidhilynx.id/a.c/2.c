#include <stdio.h>
#include <math.h>
int main()
{
 float l,b,a,d;
 printf("enter the value of l:");
 scanf("%f",&l);
 printf("enter the value of b:");
 scanf("%f",&b);
 a=l*b;
 printf("a=%f",a);
 d= sqrt((l*l)+(b*b));
 printf("d=%f",d);
 return 0;
}