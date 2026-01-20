#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a=10,b=20;
    
    swap(&a,&b);
    printf("\na=%d b=%d",a,b);
}
void swap(int *x,int *y)
{
    int t;
    
    t=*x;
    *x=*y;
    *y=t;
}