#include<stdio.h>
void main ()
{
int a,b,c,result;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("enter c=");
scanf("%d",&c);
result =a-b*c+a/c;
printf("result=%d",result);
}