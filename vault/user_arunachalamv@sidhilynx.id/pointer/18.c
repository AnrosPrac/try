#include <stdio.h>
#include <stdlib.h>
int main()
{
int *arr,n,i;
double average;
average=0;
printf("enter the value of n:");
scanf("%d",&n);
arr=(int*)calloc(n,sizeof(int));
printf("enter the %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",arr+i);
}
for(i=0;i<n;i++)
{
average+=*(arr+i);

}
    average/=n;
printf("the average of %d numbers is %.3lf",n,average);
free(arr);
return 0;
}