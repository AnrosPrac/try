#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    int len = stringLength(str);
    printf("Length of the string: %d\n", len);

    return 0;
}
