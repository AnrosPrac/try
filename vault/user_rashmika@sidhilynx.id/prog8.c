#include<stdio.h>
int main()
    
{
    int a,b,c,x,y;
    
    printf("Enter the value : ");
    scanf("%d %d %d %d",&a,&b,&c,&x);
    
    y=a*x*x+b*x+c;
    
    printf("Value of Y : % d",y);
    
    return 0;
}