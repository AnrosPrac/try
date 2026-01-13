#include <stdio.h>
#define MAXLENGTH 25

void string_copy(char *str1, char *str2) {
    int i = 0;

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}
int main() {
    char str1[MAXLENGTH];
    char str2[MAXLENGTH];
    printf("Enter the string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Original: %s", str1);
    string_copy(str1, str2);
    printf("Copied: %s", str2);
    return 0;
}
