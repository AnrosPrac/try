#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*1;
    }
    return fact;
}
int main()
{
    int num;
    
    printf("Enter A Number :  ");
    scanf("%d",&num);
    
    if(num<0)
        printf(" Factorial of Nagetive number doesn't exist.\n");
    else
        printf("Factorial of %d = %d\n",num,factorial(num));
    return 0;
}