#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i;
   
   ptr = (int*)malloc(3*sizeof(int));
   
   
    
    if(ptr == NULL){
        printf("Memory not allocated \n");
    }
   printf("Enter 3 elements : \n");
   for(i=0;i<3;i++){
       scanf("%d",ptr+i);
     
   }
   
   ptr = (int*)realloc(ptr,5*sizeof(int));
   
   printf("Enter 2 more numbers : \n");
   for(i=3;i<5;i++){
       scanf("%d",ptr+i);
   }
   printf("ALL INTEGRES : \n");
   for(i=0;i<5;i++){
       printf("%d",*(ptr+i));
   }
   
   
    return 0;
}