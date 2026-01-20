#include<stdio.h>
void main()
{
int a,b,c,max;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("enter c=");
scanf("%d",&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("max=%d",max);
}