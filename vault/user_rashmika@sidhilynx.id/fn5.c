#include<stdio.h>
#define pi 3.14

float circle(float r)
{
    return pi*r*r;
}

int main()
{
    float radius,area;
    
    printf("Enter The Radius of the Circle : ");
    scanf("%f",&radius);
    
    area=circle(radius);
    
    printf("Area of the Circle = %f\n",area);
    return 0;
}