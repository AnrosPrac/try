#include <stdio.h>

int main() {
#ifdef DEBUG
    printf("Debug mode ON\n");
#endif
    return 0;
}