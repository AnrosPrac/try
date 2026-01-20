#include <stdio.h>

int sumArray(int *arr, int n) 
{
    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += *(arr + i); 
    }
    return sum;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int total = sumArray(numbers, 5);
    printf("Sum = %d\n", total);
    return 0;
}