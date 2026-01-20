#include <stdio.h>
#define INC(x) ((x)+1)
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("the value of a is %d\n",a);
    printf("the incremented value of a is %d\n",INC(a));
    printf("INC(a++)=%d\n",INC(a++));
    printf("the final value of a is %d",a);
    return 0;
}