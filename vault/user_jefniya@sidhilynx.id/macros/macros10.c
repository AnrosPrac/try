#include <stdio.h>

#define INC(x) ((x)+1)

int inc_func(int *p) {
    return ++(*p);
}

int main() {
    int i = 1;
    int a = INC(i++);
    printf("After macro: i = %d, result a = %d\n", i, a);

    int j = 1;
    int b = inc_func(&j);
    printf("After function: j = %d, result b = %d\n", j, b);

    return 0;
}
