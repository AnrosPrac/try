#include<stdio.h>
void main()
{
int arr[5],i,j,tem,target,mid;
float median;
printf("enter the elements\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);}
for(i=0;i<5;i++)
{
for(j=0;j<5-i-1;j++)
{
if(arr[j]>arr[j+1])
{tem=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tem;

}
}
}printf("enter target=");
scanf("%d",&target);
int low=0,high=4,found=0;
while(low<=high)
{
mid=(low+high)/2;
if(target==arr[mid])
{

found++;
break;

}
else if(arr[mid]<target)
{
low=mid+1;

}
else if(arr[mid]>target)
{
high=mid-1;
}
}if(found!=0)
{
printf("target index=%d",mid);
}
else
{printf("target index not found");

}
}