#include <stdio.h>

long long factorial(int n);

int main()
{
    int a;
    printf("Enter a non-negative integer to find the factorial! \n");
    
    if (scanf("%d", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    long long fact = factorial(a); 
    
    if (fact == -1) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %lld\n", a, fact);
    }
    
    return 0;
}

long long factorial(int n){
    long long factorial_number = 1;
    
    if(n < 0){
        return -1;
    }
    else{
        for(int i = 2; i <= n; i++){
            factorial_number = factorial_number * i;
        }
        return factorial_number;
    }
}