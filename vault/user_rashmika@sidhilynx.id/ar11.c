#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0; 
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}

int main() 
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') str1[len1] = '\0';
        len1++;
    }
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') str2[len2] = '\0';
        len2++;
    }

    if (compareStrings(str1, str2))
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}