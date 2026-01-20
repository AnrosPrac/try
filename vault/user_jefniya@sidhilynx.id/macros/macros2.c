#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square = %d\n", SQUARE(num));

    return 0;
}
