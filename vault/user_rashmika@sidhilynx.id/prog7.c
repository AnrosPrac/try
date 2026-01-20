#include<stdio.h>
int main()

{
    int a,b,c,result;
    
    printf("Enter A,B and C Value :");
    scanf("%d %d %d",&a,&b,&c);
    
    result=a-b*c+a/c;
    
    printf("The Result Is ....%d",result);
    
    return 0;
}