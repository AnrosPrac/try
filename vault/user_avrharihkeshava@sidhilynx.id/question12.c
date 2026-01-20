#include <stdio.h>
void main()
{
int a,b,tem;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
tem=a;
a=b;
b=tem;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
    