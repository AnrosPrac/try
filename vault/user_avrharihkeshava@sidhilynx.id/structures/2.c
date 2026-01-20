#include <stdio.h>
struct point
{
int x;
int y;
}p1;
void main()
{
printf("enter the value of x coordinate:\n");
scanf("%d",&p1.x);
printf("enter the value of y coordinate:\n");
scanf("%d",&p1.y);
printf("(x,y)=(%d,%d)",p1.x,p1.y);
}