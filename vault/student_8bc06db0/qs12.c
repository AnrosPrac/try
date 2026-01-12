#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter the first number : \n");
   scanf("%d",&a);
   printf("Enter the second number : \n");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("a is %d and b is %d",a,b);
   

    return 0;
}
