#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0;

    scanf("%s %s", str1, str2);

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            printf("Equal\n");
            return 0;
        }
        i++;
    }

    if (str1[i] > str2[i])
        printf("Greater\n");
    else
        printf("Smaller\n");

    return 0;
}
