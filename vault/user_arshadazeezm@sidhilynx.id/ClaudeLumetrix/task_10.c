#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    struct Book *bookPtr;

    bookPtr = (struct Book *)malloc(sizeof(struct Book));

    if (bookPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(bookPtr->title, sizeof(bookPtr->title), stdin);
    bookPtr->title[strcspn(bookPtr->title, "\n")] = 0; // Remove newline character

    printf("Enter author name: ");
    fgets(bookPtr->author, sizeof(bookPtr->author), stdin);
    bookPtr->author[strcspn(bookPtr->author, "\n")] = 0; // Remove newline character

    printf("Enter publication year: ");
    scanf("%d", &bookPtr->year);

    printf("\nBook Details:\n");
    printf("Title: %s\n", bookPtr->title);
    printf("Author: %s\n", bookPtr->author);
    printf("Year: %d\n", bookPtr->year);

    free(bookPtr);
    bookPtr = NULL;

    return 0;
}