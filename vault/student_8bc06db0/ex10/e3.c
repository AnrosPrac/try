#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[1000];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();
    printf("Enter text to append (single line): ");
    fgets(text, sizeof(text), stdin);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }
    fputs(text, fp);
    fclose(fp);
    printf("Data appended\n");
    return 0;
}
