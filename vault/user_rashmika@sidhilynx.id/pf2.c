#include <stdio.h>
int main() {
    FILE *source = fopen("file/source.txt", "r");
    FILE *backup = fopen("file/target_backup.txt", "w");
    if(source == NULL || backup == NULL) {
        printf("Unable to open files for copy!\n");
        return 1;
    }
    char c;
    while((c = fgetc(source)) != EOF)
        fputc(c, backup);
    fclose(source);
    fclose(backup);
    printf("Copy completed.\n");
    return 0;
}