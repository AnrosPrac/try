#include <stdio.h>

#define SQUARE(x) ((x)*(x))

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The square of %d is %d\n", num, SQUARE(num));
    return 0;
}