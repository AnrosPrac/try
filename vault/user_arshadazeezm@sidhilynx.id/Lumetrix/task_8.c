struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

#include <stdio.h>

int main() {
    struct Rectangle rect;
    rect.length = 10;
    rect.breadth = 5;
    int calculatedArea = area(rect);
    printf("The area of the rectangle is: %d\n", calculatedArea);
    return 0;
}