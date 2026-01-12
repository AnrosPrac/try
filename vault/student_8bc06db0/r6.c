#include <stdio.h>

int main() {
    int number, sumOfDigits = 0, remainder;

    printf("Enter an integer: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int tempNumber = number;
    
    while (tempNumber != 0) {
        remainder = tempNumber % 10;
        sumOfDigits = sumOfDigits + remainder;
        tempNumber /= 10;
    }

    printf("The sum of the digits of %d is %d\n", number, sumOfDigits);

    return 0;
}
