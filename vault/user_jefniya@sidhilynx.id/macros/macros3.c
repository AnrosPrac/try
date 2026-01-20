#include <stdio.h>

#define FTOC(f) ( (5.0/9.0) * ((f) - 32) )

int main() {
    float f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Celsius = %.2f\n", FTOC(f));

    return 0;
}
