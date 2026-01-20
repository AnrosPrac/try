#include <stdio.h>
int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);

    char names[n][20];

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%19s", names[i]);
    }

    printf("List of names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
