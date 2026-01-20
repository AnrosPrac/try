#include <stdio.h>
int fact(int a )
{
    int i,factorial=1;
    for(i=1;i<=a;i++){
        factorial=factorial*i;
    }
    return factorial;
    
}
void main()
{
    int x,factorial=1;
    printf("enter the number:");
    scanf("%d",&x);
   factorial=fact(x);
    printf("the factorial of the number is:%d",factorial);
}
