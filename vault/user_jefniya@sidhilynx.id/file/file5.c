#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char c1, c2;

    f1 = fopen("n1.txt", "w");
    fprintf(f1, "Jefniya");
    fclose(f1);

    f2 = fopen("n2.txt", "w");
    fprintf(f2, "Giflina");
    fclose(f2);

    f1 = fopen("n1.txt", "r");
    f2 = fopen("n2.txt", "r");

    if (f1 == NULL || f2 == NULL) {
        printf("File error\n");
        return 1;
    }

    int identical = 1;

    while (1) {
        c1 = fgetc(f1);
        c2 = fgetc(f2);

        if (c1 != c2) {
            identical = 0;
            break;
        }

        if (c1 == EOF || c2 == EOF)
            break;
    }

    fclose(f1);
    fclose(f2);

    if (identical)
        printf("Files are identical\n");
    else
        printf("Files are different\n");

    return 0;
}
