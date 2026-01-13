#include <stdio.h>

int main() {
    double length, width;
    double area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\n");
    printf("The area of the rectangle is: %.2lf\n", area);
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);

    return 0;
}
