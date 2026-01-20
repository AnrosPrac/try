#include <stdio.h>

union Test {
    int i;
    float f;
};

int main() {
    union Test t;

    t.i = 10;
    printf("After assigning integer: t.i = %d, t.f = %f\n", t.i, t.f);

    t.f = 20.5;
    printf("After assigning float: t.i = %d, t.f = %f\n", t.i, t.f);

    return 0;
}