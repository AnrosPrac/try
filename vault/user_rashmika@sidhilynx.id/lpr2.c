#include<stdio.h>
int main()
{
    int fact=1;
    int num;
    
    printf("Enter A Number : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++)
    { 
        fact=fact*i;
    }
        printf("Factorial of %d = %d \n",num ,fact);
    
    return 0;
    
}