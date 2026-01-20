#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,i;
ptr=(int *)malloc(3*sizeof(int));
if(ptr==NULL){
printf("Memory not allocated.");
return 1;
}
printf("Enter 3 integers:\n");
for(i=0;i<3;i++){
scanf("%d",ptr+i);
}
ptr=(int *)realloc(ptr,5*sizeof(int));
if(ptr==NULL){
printf("Memory reallocation failed.");
return 1;
}
printf("Enter 2 more integers:\n");
for(i=3;i<5;i++){
scanf("%d",ptr+i);
}
printf("All 5 integers:\n");
for(i=0;i<5;i++){
printf("%d ",*(ptr+i));
}
free(ptr);
return 0;
}
