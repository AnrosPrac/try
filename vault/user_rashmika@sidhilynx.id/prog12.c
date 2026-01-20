#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter the value : ");
    scanf("%d %d",&a,&b);
    
    printf("\nBefore Swap  a=%d\n,b=%d",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\nAfter Swap   a=%d\n,b=%d",a,b);
    
    return 0;
}