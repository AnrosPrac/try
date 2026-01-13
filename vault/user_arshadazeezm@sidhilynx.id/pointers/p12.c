#include <stdio.h>
#include <string.h>  // needed for strlen

#define MAXLENGTH 25

// Function to concatenate two strings using pointers
void String_concatenate(char *str1, char *str2, char *conc) {
    int i = 0;

    while (*str1 != '\0') {
        conc[i] = *str1;
        i++;
        str1++;
    }

    while (*str2 != '\0') {
        conc[i] = *str2;
        i++;
        str2++;
    }

    conc[i] = '\0'; 
}


void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    char str1[MAXLENGTH];
    char str2[MAXLENGTH];
    char conc[MAXLENGTH * 2];

    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    trim_newline(str1);

    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2), stdin);
    trim_newline(str2);

    printf("First String : %s\n", str1);
    printf("Second String : %s\n", str2);

    String_concatenate(str1, str2, conc);

    printf("Concatenated String : %s\n", conc);

    return 0;
}
