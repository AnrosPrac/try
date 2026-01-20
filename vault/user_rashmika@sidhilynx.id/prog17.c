#include<stdio.h>
int main()
    
{
    int x,y,result;
    
    printf("Enter X and Y Value : ");
    scanf("%d %d",&x,&y);
    
    result=(x>y)?(x-y):(y-x*x);
    
    printf("Result  : %d \n",result);
}