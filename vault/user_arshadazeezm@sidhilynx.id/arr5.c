#include <stdio.h>
#include <limits.h>

// Function to find the maximum value in an array
int findMax(int arr[], int n) {
    if (n <= 0) return INT_MIN; 
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Function to find the minimum value in an array
int findMin(int arr[], int n) {
    if (n <= 0) return INT_MAX;
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}


// Function to calculate the mean of an array
float findMean(int arr[], int n) {
    if (n <= 0) return 0.0; 
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

// Function to calculate the median of an array
float findMedian(int arr[], int n) {
    if (n <= 0) return 0.0;
    
    // Sort the array for median calculation
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

    if (n % 2 == 0) {
        return (float)(arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return (float)arr[n / 2];
    }
}

// Function to find the mode(s) of an array
void findModes(int arr[], int n) {
    if (n <= 0) {
        printf("The array is empty, cannot find modes.\n");
        return;
    }

    int min_val = findMin(arr, n);
    int max_val = findMax(arr, n);

    // Check if the simple frequency array method is suitable
    if (min_val < 0) {
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
        // Ensure element is within bounds of frequency array
        if (element >= 0 && element < freq_size) {
            frequency[element]++;
            if (frequency[element] > max_freq) {
                max_freq = frequency[element];
            }
        } else {
            // This case should ideally not happen if min_val >= 0 and max_val is correct
            printf("Warning: Element %d out of expected range for frequency calculation.\n", element);
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
        printf("Enter the element at %d th position: ", i + 1); // Display 1-based index
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

    // Create a copy of the array for median and mode calculations as they modify the array
    int arr_copy[n];
    for(int i = 0; i < n; i++) {
        arr_copy[i] = arr[i];
    }

    float mean_val = findMean(arr, n);
    printf("The mean of the given array is %.2f\n", mean_val);

    float median_val = findMedian(arr_copy, n); // Use copy for median
    printf("The median of the given array is %.2f\n", median_val);

    findModes(arr_copy, n); // Use copy for modes

    return 0;
}