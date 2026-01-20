#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *arr;

    arr = (int *)calloc(5, sizeof(int));
    for(int i = 0;i<5;i++) {
       printf("Enter the Number %d : ",i+1);
       scanf("%d",arr+i);
    }
    printf("Values stored in the array:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}