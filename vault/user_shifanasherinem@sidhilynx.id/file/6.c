#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
struct Student {
char name[MAX_NAME_LENGTH];
int rollNumber;
float marks;
};
int main() {
struct Student students[MAX_STUDENTS];
int n, i;
FILE *file;
printf("Enter the number of students: ");
scanf("%d", &n);
if (n > MAX_STUDENTS) {
printf("Maximum number of students exceeded.\n");
return 1;
}
for (i = 0; i < n; i++) {
printf("Enter details for student %d:\n", i + 1);
printf("Name: ");
scanf("%s", students[i].name);
printf("Roll Number: ");
scanf("%d", &students[i].rollNumber);
printf("Marks: ");
scanf("%f", &students[i].marks);
}
file = fopen("students.dat", "wb");
if (file == NULL) {
printf("Error opening file for writing.\n");
return 1;
}
fwrite(students, sizeof(struct Student), n, file);
fclose(file);
printf("\nStudent Records:\n");
file = fopen("students.dat", "rb");
if (file == NULL) {
printf("Error opening file for reading.\n");
return 1;
}
fread(students, sizeof(struct Student), n, file);
fclose(file);
for (i = 0; i < n; i++) {
printf("Name: %s\n", students[i].name);
printf("Roll Number: %d\n", students[i].rollNumber);
printf("Marks: %.2f\n\n", students[i].marks);
}
return 0;
}