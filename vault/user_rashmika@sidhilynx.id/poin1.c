#include<stdio.h>
void swap (int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x,y;
    
    printf("Enter the two values : ");
    scanf("%d %d",&x,&y);
    
    printf("Before Swapping : x=%d , y=%d",x,y);
    swap(&x, &y);
    printf("\nAfter Swapping  : x=%d , y=%d",x,y);
    return 0;
    
}