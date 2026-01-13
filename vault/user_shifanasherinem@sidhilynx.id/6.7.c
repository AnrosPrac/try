#include<stdio.h>
void pal(int x)
{
int rev=0,y;
y=x;
int i;
while(x!=0)
{i=x%10;
rev=rev*10+i;
x=x/10;
}if(y==rev)
printf(" it is palindrome");
else
printf(" it is not palindrome");
}
void main()
{
 int a;
 printf("enter a :\n");
    scanf("%d",&a);
    pal(a);
}