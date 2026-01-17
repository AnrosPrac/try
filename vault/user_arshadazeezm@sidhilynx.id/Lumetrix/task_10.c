#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    struct Book *book_ptr;

    book_ptr = (struct Book *)malloc(sizeof(struct Book));

    if (book_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(book_ptr->title, sizeof(book_ptr->title), stdin);
    book_ptr->title[strcspn(book_ptr->title, "\n")] = 0; // Remove trailing newline

    printf("Enter book author: ");
    fgets(book_ptr->author, sizeof(book_ptr->author), stdin);
    book_ptr->author[strcspn(book_ptr->author, "\n")] = 0; // Remove trailing newline

    printf("Enter publication year: ");
    scanf("%d", &book_ptr->year);

    printf("\nBook Details:\n");
    printf("Title: %s\n", book_ptr->title);
    printf("Author: %s\n", book_ptr->author);
    printf("Year: %d\n", book_ptr->year);

    free(book_ptr);

    return 0;
}