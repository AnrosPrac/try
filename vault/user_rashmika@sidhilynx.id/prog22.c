#include <stdio.h>

int main() {
    int i, n;
    float sum = 0.0, average;

    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3;

    printf("\nSum of three numbers = %.2f\n", sum);
    printf("Average of three numbers = %.2f\n", average);

    printf("\nEnter the number of elements (n): ");
    scanf("%d", &n);

    sum = 0.0; 

    for (i = 1; i <= n; i++) {
        float num;
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;

    printf("\nSum of %d numbers = %.2f\n", n, sum);
    printf("Average of %d numbers = %.2f\n", n, average);

    return 0;
}