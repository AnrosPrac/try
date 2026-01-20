#include <stdio.h>

int main() {
    int val, ref, total = 0, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &val);
    ref = val;
    if (val == 0) {
        total = 0;
        digits = 1;
    } else {
        while (val != 0) {
            int part = val % 10;
            total += part;
            digits++;
            val /= 10;
        }
    }
    printf("Sum of digits of %d = %d\n", ref, total);
    printf("Digits in %d = %d\n", ref, digits);
    return 0;
}