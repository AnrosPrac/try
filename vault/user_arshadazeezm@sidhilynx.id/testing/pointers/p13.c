#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int *ptr,n,i;
    printf("Enter vnumber of elements : \n");
    scanf("%d",&n);
    
    ptr = (int*)malloc(n*sizeof(int));
    
    if(ptr == NULL ){
        printf("Memory not allocated");
    }
    
    printf("Enter %d integers : \n");
    for(i = 0;i<n;i++){
        scanf("%d",ptr+i);
        
        
    }

printf("Entered numbers are : \n");
for(i =0;i<n;i++){
    printf("%d",*(ptr+i));
}
free(ptr);














    return 0;
}