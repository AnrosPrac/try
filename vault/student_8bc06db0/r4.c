#include <stdio.h>

int main() {
    char letter = 'a';

    printf("Alphabets from 'a' to 'z':\n");
    
    while (letter <= 'z') {
        printf("%c ", letter);
        letter++;
    }

    printf("\n");

    return 0;
}
