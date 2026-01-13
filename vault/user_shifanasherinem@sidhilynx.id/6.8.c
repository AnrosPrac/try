#include <stdio.h>
int fun(int x)
{
if(x==0)
return(0);
else
{ 
    printf("%d\n",x);
    return(fun(x-1));

}}
void main()
{
int n;
printf("enter a number");
scanf("%d",&n);
fun(n);
}