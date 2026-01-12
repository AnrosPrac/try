#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    int num_terms, i;

    printf("Enter the number of terms for the Fibonacci series: ");
    if (scanf("%d", &num_terms) != 1 || num_terms < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Fibonacci Series (first %d terms):\n", num_terms);

    for (i = 0; i < num_terms; i++) {
        printf("%d", fibonacci_recursive(i));

        if (i < num_terms - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}