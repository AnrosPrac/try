#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))  
int main() 
{
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = MAX(num1, num2);
    
    printf("The larger number is: %d\n", max);

    return 0;

}