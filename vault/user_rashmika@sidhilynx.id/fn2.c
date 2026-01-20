#include<stdio.h>
int largest(int a, int b)
{
    if(a>b)
        return a;
    else 
        return b;
}

int main()
{
    int n1,n2,result;
    
    printf("Enter Two Numbers  :  ");
    scanf("%d %d",&n1,&n2);
    
    result=largest(n1, n2);
    
    printf("Largest Number = %d\n",result);
    return 0;
}