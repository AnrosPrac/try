#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void readStudents(struct Student *s[], int n) {
    for (int i = 0; i < n; i++) {
        s[i] = malloc(sizeof(struct Student));
        printf("\nStudent %d Roll No: ", i+1);
        scanf("%d", &s[i]->rollNo);
        printf("Name: ");
        scanf(" %[^\n]", s[i]->name);
        printf("Marks: ");
        scanf("%f", &s[i]->marks);
    }
}

void searchStudent(struct Student *s[], int n, int rollNo) {
    for (int i = 0; i < n; i++)
        if (s[i]->rollNo == rollNo) {
            printf("\nFound: Roll No=%d, Name=%s, Marks=%.2f\n",
                   s[i]->rollNo, s[i]->name, s[i]->marks);
            return;
        }
    printf("\nStudent with Roll No %d not found.\n", rollNo);
}

int main() {
    struct Student *students[3];
    int rollNo;

    readStudents(students, 3);
    printf("\nEnter Roll No to search: ");
    scanf("%d", &rollNo);
    searchStudent(students, 3, rollNo);

    for (int i = 0; i < 3; i++) free(students[i]);
    return 0;
}