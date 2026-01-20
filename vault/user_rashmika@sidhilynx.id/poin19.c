#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int size = 1;
    char ch;
    int i = 0;

    str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string :\n");

    while ((ch = getchar()) != '\n') {
        str[i++] = ch;
        size++;
        str = (char *)realloc(str, size * sizeof(char));
        if (str == NULL) {
            printf("Memory reallocation failed!\n");
            return 1;
        }
    }

    str[i] = '\0'; 
    char *p = str + i - 1;
    printf("Reversed string: ");
    while (p >= str) {
        putchar(*p);
        p--;
    }
    printf("\n");

   
    free(str);

    return 0;
}