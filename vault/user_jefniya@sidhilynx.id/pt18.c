#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,n,i;
float sum=0,avg;
printf("Enter how many numbers: ");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
if(ptr==NULL){
printf("Memory not allocated.");
return 1;
}
printf("Enter the numbers:\n");
for(i=0;i<n;i++){
scanf("%d",ptr+i);
sum+=*(ptr+i);
}
avg=sum/n;
printf("Average = %.2f",avg);
free(ptr);
return 0;
}
