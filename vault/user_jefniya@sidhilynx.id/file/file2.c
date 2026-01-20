#include <stdio.h>

int main() {
    FILE *org, *copy;
    char ch;

    org = fopen("org.txt", "w");
    fprintf(org, "Hi! I'm Jef");
    fclose(org);

    org = fopen("org.txt", "r");
    copy = fopen("copy.txt", "w");

    if (org == NULL || copy == NULL) {
        printf("File error\n");
        return 1;
    }

    while ((ch = fgetc(org)) != EOF) {
        fputc(ch, copy);
    }

    printf("Copied successfully\n");

    fclose(org);
    fclose(copy);

    return 0;
}
