#include<stdio.h>
void square(int *n)
{
    *n = (*n) * (*n);
}
int main()
{
    int num;
    
    printf("Enter a Number : ");
    scanf("%d",&num);
    
    square(&num);
    
    printf("Square = %d\n",num);
    
    return 0;
}
