#include <stdio.h>

int isPrimeNumber(int n);

int main() {
    int a;
    printf("Enter a number: ");
    
    if (scanf("%d", &a) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    int b = isPrimeNumber(a);

    if (b) {
        printf("It is a prime number!\n");
    } else {
        printf("It is not a prime number!\n");
    }

    return 0;
}

int isPrimeNumber(int n) {
    if (n <= 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else if (n % 2 == 0) {
        return 0;
    } else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}