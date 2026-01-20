#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("message.txt", "a");

    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }

    fprintf(fp, " This is a c program");

    fclose(fp);

    printf("Data appended successfully\n");

    return 0;
}
