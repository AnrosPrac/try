#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "w");
    fprintf(fp, "12 45 7 89 23");
    fclose(fp);

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File error\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    avg = (count > 0) ? (float)sum / count : 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
