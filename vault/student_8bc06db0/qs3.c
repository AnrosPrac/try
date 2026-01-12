#include <stdio.h>

int main()
{
    int choice;
    float celsius, fahrenheit, kelvin;

    printf("for converting celsius to fahrenheit enter 0\n");
    printf("for converting fahrenheit to kelvin enter 1\n"); 
    printf("for converting fahrenheit to celsius enter 2\n"); 
    scanf("%d", &choice);

    if (choice == 0) {
        printf("Enter the temperature in Celsius: \n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 1.8) + 32;
        printf("Fahrenheit is %.2f\n", fahrenheit);
    }
    else if (choice == 1) {
        printf("Enter the temperature in Fahrenheit: \n");
        scanf("%f", &fahrenheit);
        kelvin = (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
        printf("Kelvin is %.2f\n", kelvin);
    }
   
    else if (choice == 2) {
        printf("Enter the temperature in Fahrenheit: \n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * (5.0 / 9.0);
        printf("Celsius is %.2f\n", celsius);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}