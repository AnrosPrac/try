#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char fName1[100], fName2[100];
    int c1, c2;
    int same = 1;

    printf("Enter first file name: ");
    scanf("%s", fName1);
    printf("Enter second file name: ");
    scanf("%s", fName2);

    f1 = fopen(fName1, "rb");
    f2 = fopen(fName2, "rb");
    if (f1 == NULL || f2 == NULL) {
        printf("Cannot open files\n");
        if (f1) fclose(f1);
        if (f2) fclose(f2);
        return 1;
    }

    while (1) {
        c1 = fgetc(f1);
        c2 = fgetc(f2);
        if (c1 != c2) {
            same = 0;
            break;
        }
        if (c1 == EOF || c2 == EOF)
            break;
    }

    fclose(f1);
    fclose(f2);

    if (same && c1 == EOF && c2 == EOF)
        printf("Files are identical\n");
    else
        printf("Files are different\n");

    return 0;
}
