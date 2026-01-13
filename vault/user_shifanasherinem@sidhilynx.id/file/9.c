#include <stdio.h>
#include <string.h>

struct Customer {
    int accNo;
    char name[50];
    double balance;
};

void addCustomer() {
    FILE *fp = fopen("customers.dat", "ab");
    struct Customer c;
    if (!fp) {
        printf("Cannot open file\n");
        return;
    }
    printf("Account number: ");
    scanf("%d", &c.accNo);
    printf("Name: ");
    scanf("%s", c.name);
    printf("Balance: ");
    scanf("%lf", &c.balance);
    fwrite(&c, sizeof(struct Customer), 1, fp);
    fclose(fp);
}

void displayCustomers() {
    FILE *fp = fopen("customers.dat", "rb");
    struct Customer c;
    if (!fp) {
        printf("No data\n");
        return;
    }
    printf("Customer list:\n");
    while (fread(&c, sizeof(struct Customer), 1, fp) == 1) {
        printf("AccNo: %d, Name: %s, Balance: %.2f\n",
               c.accNo, c.name, c.balance);
    }
    fclose(fp);
}

void searchCustomer() {
    FILE *fp = fopen("customers.dat", "rb");
    struct Customer c;
    int acc, found = 0;
    if (!fp) {
        printf("No data\n");
        return;
    }
    printf("Enter account number to search: ");
    scanf("%d", &acc);
    while (fread(&c, sizeof(struct Customer), 1, fp) == 1) {
        if (c.accNo == acc) {
            printf("Found: AccNo: %d, Name: %s, Balance: %.2f\n",
                   c.accNo, c.name, c.balance);
            found = 1;
            break;
        }
    }
    if (!found) printf("Customer not found\n");
    fclose(fp);
}

void updateBalance() {
    FILE *fp = fopen("customers.dat", "rb+");
    struct Customer c;
    int acc;
    double newBal;
    long pos;
    int found = 0;

    if (!fp) {
        printf("No data\n");
        return;
    }

    printf("Enter account number to update: ");
    scanf("%d", &acc);

    while (fread(&c, sizeof(struct Customer), 1, fp) == 1) {
        if (c.accNo == acc) {
            printf("Current balance: %.2f\n", c.balance);
            printf("Enter new balance: ");
            scanf("%lf", &newBal);
            c.balance = newBal;
            pos = ftell(fp) - (long)sizeof(struct Customer);
            fseek(fp, pos, SEEK_SET);
            fwrite(&c, sizeof(struct Customer), 1, fp);
            found = 1;
            printf("Balance updated\n");
            break;
        }
    }
    if (!found) printf("Customer not found\n");
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add customer\n2. Display customers\n3. Search by account\n4. Update balance\n5. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addCustomer(); break;
            case 2: displayCustomers(); break;
            case 3: searchCustomer(); break;
            case 4: updateBalance(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
