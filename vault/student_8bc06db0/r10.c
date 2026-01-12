#include <stdio.h>

int main()
{
    int n, i;
    long long t1 = 0, t2 = 1;
    long long nextTerm;

    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            printf("%lld", t1);
        }
        else if (i == 2)
        {
            printf(", %lld", t2);
        }
        else
        {
            nextTerm = t1 + t2;
            printf(", %lld", nextTerm);
            t1 = t2;
            t2 = nextTerm;
        }
    }
    printf("\n");

    return 0;
}
