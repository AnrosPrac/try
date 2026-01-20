#include <stdio.h>
void square(int *n)
{
*n=(*n)*(*n);
}
int main()
{
int x;
printf("enter the value of x:");
scanf("%d",&x);
square(&x);
printf("the squared number is %d",x);
return 0;
}