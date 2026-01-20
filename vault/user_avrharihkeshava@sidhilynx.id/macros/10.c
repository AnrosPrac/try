#include <stdio.h>
#define INC(x) (x+1)

int main()
{
    int x;
    printf("enter the value of the number:\n");
    scanf("%d",&x);
        printf("before\n");

    printf("%d\n",x);
  int t= INC(x);
     int h= INC(x++);
        printf("after\n");

    printf("%d\n",t);
    printf("%d\n",h);
    printf("%d\n",x);
}