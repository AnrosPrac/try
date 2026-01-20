#include<stdio.h>
int main()
    
{
    int num;
    
    printf("Enter the Number :");
    scanf("%d",&num);
    if(num%2==0)
        printf("\nThe Number Is Even %d",num);
    else
        printf("\nThe Number Is Odd %d",num);
    if(num>0)
        printf("\n%d is positive.",num);
    else
        if(num<0)
            printf("\n%d is Negative.",num);
    else
       printf("\n%d is Zero.",num);
    return 0;
}