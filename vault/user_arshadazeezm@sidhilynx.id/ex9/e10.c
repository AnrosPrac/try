#include <stdio.h>

#define INC(x) (++(x))   // Safe only when x is a variable, NOT an expression

int incf(int x) {
    return ++x;
}

int main() {
    int i = 5;

    // SAFE usage
    int a = INC(i);   // i becomes 6, a = 6

    i = 5;
    int b = incf(i++);   // b = 6, i becomes 6 after increment

    printf("%d %d", a, b);
}
