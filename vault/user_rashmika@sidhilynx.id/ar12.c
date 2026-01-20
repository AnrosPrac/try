#include <stdio.h>
#include <string.h>
int main()
{
    char names[100][50], temp[50];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); 

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);

        int len = strlen(names[i]);
        if (names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}