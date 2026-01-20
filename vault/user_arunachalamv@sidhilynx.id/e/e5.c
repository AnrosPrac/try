#include <stdio.h>
int main() {
    int num, n, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter how many multiples to print: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", num * i);
    }
    printf("\n");
    return 0;
}
