#include <stdio.h>

int compareStrings(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') {
            return 0;
        }
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";
    char str4[] = "hell";

    int result1 = compareStrings(str1, str2);
    int result2 = compareStrings(str1, str3);
    int result3 = compareStrings(str1, str4);

    printf("Comparing \"%s\" and \"%s\": ", str1, str2);
    if (result1 == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal (Result: %d)\n", result1);
    }

    printf("Comparing \"%s\" and \"%s\": ", str1, str3);
    if (result2 == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal (Result: %d)\n", result2);
    }

    printf("Comparing \"%s\" and \"%s\": ", str1, str4);
    if (result3 == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal (Result: %d)\n", result3);
    }
    
    return 0;
}