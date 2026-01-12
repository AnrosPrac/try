#include <stdio.h>
#include <math.h> 

int main()
{
    int width, lengthy;
    int area, perimeter;
    double diagonal;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &lengthy);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = lengthy * width;
    perimeter = 2 * (lengthy + width);
    diagonal = sqrt((lengthy * lengthy) + (width * width));

    printf("Area: %d, Perimeter: %d, Diagonal Length: %.2f\n", area, perimeter, diagonal);

    return 0;
}
