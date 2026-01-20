#include <stdio.h>
void sum(int *x,int *y,int *sum)
{
*sum=*x+*y;
}
int main()
{
int a,b,result;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
sum(&a,&b,&result);
printf("%d",result);
}