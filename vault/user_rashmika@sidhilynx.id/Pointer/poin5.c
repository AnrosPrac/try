#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter integers : \n");
    
    for(int i=0; i<5; i++)
    {
        scanf("%d",(arr + i));
    }
    printf("You Entered :\n");
    
    for(int i; i<5; i++)
    {
        printf("%d",*(arr + i));
    }
    printf("\n");
    
    return 0;
}