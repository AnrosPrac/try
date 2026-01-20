#include <stdio.h>
#include <stdlib.h>
int main()
{
int *arr,i;
arr=(int*)malloc(3*sizeof(int));    
printf("enter the 3 numbers:");
for(i=0;i<3;i++)
{
scanf("%d",arr+i);
}
arr=(int*)realloc(arr,5*sizeof(int));
printf("enter two more numbers:\n");
for(i=3;i<5;i=i+1)
{
scanf("%d",arr+i);
}
printf("all the 5 numbers are:\n");
for(i=0;i<5;i++)
{
printf("%d\n",*(arr+i));
}
free(arr);
return 0;
}