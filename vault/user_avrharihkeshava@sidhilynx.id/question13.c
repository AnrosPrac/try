#include<stdio.h>
void main()
{
int a;
printf("enter a=");
scanf("%d",&a);

if(a%2==0)
{
printf("a is even");



}
else{
printf("a is odd\n");
}
if(a>0)
{
printf("a is positive\n");
}
else if (a==0)
{
printf("a is 0\n");
}
else{
    printf("a is negative/n");
}
}