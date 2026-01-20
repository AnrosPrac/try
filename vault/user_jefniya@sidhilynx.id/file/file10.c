#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
    char issuedTo[50];
};

void addBook() {
    FILE *fp = fopen("library.dat", "ab");
    struct Book b;
    if (!fp) {
        printf("Cannot open file\n");
        return;
    }
    printf("Book ID: ");
    scanf("%d", &b.id);
    printf("Title: ");
    scanf("%s", b.title);
    printf("Author: ");
    scanf("%s", b.author);
    b.issued = 0;
    b.issuedTo[0] = '\0';
    fwrite(&b, sizeof(struct Book), 1, fp);
    fclose(fp);
}

void listBooks() {
    FILE *fp = fopen("library.dat", "rb");
    struct Book b;
    if (!fp) {
        printf("No data\n");
        return;
    }
    printf("Books:\n");
    while (fread(&b, sizeof(struct Book), 1, fp) == 1) {
        printf("ID: %d, Title: %s, Author: %s, ", b.id, b.title, b.author);
        if (b.issued)
            printf("Issued to: %s\n", b.issuedTo);
        else
            printf("Available\n");
    }
    fclose(fp);
}

void issueBook() {
    FILE *fp = fopen("library.dat", "rb+");
    struct Book b;
    int id;
    char name[50];
    long pos;
    int found = 0;

    if (!fp) {
        printf("No data\n");
        return;
    }

    printf("Enter book ID to issue: ");
    scanf("%d", &id);
    printf("Issue to (name): ");
    scanf("%s", name);

    while (fread(&b, sizeof(struct Book), 1, fp) == 1) {
        if (b.id == id) {
            if (b.issued) {
                printf("Book already issued to %s\n", b.issuedTo);
            } else {
                b.issued = 1;
                strcpy(b.issuedTo, name);
                pos = ftell(fp) - (long)sizeof(struct Book);
                fseek(fp, pos, SEEK_SET);
                fwrite(&b, sizeof(struct Book), 1, fp);
                printf("Book issued\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) printf("Book not found\n");
    fclose(fp);
}

void returnBook() {
    FILE *fp = fopen("library.dat", "rb+");
    struct Book b;
    int id;
    long pos;
    int found = 0;

    if (!fp) {
        printf("No data\n");
        return;
    }

    printf("Enter book ID to return: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(struct Book), 1, fp) == 1) {
        if (b.id == id) {
            if (!b.issued) {
                printf("Book is not issued\n");
            } else {
                b.issued = 0;
                b.issuedTo[0] = '\0';
                pos = ftell(fp) - (long)sizeof(struct Book);
                fseek(fp, pos, SEEK_SET);
                fwrite(&b, sizeof(struct Book), 1, fp);
                printf("Book returned\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) printf("Book not found\n");
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add book\n2. List books\n3. Issue book\n4. Return book\n5. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addBook(); break;
            case 2: listBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
