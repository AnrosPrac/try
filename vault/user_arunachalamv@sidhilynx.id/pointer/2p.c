#include <stdio.h>
void compare(int *a,int *b)
{
if(*a>*b)
{
printf("the first number is greater than the second");
}
else if(*a<*b){
printf("the second number is greater than the first number");
}
else 
{
printf("both the numbgers are equal");
}
}
int main()
{
int x,y;
printf("enter the two numbers:");
scanf("%d%d",&x,&y);
compare(&x,&y);
return 0;
}      