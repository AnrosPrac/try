#include <stdio.h>

int main() {
    int number;
    int originalNumber; 
    int sum = 0;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    if (number == 0) {
        sum = 0;
        count = 1;
    } else {
        while (number != 0) {
            int remainder = number % 10;
            sum = sum + remainder;
            count++;
            number = number / 10;
        }
    }

    printf("The sum of the digits of %d is: %d\n", originalNumber, sum);
    printf("The number of digits in %d is: %d\n", originalNumber, count);

    return 0;
}
