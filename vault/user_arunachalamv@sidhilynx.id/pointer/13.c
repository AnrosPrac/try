#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *arr,n;
 printf("enter the value of n:");
 scanf("%d",&n);
 arr=(int*)malloc(n*sizeof(n));
 printf("enter %d integers:",n);
 for(int i=0;i<n;i++){
 scanf("%d",arr+i);
 }
 free(arr);
 return 0;
}