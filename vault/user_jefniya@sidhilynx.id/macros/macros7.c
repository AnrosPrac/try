#include <stdio.h>

#define RATE 10

int main() {
    printf("RATE = %d\n", RATE);

    #undef RATE
    #define RATE 20

    printf("New RATE = %d\n", RATE);

    return 0;
}
