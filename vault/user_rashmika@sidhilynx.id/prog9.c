#include<stdio.h>
int main()

{
    int a,b,c,x;
    
    printf("\nEnter A,B and C value : ");
    scanf("%d %d %d",&a,&b,&c);
    
    x=a+b*c/a%b;
    
    printf("The Result Is ... %d",x);
    
}