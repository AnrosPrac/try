#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    struct Rectangle r;
    int result;

    printf("Enter length: ");
    scanf("%d", &r.length);

    printf("Enter breadth: ");
    scanf("%d", &r.breadth);

    result = area(r);

    printf("Area: %d\n", result);

    return 0;
}
