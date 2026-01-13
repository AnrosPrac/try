#include<stdio.h>

int main() {
    FILE *fs, *fd;
    char src[100], dest[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", src);
    printf("Enter destination file name: ");
    scanf("%s", dest);

    fs = fopen(src, "rb");
    if (fs == NULL) {
        printf("Cannot open source file\n");
        return 1;
    }
    fd = fopen(dest, "wb");
    if (fd == NULL) {
        printf("Cannot open destination file\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);
    printf("File copied\n");
    return 0;
}