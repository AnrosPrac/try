#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("message.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file\n");       return 1;
    }
    fprintf(fp, "Hello, this is a simple message.\n");
    fclose(fp);
    printf("Message written to message.txt\n");
    return 0;
}
