#include<stdio.h>
int prime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
   int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    if(prime(num))
        printf("%d Is a Prime Number. \n",num);
    else
        printf("%d Is Not a Prime Number. \n",num);
    return 0;
}