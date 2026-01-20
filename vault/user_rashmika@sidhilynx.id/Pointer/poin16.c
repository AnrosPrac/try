#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *arr;
    int i;

    arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < 3; i++) {
        arr[i] = (i + 1) * 10;
    }
    printf("Initial 3 integers:\n");
    for (i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    arr = (int *)realloc(arr, 5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    arr[3] = 40;
    arr[4] = 50;

    printf("\nAfter reallocating to 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);

    return 0;
}