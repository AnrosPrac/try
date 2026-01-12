#include <stdio.h>

int main() {
    
    int n, sum = 0;
    
    printf("Enter the number of elements inside the array: ");
    // Ensure n is read successfully
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for the number of elements.\n");
        return 1; // Return with an error code
    }
    
    // Declares an array of size n (valid indices are 0 to n-1)
    int arr[n]; 
    
    // Reading Loop: Should go from i = 0 up to i < n (i.e., i <= n - 1)
    for (int i = 0; i < n; i++) {
        printf("Enter the element at %d th position: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Summation Loop: Should also go from i = 0 up to i < n
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    
    printf("The sum is %d\n", sum);

    return 0;
}