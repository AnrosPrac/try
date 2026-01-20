#include <stdio.h>

int main()
{
    int total;
    float score, mean, input, total_sum = 0.0;

    printf("How many students? ");
    scanf("%d", &total);

    for (int k = 1; k <= total; k++) {
        printf("Enter score %d: ", k);
        scanf("%f", &input);
        total_sum += input;
    }

    mean = total_sum / total;
    printf("The average is %.2f\n", mean);

    return 0;
}