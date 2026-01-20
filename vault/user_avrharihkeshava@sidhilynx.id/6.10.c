#include<stdio.h>
int sum(int x)
{
    if(x==0)
        return(0);
    return ((x%10)+sum(x/10));
    
}
void main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("sum of digits =%d",sum(n));
    
}