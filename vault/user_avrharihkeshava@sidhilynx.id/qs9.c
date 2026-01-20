#include<stdio.h>
void main()
{
int i,a,sum=0;
printf("enter i=");
scanf("%d",&i);
while(i>0)
{a=i%10;
sum=sum+a;
i=i/10;
}printf("sum=%d",sum);
}