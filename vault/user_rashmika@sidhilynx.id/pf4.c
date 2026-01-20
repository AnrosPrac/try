#include <stdio.h>
int main() {
    FILE *file = fopen("file/numbers_list.txt", "r");
    if(file == NULL) {
        printf("Cannot open numbers_list.txt\n");
        return 1;
    }
    int num, sum = 0, count = 0;
    while(fscanf(file, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(file);
    printf("Sum = %d, Average = %.2f\n", sum, (float)sum / count);
    return 0;
}
