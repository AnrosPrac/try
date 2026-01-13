#include<stdio.h>
int fac(int x)
{int i,fact=1;
for(i=1;i<=x;i++)
{
fact=fact*i;

}
return(fact);
}
void main()
{
int a,factorial;
printf("enter a :\n");
scanf("%d",&a);
factorial=fac(a);
printf("factorial=%d",factorial);
}