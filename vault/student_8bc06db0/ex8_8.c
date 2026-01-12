#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;
    
    printf("Enter a positive integer N: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input or N is not positive.\n");
        return 1;
    }
    
    printf("Numbers from 1 to %d:\n", n);
    printNumbers(n);
    printf("\n");
    
    return 0;
}
