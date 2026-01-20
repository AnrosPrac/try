#include<stdio.h>
void add(int *x, int *y, int *sum)
{
    *sum = *x + *y;
}
int main()
{
    int a,b,result;
    
    printf("Enter two Numbers : ");
    scanf("%d %d",&a,&b);
    
    add(&a, &b, &result);
    
    printf(" Sum = %d \n",result);
    return 0;
}