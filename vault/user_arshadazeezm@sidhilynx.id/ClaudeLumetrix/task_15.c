#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void searchAndDisplayEmployee(Employee *employees, int size, int searchId) {
    for (int i = 0; i < size; i++) {
        if (employees[i].id == searchId) {
            printf("Employee Found:\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", searchId);
}

int main() {
    Employee empArray[] = {
        {101, "Alice", 50000.0},
        {102, "Bob", 60000.0},
        {103, "Charlie", 55000.0}
    };
    int arraySize = sizeof(empArray) / sizeof(empArray[0]);

    int idToSearch = 102;
    searchAndDisplayEmployee(empArray, arraySize, idToSearch);

    idToSearch = 105;
    searchAndDisplayEmployee(empArray, arraySize, idToSearch);

    return 0;
}