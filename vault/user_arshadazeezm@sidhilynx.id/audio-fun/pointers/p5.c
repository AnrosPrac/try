#include <stdio.h>

int array_sum(int *arr, int size) {
    int sum=0;
    for (int i = 0; i < size; i++) {
       sum = sum + *(arr+i);
    }
return sum;
}


int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int array[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

   int res = array_sum(array,n);
   printf("%d",res);

    return 0;
}