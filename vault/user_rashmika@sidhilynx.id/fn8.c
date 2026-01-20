#include <stdio.h>
void printNumbers(int current, int N) 
{
    if (current > N)
        return;

    printf("%d ", current);
    printNumbers(current + 1, N);
}

int main()
{
    int N;

    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Numbers from 1 to %d:\n", N);
    printNumbers(1, N);

    return 0;
}