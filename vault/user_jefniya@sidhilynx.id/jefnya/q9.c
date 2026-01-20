#include <stdio.h>

#define SWAP(a, b, temp) { temp = a; a = b; b = temp; }

int main() {
    int x = 5;
    int y = 10;
    int temp_var;

    printf("Before swap: x = %d, y = %d\n", x, y);

    SWAP(x, y, temp_var);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}