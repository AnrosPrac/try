#include <stdio.h>
void reversearray(int *arr,int n)
{
int *start=arr;
int *end=arr+n-1;
int temp;
while (start<end)
{
temp=*atart;
*start=*end;
*end=temp;
start++;
end--;
}
}
int main()
{
int n,i;
printf("enter the value of n:");
scanf("%d",&n);
int arr[n];
printf("enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
reversearray(arr,n);
printf("reversed array:");
fpr(i=0;i<n;i++){
printf("%d",arr[i]);
}
return 0;
}