#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesar_cipher(char *text, int shift) {
    int i = 0;
    while (text[i] != '\0') {
        if (isalpha(text[i])) {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = base + (text[i] - base + shift) % 26;
        }
        i++;
    }
}

int main() {
    char message[100];
    int shift_amount;

    printf("Enter a message to encrypt: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0'; // Remove trailing newline

    printf("Enter the shift amount (an integer): ");
    scanf("%d", &shift_amount);

    // Ensure shift is positive for the modulo operation to work as expected
    shift_amount = (shift_amount % 26 + 26) % 26;

    caesar_cipher(message, shift_amount);

    printf("Encrypted message: %s\n", message);

    return 0;
}