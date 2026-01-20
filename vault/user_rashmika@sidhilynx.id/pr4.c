#include<stdio.h>
int main()
{
    int num,rev=0,ori;
    
    printf("Enter A Number : ");
    scanf("%d",&num);
    
    ori=num;
    
    while(num!=0)
        
    {
        rev=rev*10+num%10;
        num/=10;
    }
    if(ori==rev)
        printf("%d Is A Palindrome . /n",ori);
    else
        printf("%d Is Not A Palindrome . /n",ori);
    
    return 0;
}
