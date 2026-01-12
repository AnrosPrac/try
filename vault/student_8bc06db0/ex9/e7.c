#include <stdio.h>
#define RATE 10
int main() {
    printf("%d\n", RATE);
    #undef RATE
    #define RATE 20
    printf("%d\n", RATE);
}
