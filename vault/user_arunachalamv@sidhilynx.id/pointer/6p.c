#include <stdio.h>                                                                                                                                                
int sumArray(int *arr,int n)
{
int i,sum=0;
for(i=0;i<n;i++){
sumn=sum+arr[i];
 }
 return sum;
} 
int main()
{
int n,i,arr[100];
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("sum=%d",sumArray(arr,n));
return 0;
}