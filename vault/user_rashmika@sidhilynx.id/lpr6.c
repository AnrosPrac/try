#include<stdio.h>
int main()
{
    int num,i,prime=1;
    
    printf("Enter A Number : ");
    scanf("%d",&num);
    
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            printf("Not a Prime Number . \n");
            prime=0;
            break;
       
        }
    }
    if(prime)
    {
        printf("%d Is A Prime Number . \n",num);
    }
    return 0;
}