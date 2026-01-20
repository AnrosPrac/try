#include <stdio.h>
int ls(int a,int b)
{
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
void main()
{
    int x,y,largest;
    printf("enter the two numbers:");
    scanf("%d%d",&x,&y);
    largest=ls(x,y);
    printf("the largest number is:%d",largest);
}
