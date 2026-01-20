#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int roll_no;
    char name[50];
    float marks[5];
    float average_marks;
} Student;

void calculate_average(Student *s);
void display_student(const Student *s);
void add_student(Student students[], int *num_students);
void display_all_students(const Student students[], int num_students);
void search_student_by_roll(const Student students[], int num_students, int roll_no);
void sort_students_by_average(Student students[], int num_students);

void calculate_average(Student *s) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += s->marks[i];
    }
    s->average_marks = sum / 5.0;
}

void display_student(const Student *s) {
    printf("Roll No: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", s->marks[i]);
    }
    printf("\nAverage Marks: %.2f\n", s->average_marks);
}

void add_student(Student students[], int *num_students) {
    if (*num_students >= MAX_STUDENTS) {
        printf("Database is full. Cannot add more students.\n");
        return;
    }

    Student new_student;

    printf("Enter Roll Number: ");
    scanf("%d", &new_student.roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", new_student.name);

    printf("Enter 5 Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Mark %d: ", i + 1);
        scanf("%f", &new_student.marks[i]);
    }

    calculate_average(&new_student);

    students[*num_students] = new_student;
    (*num_students)++;
    printf("Student added successfully.\n");
}

void display_all_students(const Student students[], int num_students) {
    if (num_students == 0) {
        printf("No students in the database.\n");
        return;
    }

    printf("\n--- Student Database ---\n");
    for (int i = 0; i < num_students; i++) {
        display_student(&students[i]);
        printf("--------------------\n");
    }
}

void search_student_by_roll(const Student students[], int num_students, int roll_no) {
    int found = 0;
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_no == roll_no) {
            printf("\nStudent Found:\n");
            display_student(&students[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with Roll Number %d not found.\n", roll_no);
    }
}

void sort_students_by_average(Student students[], int num_students) {
    if (num_students < 2) {
        return;
    }

    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j].average_marks < students[j + 1].average_marks) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("Students sorted by average marks (descending).\n");
}

int main() {
    Student student_database[MAX_STUDENTS];
    int num_students = 0;
    int choice;
    int roll_to_search;

    do {
        printf("\n--- Student Database Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Sort Students by Average Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student(student_database, &num_students);
                break;
            case 2:
                display_all_students(student_database, num_students);
                break;
            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll_to_search);
                search_student_by_roll(student_database, num_students, roll_to_search);
                break;
            case 4:
                sort_students_by_average(student_database, num_students);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}