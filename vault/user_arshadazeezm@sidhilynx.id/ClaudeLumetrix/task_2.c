#include <stdio.h>
int main() {
    struct Point {
        int x;
        int y;
    };
    struct Point p;
    p.x = 10;
    p.y = 20;
    printf("Point coordinates: x = %d, y = %d\n", p.x, p.y);
    return 0;
}