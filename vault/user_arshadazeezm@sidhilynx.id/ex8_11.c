#include <stdio.h>

int find_sum_of_digits(int n) {
    if (n < 0) {
        n = -n;
    }
    
    if (n == 0) {
        return 0; 
    }
    
    return (n % 10) + find_sum_of_digits(n / 10);
}

int main() {
    int a;
    printf("Enter a number to find the sum of its digits: \n");
    
    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    int result = find_sum_of_digits(a);
    printf("The sum of the digits of %d is: %d\n", a, result);
    
    return 0;
}