#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3;
    
    printf("%d , %d ",n1,n2);
    
    for(int i=2; i<10; i++)
    {
        if(i==1 || i==0)
        {
            n3=i;
        }
    else
    {
    
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
        printf("%d\t",n3);
    }
    printf("\n");
    return 0;
}
