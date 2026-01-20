#include<stdio.h>
void main()
{
int x,y,result;
printf(" enter x =");
scanf("%d",&x);
printf(" enter y =");
scanf("%d",&y);
result = (x>y)?x-y:y-x;
printf("result = %d",result);
}