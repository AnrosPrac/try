#include<stdio.h>
void main()
{
int arr[5],i,j,k,tem,mode,sum=0;
float mean,median;
printf("enter the elements\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}mean=sum/5;
printf("mean=%f",mean);
for(i=0;i<4;i++)
{
for(j=0;j<5-i-1;j++)
{
if(arr[j]>arr[j+1])
{tem=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tem;

}
}
}
median=arr[2];
printf("median=%f",median);
mode=arr[0];
int maxc=1;
for(i=0;i<5;i++)
{int c=1;
for(k=0;k<5;k++)
{
if(arr[i]==arr[j])
{c++;

}
if(c>maxc)
{
mode==arr[i];
}
}
}
printf("mode=%d",mode);

}