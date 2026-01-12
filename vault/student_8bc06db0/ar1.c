#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int key1 = 40;
    int key2 = 110;

    // Perform the linear search for key1
    int index1 = linearSearch(numbers, n, key1);

    // Check if key1 was found and print the result
    if (index1 != -1) {
        printf("Element %d found at index %d.\n", key1, index1);
    } else {
        printf("Element %d not found in the array.\n", key1);
    }

    // Perform the linear search for key2
    int index2 = linearSearch(numbers, n, key2);

    // Check if key2 was found and print the result
    if (index2 != -1) {
        printf("Element %d found at index %d.\n", key2, index2);
    } else {
        printf("Element %d not found in the array.\n", key2);
    }

    return 0;
}