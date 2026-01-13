#include<stdio.h>
int sum(int x,int y)
{
return x+y;
}
int main()
{
int a,b,add;
printf("enter a and b;\n");
scanf("%d %d",&a,&b);
add=sum(a,b);
printf("sum=%d",add);
}
