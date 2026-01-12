#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,i;
    
    ptr = (int*)calloc(5,sizeof(int));
    
    if(ptr == NULL){
        printf("Memory not allocated \n");
    }
    
    printf("Values after allocation : \n");
    for(i=0;i<5;i++){
        printf("%d",*(ptr+i));
    }
    return 0;
}