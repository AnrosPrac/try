#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main()
{
    int a,b;
    printf("enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("the max of the two numbers is %d",MAX(a,b));
    return 0;
}