#include<stdio.h>
void main()
{
int arr[5],i,max=0;
printf("enter the elements");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
} int min=arr[0];
    for(i=0;i<5;i++)
{
if(max<arr[i])
{
    max=arr[i];
}
        if(min>arr[i])
{
    min=arr[i];
}

}
    printf("maximum=%d\n",max);
    printf("minimum=%d\n",min);
}