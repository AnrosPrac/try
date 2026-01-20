#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Hello, this is a sample message.\n");
    fclose(file);

    printf("Message written to output.txt successfully.\n");
    return 0;
}
