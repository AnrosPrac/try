#include <stdio.h>
int main() {
    FILE *f;
    int n, sum = 0, count = 0;

    f = fopen("numbers.txt", "r");
    if (f == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while (fscanf(f, "%d", &n) == 1) {
        sum += n;
        count++;
    }
    fclose(f);

    if (count > 0)
        printf("Sum = %d\nAverage = %.2f\n", sum, (double)sum / count);
    else
        printf("No numbers found in the file.\n");

    return 0;
}