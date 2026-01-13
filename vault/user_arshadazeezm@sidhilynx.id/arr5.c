#include <stdio.h>
#include <limits.h>

void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float findMean(int arr[], int n) {
    if (n <= 0) {
        return 0.0f;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

float findMedian(int arr[], int n) {
    if (n <= 0) {
        return 0.0f;
    }
    sortArray(arr, n);
    if (n % 2 != 0) {
        return (float)arr[n / 2];
    } else {
        return (float)(arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
    }
}

void findModes(int arr[], int n) {
    if (n == 0) {
        printf("The array is empty. No mode to calculate.\n");
        return;
    }

    int max_val = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    
    if (max_val < 0) {
        printf("Mode calculation skipped: Simple frequency array method is not suitable for negative numbers.\n");
        return;
    }

    int freq_size = max_val + 1;
    int frequency[freq_size];
    
    for (int i = 0; i < freq_size; i++) {
        frequency[i] = 0;
    }

    int max_freq = 0;
    for (int i = 0; i < n; i++) {
        int element = arr[i];
        frequency[element]++;
        
        if (frequency[element] > max_freq) {
            max_freq = frequency[element];
        }
    }
    
    if (max_freq <= 1) {
        printf("The array has no distinct mode (all elements appear at most once).\n");
        return;
    }

    printf("The mode(s) with frequency %d is/are: ", max_freq);
    for (int i = 0; i < freq_size; i++) {
        if (frequency[i] == max_freq) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements inside the array: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input for number of elements.\n");
        return 1;
    }
    
    if (n == 0) {
        printf("Array size is zero. Exiting.\n");
        return 0;
    }
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter the element at %d th position: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for array element. Exiting.\n");
            return 1;
        }
    }
    
    printf("\nInput Array: {");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("}\n");

    int arr_for_mode[n]; 
    for(int i=0; i<n; i++) arr_for_mode[i] = arr[i];
    
    float mean_val = findMean(arr, n);
    printf("The mean of the given array is %.2f\n", mean_val);
    
    float median_val = findMedian(arr, n);
    printf("The median of the given array is %.2f\n", median_val);
    
    findModes(arr_for_mode, n);
    
    return 0;
}