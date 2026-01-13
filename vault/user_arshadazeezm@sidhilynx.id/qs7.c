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

    result = a - b * c + a / c;

    printf("The calculation is: a - b * c + a / c\n");
    printf("Where a=%d, b=%d, c=%d\n", a, b, c);
    printf("RESULT : %d\n", result);

    return 0;
}