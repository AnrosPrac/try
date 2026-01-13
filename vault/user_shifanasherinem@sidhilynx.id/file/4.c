#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int x;
    long long sum = 0;
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }
    fclose(fp);

    if (count == 0) {
        printf("No integers found\n");
    } else {
        double avg = (double)sum / count;
        printf("Sum = %lld, Count = %d, Average = %lf\n", sum, count, avg);
    }
    return 0;
}
