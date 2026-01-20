#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    
    fp = fopen("student.txt", "w");
    
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);

    fp = fopen("student.txt", "r");

    fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    fclose(fp);

    return 0;
}
