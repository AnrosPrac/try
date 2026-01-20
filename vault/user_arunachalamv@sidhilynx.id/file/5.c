#include <stdio.h>
int main() {
    FILE *f1, *f2;
   int c1, c2;   // use int for fgetc return value
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
if (f1 == NULL || f2 == NULL) {
        printf("Could not open one of the files.\n");
        return 1;
    }
while (1) {
        c1 = fgetc(f1);
        c2 = fgetc(f2);

        if (c1 == EOF && c2 == EOF) {
            printf("Identical\n");
            break;
        }
        if (c1 != c2) {
            printf("Different\n");
            break;
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}