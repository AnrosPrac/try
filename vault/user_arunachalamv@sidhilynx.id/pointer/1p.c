#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x,y;
printf("enter the two number to swap them:");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("the swapped numbers are %d and %d",x,y);
}