#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char title[40];
    int issued;
};
void addBook() {
    struct Book b;
    FILE *fp = fopen("file/library.txt", "a");
    printf("Book ID: ");
    scanf("%d", &b.id);
    printf("Book Title: ");
    scanf(" %s", b.title);
    b.issued = 0;
    fprintf(fp, "%d %s %d\n", b.id, b.title, b.issued);
    fclose(fp);
    printf("Book added successfully.\n");
}
void issueBook() {
    int id;
    struct Book b;
    printf("Enter book ID to issue: ");
    scanf("%d", &id);
    FILE *fp = fopen("file/library.txt", "r");
    FILE *temp = fopen("file/temp.txt", "w");
    while (fscanf(fp, "%d %s %d", &b.id, b.title, &b.issued) != EOF) {
        if (b.id == id && b.issued == 0)
            b.issued = 1;
        fprintf(temp, "%d %s %d\n", b.id, b.title, b.issued);
    }
    fclose(fp);
    fclose(temp);
    remove("file/library.txt");
    rename("file/temp.txt", "file/library.txt");
    printf("Book issued successfully.\n");
}
void returnBook() {
    int id;
    struct Book b;
    printf("Enter book ID to return: ");
    scanf("%d", &id);
    FILE *fp = fopen("file/library.txt", "r");
    FILE *temp = fopen("file/temp.txt", "w");
    while (fscanf(fp, "%d %s %d", &b.id, b.title, &b.issued) != EOF) {
        if (b.id == id && b.issued == 1)
            b.issued = 0;
        fprintf(temp, "%d %s %d\n", b.id, b.title, b.issued);
    }
    fclose(fp);
    fclose(temp);
    remove("file/library.txt");
    rename("file/temp.txt", "file/library.txt");
    printf("Book returned successfully.\n");
}

int main() {
    int ch;
    while (1) {
        printf("\n1. Add Book\n2. Issue Book\n3. Return Book\n4. Exit\n");
        scanf("%d", &ch);
        if (ch == 1) addBook();
        else if (ch == 2) issueBook();
        else if (ch == 3) returnBook();
        else break;
    }
}
