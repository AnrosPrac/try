#include <stdio.h>

int main()
{
     int a;
     printf("Enter the value of a:");
     scanf("%d", &a);
     if((a%3==0)&&(a%5==0))
     {
     printf("a is divisible by 3 and 5");
     }
     else
     {
     printf("a is not divisible by 3 and 5");
     }

    return 0;
}