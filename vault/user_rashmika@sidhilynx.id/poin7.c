#include <stdio.h>
void reverseArray(int *arr, int size) 
{
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}