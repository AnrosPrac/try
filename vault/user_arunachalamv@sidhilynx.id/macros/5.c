#include <stdio.h>
#define RECT(l,b) ((l)*(b))
int main()
{
    int l,b;
    printf("enter the values of l and b:\n");
    scanf("%d%d",&l,&b);
    printf("the area of the rectangle is %d",RECT(l,b));
    return 0;
}