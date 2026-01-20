#include <stdio.h>
int main() {
    int a, b, c;
    double result;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    result = a - b * c + (double)a / c;
    printf("Result = %.2f\n", result);
    
    return 0;
}
