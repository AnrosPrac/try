#include <stdio.h>
int main()
{
int a,b,add,sub,mul,div,mod,x,y;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
add=a+b;
printf("a=%d\n",add);
sub=a-b;
printf("sub=%d\n",sub);
mul=a*b;
printf("mul=%d\n",mul);
div=a/b;
printf("div=%d\n",div);
mod=a%b;
printf("mod=%d\n",mod);
x=a/0.0;    
y=b/0.0;
printf("%d\n%d\n",x,y);    
return 0;
}