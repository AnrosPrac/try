#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i,n,sum = 0;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    
   ptr = (int*)malloc(n*sizeof(int));
   
   
    
    if(ptr == NULL){
        printf("Memory not allocated \n");
    }
   printf("Enter %d elements : \n",n);
   for(i=0;i<n;i++){
       scanf("%d",ptr+i);
       sum+=*(ptr+i);
   }
   printf("The sum of total elements is %d",sum);
    return 0;
}