#include <stdio.h>
int main() {
    int n, i;
    int first = 0, second = 1, next;
    printf("Enter how many terms you want: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}