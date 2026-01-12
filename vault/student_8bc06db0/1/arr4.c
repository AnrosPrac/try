#include <stdio.h>

int main() {
    
    int n, even = 0, odd = 0;
    
    printf("Enter the number of elements inside the array: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter the element at %d th position: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Terminating.\n");
            return 1;
        }
    }
    
    for (int i = 0; i < n; i++) {
      
        if (arr[i] % 2 == 0) {
            even++;
        }
        
        else {
            odd++;
        }
    }
    
    printf("Total even numbers are %d and Total odd numbers are %d\n", even, odd);
    
    return 0;
}