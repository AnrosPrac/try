#include <stdio.h>
#include <stdlib.h>
void log_temp(float temp) {
    FILE *fp = fopen("sensor.txt", "a");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return;
    }
    fprintf(fp, "%f\n", temp);
    fclose(fp);
    printf("Logged.\n");
}
void analytics() {
    FILE *fp = fopen("sensor.txt", "r");
    if (fp == NULL) {
        printf("No sensor data found.\n");
        return;
    }
    float x, sum = 0, min = 99999, max = -99999;
    int count = 0;
    while (fscanf(fp, "%f", &x) != EOF) {
        if (x < min)
            min = x;
        if (x > max) 
            max = x;
        sum += x;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("No readings.\n");
        return;
    }
    printf("Count = %d\n", count);
    printf("Min   = %.2f\n", min);
    printf("Max   = %.2f\n", max);
    printf("Avg   = %.2f\n", sum / count);
}
int main() {
    int choice;
    float temp;
    while (1) {
        printf("\n1. Log Temperature\n2. Analytics\n3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter temperature: ");
            scanf("%f", &temp);
            log_temp(temp);
        }
        else if (choice == 2) {
            analytics();
        }
        else if (choice == 3) {
            exit(0);
        }
        else {
            printf("Invalid choice.\n");
        }
    }
}
