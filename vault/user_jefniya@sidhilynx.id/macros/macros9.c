#include <stdio.h>

#define SWAP(a, b, temp) \
    temp = a; \
    a = b; \
    b = temp;

int main() {
    int x, y, t;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);

    SWAP(x, y, t);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
