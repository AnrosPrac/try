#include <stdio.h>

#define ISUPPER(c) ((c) >= 'A' && (c) <= 'Z')

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ISUPPER(ch))
        printf("It is an uppercase letter.\n");
    else
        printf("It is not an uppercase letter.\n");

    return 0;
}
