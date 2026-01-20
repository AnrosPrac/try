#include <stdio.h>

#define FTOC(f) ((f - 32.0) * 5.0 / 9.0)

int main() {
    double fahrenheit = 98.6;
    double celsius = FTOC(fahrenheit);
    printf("%f Fahrenheit is %f Celsius\n", fahrenheit, celsius);
    return 0;
}