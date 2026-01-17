#include <stdio.h>

union Test {
    int integer_value;
    float float_value;
};

int main() {
    union Test my_union;

    my_union.integer_value = 10;
    printf("After assigning integer: %d\n", my_union.integer_value);
    printf("Value of float_value: %f\n", my_union.float_value);

    my_union.float_value = 25.75;
    printf("After assigning float: %f\n", my_union.float_value);
    printf("Value of integer_value: %d\n", my_union.integer_value);

    return 0;
}