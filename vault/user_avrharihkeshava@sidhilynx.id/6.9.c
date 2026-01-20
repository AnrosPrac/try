#include <stdio.h>
int fac(int x)
{if (x==0)
    return(1);
    return( x*fac(x-1));
    
}
void main ()
{
    int n,fact;
    printf("enter a number =");
    scanf("%d",&n);
    printf("factorial=%d",fac(n));
}