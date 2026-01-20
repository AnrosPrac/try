#include <stdio.h>

int main()
{
    int limit, val, mean, j;
    int total = 0;
    printf("Enter how many values: \n");
    scanf("%d", &limit);
    for (j = 1; j <= limit; j++) {
        printf("Enter value %d : \n", j);
        scanf("%d", &val);
        total += val;
    }
    mean = total / limit;
    printf("Sum = %d and Average = %d", total, mean);
    return 0;
}