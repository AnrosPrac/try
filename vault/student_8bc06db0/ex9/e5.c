#include <stdio.h>
#define RECT_AREA(l,b) ((l)*(b))
int main() {
    int l, b;
    scanf("%d %d", &l, &b);
    printf("%d", RECT_AREA(l,b));
}
