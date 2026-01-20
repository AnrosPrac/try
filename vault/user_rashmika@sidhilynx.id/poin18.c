#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Average of the numbers = %d\n", sum/n);

    free(arr);

    return 0;
}
