#include<stdio.h>
int main()
{
    int a,b,c,lar;
    
    printf("Enter A,B and C Value :");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b && a>c)
    {
        lar=a;
    }
    else
        if(b>a && b>c)
        {
        lar=b ;   
        }
    else
    {
        lar=c;
    }
    printf("The Largest Number Is : %d",lar);
    
    return 0;

}