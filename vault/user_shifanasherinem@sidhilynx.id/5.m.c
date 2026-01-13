#include <stdio.h>

int main() {
    int n, temp;
    float mean, median, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int d[n];

    // Input elements and calculate sum
    for (int i = 0; i < n; i++) {
        printf("Enter the element d%d: ", i);
        scanf("%d", &d[i]);
        sum += d[i];
    }

    // Calculate mean
    mean = sum / n;

    // Sort array for median and mode
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (d[j] > d[j + 1]) {
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }

    // Calculate median
    if (n % 2 == 0)
        median = (d[n / 2] + d[n / 2 - 1]) / 2.0;
    else
        median = d[n / 2];

    // Calculate mode
    int maxcount = 1, count, mode = d[0];
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (d[i] == d[j])
                count++;
        }
        if (count > maxcount) {
            maxcount = count;
            mode = d[i];
        }
    }

    // Output results
    printf("The Mean of the array is %.2f\n", mean);
    printf("The Median of the array is %.2f\n", median);
    printf("The Mode of the array is %d and it appears %d times\n", mode, maxcount);

    return 0;
}
