#include <stdio.h>
#define SWAP(a,b,temp)  temp=a; \
                        a=b; \
                        b=temp;
int main()
{
    int a,b,temp;
    printf("enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("the values of a and b is %d and %d\n",a,b);
    SWAP(a,b,temp);
    printf("the values of a and b is %d and %d",a,b);
    
    return 0;
}