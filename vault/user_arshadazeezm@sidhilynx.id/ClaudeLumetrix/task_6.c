#include <stdio.h>

enum DayOfWeek {
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main() {
    enum DayOfWeek today = FRI;
    printf("%d\n", today);
    return 0;
}