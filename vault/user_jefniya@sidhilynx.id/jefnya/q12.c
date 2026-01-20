#include <stdio.h>

#define LOG(msg) printf("Line %d: %s\n", __LINE__, msg)

int main() {
    LOG("Program started.");
    int x = 10;
    LOG("Variable x initialized.");
    if (x > 5) {
        LOG("x is greater than 5.");
    }
    LOG("Program finished.");
    return 0;
}