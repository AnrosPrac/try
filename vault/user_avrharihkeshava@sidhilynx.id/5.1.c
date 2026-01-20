#include<stdio.h>
void main()
{
int arr[5],i,sum=0;
printf("enter the elements");
for(i=0;i<6;i++)
{
scanf("%d",&arr[i]);
}for(i=0;i<6;i++)
{
sum=sum+arr[i];
}
printf("%d",sum);
}