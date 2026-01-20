#include <stdio.h>
#define RECT_AREA(l, b) ((l) * (b))  
int main() 
{
     float length, breadth, area;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = RECT_AREA(length, breadth);

    printf("Area of the rectangle = %.2f\n", area);

    return 0;

}