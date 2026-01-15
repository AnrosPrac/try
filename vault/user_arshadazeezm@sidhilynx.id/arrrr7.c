#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) 

    if (index1 != -1) {
        printf("Element %d found at index %d.\n", key1, index1);
    } else {
        printf("Element %d not found in the array.\n", key1);
    }

    if (index2 != -1) {
        printf("Element %d found at index %d.\n", key2, index2);
    } else {
        printf("Element %d not found in the array.\n", key2);
    }

    return 0;
}
