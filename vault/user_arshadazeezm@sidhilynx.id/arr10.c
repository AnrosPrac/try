#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int strigLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int stringacsLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int main() {
    char myString[] = "Programming is fun";
    int len = stringLength(myString);

    printf("The string is: %s\n", myString);
    printf("The length of the string is: %d\n", len);

    return 0;
}
