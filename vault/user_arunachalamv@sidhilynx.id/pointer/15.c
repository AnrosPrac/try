#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *arr,n,sum=0,i;
 printf("enter the value of n:\n");
 scanf("%d",&n);
 arr=(int*)malloc(n*sizeof(n));
 printf("enter the %d numbers:\n",n);
 for(i=0;i<n;i++){
 scanf("%d",arr+i);
 sum+=*(arr+i);
 }
 printf("the sum of the numbers is %d",sum);
 free(arr);
 return 0;
}