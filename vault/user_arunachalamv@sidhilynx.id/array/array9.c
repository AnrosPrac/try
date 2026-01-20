#include <stdio.h>
int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char strings[n][100];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%99s", strings[i]);
    }
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
    return 0;
}
