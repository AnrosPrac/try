#include <stdio.h>

struct Sensor {
    char timeStr[30];
    double temp;
};

int main() {
    FILE *fp;
    int n, i;
    struct Sensor s;
    double min, max, sum = 0;
    int count = 0;

    fp = fopen("sensor.txt", "w");
    if (!fp) {
        printf("Cannot open file\n");
        return 1;
    }

    printf("Enter number of sensor readings: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Reading %d time (HH:MM): ", i + 1);
        scanf("%s", s.timeStr);
        printf("Temperature: ");
        scanf("%lf", &s.temp);
        fprintf(fp, "%s %lf\n", s.timeStr, s.temp);
    }
    fclose(fp);

    fp = fopen("sensor.txt", "r");
    if (!fp) {
        printf("Cannot open file\n");
        return 1;
    }

    if (fscanf(fp, "%s %lf", s.timeStr, &s.temp) == 2) {
        min = max = s.temp;
        sum = s.temp;
        count = 1;
    } else {
        printf("No data\n");
        fclose(fp);
        return 0;
    }

    while (fscanf(fp, "%s %lf", s.timeStr, &s.temp) == 2) {
        if (s.temp < min) min = s.temp;
        if (s.temp > max) max = s.temp;
        sum += s.temp;
        count++;
    }
    fclose(fp);

    printf("Readings: %d\n", count);
    printf("Min = %lf\n", min);
    printf("Max = %lf\n", max);
    printf("Avg = %lf\n", sum / count);

    return 0;
}
