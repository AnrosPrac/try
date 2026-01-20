#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int main() {
    Date myDate;
    myDate.day = 25;
    myDate.month = 12;
    myDate.year = 2023;

    printf("Date: %d/%d/%d\n", myDate.day, myDate.month, myDate.year);

    return 0;
}