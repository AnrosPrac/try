#include <stdio.h>
int main() {
    FILE *file = fopen("file/append_data.txt", "a");
    if(file == NULL) {
        printf("Unable to open append_data.txt!\n");
        return 1;
    }
    fprintf(file, "\nNew appended line added.");
    fclose(file);
    printf("Append successful.\n");
    return 0;
}
