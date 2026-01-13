#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int tempNumber = number;
    
    while (tempNumber != 0) {
        remainder = tempNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        tempNumber /= 10;
    }

    printf("The reverse of %d is %d\n", number, reversedNumber);

    return 0;
}
