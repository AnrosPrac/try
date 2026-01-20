#include <stdio.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};
int main() {
    struct Student s;
    FILE *fp = fopen("students.txt", "w");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);
    fp = fopen("students.txt", "r");
    fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks);
    fclose(fp);
    printf("Stored Record:\n");
    printf("%s %d %.2f\n", s.name, s.roll, s.marks);
    return 0;
}
