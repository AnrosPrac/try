#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory error\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    fp = fopen("numbers.bin", "wb");
    if (fp == NULL) {
        printf("Cannot open file\n");
        free(arr);
        return 1;
    }
    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);

    for (i = 0; i < n; i++) arr[i] = 0;

    fp = fopen("numbers.bin", "rb");
    if (fp == NULL) {
        printf("Cannot open file\n");
        free(arr);
        return 1;
    }
    fread(arr, sizeof(int), n, fp);
    fclose(fp);

    printf("Data read from file:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
