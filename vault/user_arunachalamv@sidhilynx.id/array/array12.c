#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    char temp[100], strings[50][100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", strings[i]);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
    for (i = 0; i < n; i++)
        printf("%s\n", strings[i]);
    return 0;
}
