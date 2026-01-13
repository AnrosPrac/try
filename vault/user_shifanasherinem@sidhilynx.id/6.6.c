#include<stdio.h>
void rev(int x)
{
int rev=0;
int i;
while(x!=0)
{i=x%10;
rev=rev*10+i;
x=x/10;
}printf("reverse=%d",rev);
}
void main()
{
 int a;
 printf("enter a :\n");
    scanf("%d",&a);
    rev(a);
}