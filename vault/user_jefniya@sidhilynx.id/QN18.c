#include <stdio.h>

int main()
{
int a, b, c, largest;
printf("Enter the 3 nums:");
scanf("%d %d %d", &a, &b, &c);
largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("The largest num is:%d\n",largest);
    return 0;
}