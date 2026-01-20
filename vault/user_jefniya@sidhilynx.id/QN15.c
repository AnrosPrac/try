#include <stdio.h>

int main()
{
int a, b, c, largest;
printf("Enter three numbers:");
scanf("%d %d %d", &a, &b, &c);
largest=a;
if(b>largest)
largest=b;
if(c>largest)
largest=c;
printf("The largest number is:%d\n",largest);
    return 0;
}