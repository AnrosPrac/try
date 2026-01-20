#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter A,B,C Value : ");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a==b && b==c && c==a)
    {
        printf("All Are Equal ");
    }
    if(a>b && a>c)
    {
        printf("Largest : %d\n",a);
    }
    else if(b>a && b>c)
    {
        printf("Largest : %d\n",b);
    }
    else
    {
        printf("Largest : %d\n",c);
    }
    if(a<b && a<c)
    {
        printf("Small : %d\n",a);
    }
    else if(b<a && b<c)
    {
        printf("Small : %d\n",b);
    }
    else
    {
        printf("Small : %d\n",c);
    }
}