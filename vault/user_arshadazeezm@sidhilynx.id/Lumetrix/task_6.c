enum WeekDay {
    MON, TUE, WED, THU, FRI, SAT, SUN
};

#include <stdio.h>

int main() {
    enum WeekDay day = FRI;
    printf("%d\n", day);
    return 0;
}