#include <stdio.h>

int main() {
    char *names[] = {
        "Arshad","Hari","jefnya","Rashmika"
    };

    int numNames = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
