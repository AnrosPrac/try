#include <stdio.h>

#define RECT_AREA(l, b) ((l) * (b))

int main() {
    int length, breadth, area;

    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);

    area = RECT_AREA(length, breadth);

    printf("Area of the rectangle = %d\n", area);

    return 0;
}
