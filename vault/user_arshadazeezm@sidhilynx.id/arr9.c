#include <stdio.h>
#include <string.h>
#define MAX_NAMES 5
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int count = 0;

    printf("Enter up to %d names:\n", MAX_NAMES);

    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Name %d: ", i + 1);
        if (fgets(names[i], MAX_LENGTH, stdin) == NULL) {
            break;
        }
        
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
        count++;
    }

    printf("\nDisplaying the entered names:\n");
    for (int i = 0; i < count; i++) {
        printf("%d.  %s\n", i + 1, names[i]);
    }

    return 0;
}