#include <stdio.h>

int main()
{
int a,b,c,result;
printf("Enter the values of a, b, c:");
scanf("%d %d %d", &a, &b, &c);
result=a+b*c/a%b;
printf("Result=%d",result);
      

    return 0;
}