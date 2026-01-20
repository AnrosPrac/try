#include <stdio.h>
#define SQUARE(x) ((x)*(x))
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    SQUARE(a);
    printf("the square of the number %d is %d",a,SQUARE(a));
    return 0;
}
