#include <stdio.h>

int main()
{
    int a, b, c, sum, avg;

    printf("Enter the first subject mark: \n");
    scanf("%d", &a);
    printf("Enter the second subject mark: \n");
    scanf("%d", &b);
    printf("Enter the third subject mark: \n");
    scanf("%d", &c);

    sum = a + b + c;
    avg = sum / 3;

    printf("Sum: %d and Average: %d\n", sum, avg);

    if (avg >= 50) {
        printf("You are pass!\n");
        if (avg >= 90) {
            printf("A rank!\n");
        } else if (avg >= 75) {
            printf("B rank!\n");
        } else if (avg >= 50) {
            printf("C rank!\n");
        }
    } else {
        printf("You are fail!\n");
    }

    return 0;
}