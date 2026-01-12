#include <stdio.h>

int main() {
#ifdef DEBUG
    printf("Debug mode ON\n");
#else
    printf("Debug mode OFF\n");
#endif
    return 0;
}
