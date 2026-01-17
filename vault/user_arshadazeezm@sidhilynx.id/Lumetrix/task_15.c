#include <stdio.h>
#include <string.h>

// Define a structure
struct Record {
    int id;
    char name[50];
    float value;
};

// Function to search and display details using a pointer to a structure array
void searchAndDisplay(struct Record* arr, int size, int searchId) {
    for (int i = 0; i < size; i++) {
        if (arr[i].id == searchId) {
            printf("Record Found:\n");
            printf("  ID: %d\n", arr[i].id);
            printf("  Name: %s\n", arr[i].name);
            printf("  Value: %.2f\n", arr[i].value);
            return; // Exit after finding the first match
        }
    }
    printf("Record with ID %d not found.\n", searchId);
}

int main() {
    // Create an array of structures
    struct Record records[] = {
        {101, "Alice", 123.45},
        {102, "Bob", 67.89},
        {103, "Charlie", 99.99},
        {104, "David", 50.00}
    };

    int numRecords = sizeof(records) / sizeof(records[0]);
    int idToFind = 103;

    // Call the function with a pointer to the array
    searchAndDisplay(records, numRecords, idToFind);

    idToFind = 105;
    searchAndDisplay(records, numRecords, idToFind);

    return 0;
}