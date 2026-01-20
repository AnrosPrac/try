#include<stdio.h>
int max(int x,int y)
{
if(x>y)
return(x);
else
return(y);
}
void main()
{
int a,b,largest;
printf("enter a and b;\n");
scanf("%d %d",&a,&b);
largest=max(a,b);
printf("Largest =%d",largest);
}
