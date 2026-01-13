#include <stdio.h>

int main() {
    int number, i;

    printf("Enter the number for the multiplication table: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Multiplication Table for %d:\n", number);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
