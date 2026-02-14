#include <stdio.h>

int main() {

    float length;
    float breadth;
    float area;

    printf("enter the length of the rectangle:\n");
    scanf("%f", &length);

    printf("enter the breadth of the rectangle:\n");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("the area of the rectangle is: %f\n", area);

    return 0;
}