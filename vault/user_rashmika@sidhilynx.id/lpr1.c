#include<stdio.h>
int main()
{
    int num=5;
    
    printf("Enter A Number :%d ",num);
    
    for(int i=1; i<=10; i++)
    {
        printf("\n%d * %d = %d \n",i,num,i*num);
    }
    return 0;
}