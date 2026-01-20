#include <stdio.h>
#define SQUARE(x) ((x) * (x))  
int main() 
{

    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = SQUARE(num);

    printf("Square of %d = %d\n", num, result);

    return 0;

}