#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main() {
    struct Employee employees[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  ID: %d\n", employees[i].id);
        printf("  Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}