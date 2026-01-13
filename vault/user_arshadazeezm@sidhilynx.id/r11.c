#include <stdio.h>

int main()
{
    int i, j;

    for (j = 1; j <= 10; j++)
    {
        for (i = 1; i <= 5; i++)
        {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
