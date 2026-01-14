#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
   rn mid;
        }

        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50, 70, 80, 90};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int key1 = 70;
    int key2 = 60;
    int index1 = binarySearch(numbers, n, key1);
    int index2 = binarySearch(numbers, n, key2);

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
