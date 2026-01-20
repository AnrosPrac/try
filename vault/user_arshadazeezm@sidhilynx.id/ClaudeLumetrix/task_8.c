struct Rectangle {
    float length;
    float breadth;
};

float area(struct Rectangle rect) {
    return rect.length * rect.breadth;
}

#include <stdio.h>

int main() {
    struct Rectangle myRect;
    myRect.length = 10.5;
    myRect.breadth = 5.0;

    float rectArea = area(myRect);
    printf("The area of the rectangle is: %.2f\n", rectArea);

    return 0;
}