#include <stdio.h>

int main()
{
int a;
printf("Enter the value of a:");
scanf("%d", &a);
if(a % 2 ==0)
printf("%d is even\n",a);
else
printf("%d is odd\n",a);
if(a>0)
printf("%d is positive\n",a);
else if(a<0)
printf("%d is negative\n",a);
else
printf("The number is zero\n");
    return 0;
}