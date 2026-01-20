#include <stdio.h>
#include <time.h>

int main()
{
    int d, m, y;
    int years;

    printf("Enter birth date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    time_t now = time(NULL);
    struct tm today = *localtime(&now);

    int td = today.tm_mday;
    int tm = today.tm_mon + 1;
    int ty = today.tm_year + 1900;

    years = ty - y;

    if (tm < m || (tm == m && td < d)) {
        years--;
    }

    printf("Age: %d\n", years);
    return 0;
}