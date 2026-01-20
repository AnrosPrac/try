#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,i;
ptr=(int *)calloc(5,sizeof(int));
if(ptr==NULL){
printf("Memory not allocated.");
return 1;
}
printf("The 5 integers are:\n");
for(i=0;i<5;i++){
printf("%d ",*(ptr+i));
}
free(ptr);
return 0;
}
