#include <stdio.h>
#define SWAP(a, b, temp) temp = a; a = b; b = temp;
int main() 
{
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    SWAP(num1, num2, temp)

    printf("After swapping : num1 = %d, num2 = %d\n", num1, num2);

    return 0;

}