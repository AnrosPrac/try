#include <stdio.h>
#define FTOC(f) (((f) - 32) * 5.0 / 9.0)  
int main()
{

    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = FTOC(fahrenheit);

    printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);

    return 0;

}