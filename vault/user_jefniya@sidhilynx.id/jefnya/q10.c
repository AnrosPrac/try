#include <stdio.h>

#define INC(x) ((x)++)

int increment_function(int val) {
    return ++val;
}

int main() {
    int i = 5;
    int j = 5;

    printf("Using INC(i++):\n");
    int result_macro = INC(i++);
    printf("Result of INC(i++): %d\n", result_macro);
    printf("Value of i after INC(i++): %d\n\n", i);

    printf("Using increment_function(j++):\n");
    int result_function = increment_function(j++);
    printf("Result of increment_function(j++): %d\n", result_function);
    printf("Value of j after increment_function(j++): %d\n", j);

    return 0;
}