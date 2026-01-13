#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Student %d name: ", i + 1);
        scanf("%s", s.name);
        printf("Roll: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);
        fwrite(&s, sizeof(struct Student), 1, fp);
    }
    fclose(fp);

    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    printf("\nStudent records:\n");
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}
