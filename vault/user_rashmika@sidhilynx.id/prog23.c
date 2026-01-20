#include <stdio.h>

int main() {
    int num, digit, sum = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;
    
    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        digit = temp % 10;    
        sum += digit;          
        count++;               
        temp /= 10;            
    }

     if (num == 0) {
        count = 1;
        sum = 0;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Number of digits: %d\n", count);

    return 0;
}
