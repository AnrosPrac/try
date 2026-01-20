#include <stdio.h>

int main()
{
int x,y,res;
printf("Enter the values of x, y:");
scanf("%d %d", &x, &y);
res=(x>y)?x-y:y-x*x;
printf("Res=%d",res);
    return 0;
}