#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
c=a&&b;
d=a&b;
printf("c=%d",c);
printf("d=%d",d);
}