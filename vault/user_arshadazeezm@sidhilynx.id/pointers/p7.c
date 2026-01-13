
#include <stdio.h>

void reverse_array(int *arr,int size){
    int start=0;
    int end = size-1;
    while(start<end){
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++; 
        end--;
    }
}


int main()
{
    int n;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    int array[n];
    for (int i = 0;i<n;i++){
        printf("Enter the element at %d th position : \n",i);
        scanf("%d",&array[i]);
    }
    
    // for printing the original array
      printf("Original array : [");
    for(int i = 0;i<n;i++){
      printf(" %d ",array[i]);
    }
    printf("]");
    
    
    reverse_array(array,n);
    
    printf("\nReversed array : [");
    for(int i = 0; i < n; i++){
        printf(" %d ", array[i]);
    }
    printf("]");

    return 0;
}
