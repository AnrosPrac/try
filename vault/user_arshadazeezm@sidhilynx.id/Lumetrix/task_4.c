#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int main() {
    Date today;
    today.day = 26;
    today.month = 10;
    today.year = 2023;

    printf("%d/%d/%d\n", today.day, today.month, today.year);

    return 0;
}