#include<stdio.h>
void main()
{
int arr[5],i,j,target;
printf("enter the elements\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("enter target=");
scanf("%d",&target);
for(i=0;i<5;i++)
{
if(target==arr[i])
{
printf("target index=%d",i);
}
}
}