#include <stdio.h>

int main() {
    FILE *fp;
    int n, value;

    fp = fopen("numbers.bin", "rb");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    printf("Enter record number (1-based): ");
    scanf("%d", &n);

    if (fseek(fp, (n - 1) * sizeof(int), SEEK_SET) != 0) {
        printf("Seek error\n");
        fclose(fp);
        return 1;
    }

    if (fread(&value, sizeof(int), 1, fp) != 1) {
        printf("Could not read record\n");
    } else {
        printf("Record %d value = %d\n", n, value);
    }

    fclose(fp);
    return 0;
}
