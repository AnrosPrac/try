#include<stdio.h>
int reverse(int n)
{
    int reversed=0,remainder;
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    return reversed;
}

int main()
{
    int num ;
    
    printf("Enter a Number : ");
    scanf("%d",&num);
    
    printf("Reversed number %d = %d\n",num,reverse(num));
    return 0;
}