#include <stdio.h>

int main()
{
    int a, b, c;
    int result;

    printf("Enter the value for 'a': \n");
    scanf("%d", &a);

    printf("Enter the value for 'b': \n");
    scanf("%d", &b);

    printf("Enter the value for 'c': \n");
    scanf("%d", &c);

    result = a + b * c / a % b;

    printf("The calculation is: a + b * c / a %% b\n");
    printf("Result is %d when a is %d, b is %d and c is %d\n", result, a, b, c);

    return 0;
}
