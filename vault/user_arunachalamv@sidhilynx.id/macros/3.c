#include <stdio.h>
#define FTOC(f) ((5.0/9.0)*((f)-32))
int main()
{
    float f,c;
    printf("enter the vlaue of f:\n");
    scanf("%f",&f);
    c=FTOC(f);
    printf("the value of fahrenheit in celsius is %.3f",c);
    return 0;
}