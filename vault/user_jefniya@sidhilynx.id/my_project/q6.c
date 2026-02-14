#include <stdio.h>

int main() {

    float radius;
    float pi = 3.14159;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("The area of the circle is: %f\n", area);

    return 0;
}