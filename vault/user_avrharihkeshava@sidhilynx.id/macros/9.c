#include <stdio.h>
#define SWAP(a,b,temp) {temp=a;\
a=b;\
b=temp;}
int main()
{
    int x,y,temp;
    printf("enter the value of the two numbers:\n");
    scanf("%d %d",&x,&y);
    SWAP(x,y,temp);
    printf("after swapping:\n");
    printf("%d %d",x,y);
}