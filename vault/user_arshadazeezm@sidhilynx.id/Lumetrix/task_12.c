#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

void addStudent(Student *students, int *count);
void displayStudents(const Student *students, int count);
Student *findStudentByRoll(Student *students, int count, int roll);
void updateStudent(Student *students, int count);
void deleteStudent(Student *students, int *count);

int main() {
    Student studentDatabase[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        printf("\n--- Student Database Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Find Student by Roll Number\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n'); 

        switch (choice) {
            case 1:
                addStudent(studentDatabase, &studentCount);
                break;
            case 2:
                displayStudents(studentDatabase, studentCount);
                break;
            case 3: {
                int roll;
                printf("Enter roll number to find: ");
                scanf("%d", &roll);
                while (getchar() != '\n');
                Student *found = findStudentByRoll(studentDatabase, studentCount, roll);
                if (found) {
                    printf("\nStudent Found:\n");
                    printf("Name: %s\n", found->name);
                    printf("Roll Number: %d\n", found->rollNumber);
                    printf("Marks: %.2f\n", found->marks);
                } else {
                    printf("Student with roll number %d not found.\n", roll);
                }
                break;
            }
            case 4:
                updateStudent(studentDatabase, studentCount);
                break;
            case 5:
                deleteStudent(studentDatabase, &studentCount);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

void addStudent(Student *students, int *count) {
    if (*count < MAX_STUDENTS) {
        printf("\nEnter student details:\n");
        printf("Name: ");
        fgets(students[*count].name, sizeof(students[*count].name), stdin);
        students[*count].name[strcspn(students[*count].name, "\n")] = 0; 

        printf("Roll Number: ");
        scanf("%d", &students[*count].rollNumber);
        while (getchar() != '\n');

        printf("Marks: ");
        scanf("%f", &students[*count].marks);
        while (getchar() != '\n');

        (*count)++;
        printf("Student added successfully.\n");
    } else {
        printf("Database is full. Cannot add more students.\n");
    }
}

void displayStudents(const Student *students, int count) {
    if (count == 0) {
        printf("No students in the database.\n");
        return;
    }
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; ++i) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Roll Number: %d\n", students[i].rollNumber);
        printf("  Marks: %.2f\n", students[i].marks);
    }
}

Student *findStudentByRoll(Student *students, int count, int roll) {
    for (int i = 0; i < count; ++i) {
        if (students[i].rollNumber == roll) {
            return &students[i];
        }
    }
    return NULL;
}

void updateStudent(Student *students, int count) {
    int roll;
    printf("Enter roll number of the student to update: ");
    scanf("%d", &roll);
    while (getchar() != '\n');

    Student *studentToUpdate = findStudentByRoll(students, count, roll);

    if (studentToUpdate) {
        printf("Enter new details for the student:\n");
        printf("New Name: ");
        fgets(studentToUpdate->name, sizeof(studentToUpdate->name), stdin);
        studentToUpdate->name[strcspn(studentToUpdate->name, "\n")] = 0;

        printf("New Marks: ");
        scanf("%f", &studentToUpdate->marks);
        while (getchar() != '\n');

        printf("Student with roll number %d updated successfully.\n", roll);
    } else {
        printf("Student with roll number %d not found.\n", roll);
    }
}

void deleteStudent(Student *students, int *count) {
    int roll;
    printf("Enter roll number of the student to delete: ");
    scanf("%d", &roll);
    while (getchar() != '\n');

    int foundIndex = -1;
    for (int i = 0; i < *count; ++i) {
        if (students[i].rollNumber == roll) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < *count - 1; ++i) {
            students[i] = students[i + 1];
        }
        (*count)--;
        printf("Student with roll number %d deleted successfully.\n", roll);
    } else {
        printf("Student with roll number %d not found.\n", roll);
    }
}