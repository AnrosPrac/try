#include <stdio.h>
int main() {
    FILE *fileA = fopen("file/fileA.txt", "r");
    FILE *fileB = fopen("file/fileB.txt", "r");
    if(fileA == NULL || fileB == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    char c1, c2;
    int same = 1;
    while(1) {
        c1 = fgetc(fileA);
        c2 = fgetc(fileB);
        if(c1 != c2) {
            same = 0;
            break;
        }
        if(c1 == EOF || c2 == EOF)
            break;
    }
    fclose(fileA);
    fclose(fileB);
    if(same) 
        printf("Files are identical.\n");
    else 
        printf("Files are not identical.\n");
    return 0;
}
