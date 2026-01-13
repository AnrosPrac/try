#include <stdio.h>

void main()
{
    int a, b, c,sm;
    printf("Enter the first number : \n");
    scanf("%d", &a);
    printf("Enter the second number : \n");
    scanf("%d", &b);
    printf("Enter the third number : \n");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        
        printf("%d is the greatest! \n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the greatest! \n", b);
    } else {
        printf("%d is the greatest! \n", c);
    }
    
    if (a <= b && a <= c) {
        
        printf("%d is the smallest! \n", a);
    } else if (b <= a && b <= c) {
        printf("%d is the smallest! \n", b);
    } else {
        printf("%d is the smallest! \n", c);
    }
}