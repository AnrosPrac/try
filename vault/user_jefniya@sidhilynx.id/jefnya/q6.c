#include <stdio.h>

#define PRINT_DETAILS(name, roll_no, department) \
    printf("Name: %s\n", name); \
    printf("Roll Number: %s\n", roll_no); \
    printf("Department: %s\n", department)

int main() {
    PRINT_DETAILS("Your Name", "Your Roll Number", "Your Department");
    return 0;
}