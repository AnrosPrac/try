#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x, y;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    y = a * (int)pow(x, x) + b * x + c;
    printf("y = %d\n", y);
    return 0;
}
