#include<stdio.h>
void main()
{
int arr[5],i,eve=0,odd=0;
printf("enter the elements\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
if(arr[i]%2==0)
{
eve++;
}
else
{
odd++;

}

}printf("number of even nos=%d\n",eve);
printf("number of odd nos=%d\n",odd);

}