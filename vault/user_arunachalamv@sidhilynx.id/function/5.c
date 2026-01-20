#include <stdio.h>
# define pi 3.14
float area( float r)
{
    float area;
    area=pi*r*r;
    return area;
}
int main()
{
    float r,a;
    printf("enter the value of r:");
    scanf("%f",&r);
    a=area(r);
    printf("the area of the circle is %0.2f",a);
    return 1;
}

