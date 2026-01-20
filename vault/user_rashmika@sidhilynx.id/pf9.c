#include <stdio.h>
#include <string.h>
struct Customer {
    int accno;
    char name[30];
    float balance;
};
void addCustomer() {
    struct Customer c;
    FILE *fp = fopen("file/customers.txt", "a");  
    printf("Acc No: ");
    scanf("%d", &c.accno);
    printf("Name: ");
    scanf("%s", c.name);
    printf("Balance: ");
    scanf("%f", &c.balance);
    fprintf(fp, "%d %s %.2f\n", c.accno, c.name, c.balance);
    fclose(fp);
    printf("Customer added.\n");
}
void displayCustomer() {
    FILE *fp = fopen("file/customers.txt", "r");  
    if(fp == NULL) {
        printf("No customer file found.\n");
        return;
    }
    char line[100];
    while(fgets(line, sizeof(line), fp))
        printf("%s", line);
    fclose(fp);
}
void searchCustomer() {
    FILE *fp = fopen("file/customers.txt", "r");  
    if(fp == NULL) {
        printf("No customer file found.\n");
        return;
    }
    int acc;
    struct Customer c;
    int found = 0;
    printf("Enter acc no: ");
    scanf("%d", &acc);
    while(fscanf(fp, "%d %s %f", &c.accno, c.name, &c.balance) != EOF) {
        if(c.accno == acc) {
            printf("Found: %d %s %.2f\n", c.accno, c.name, c.balance);
            found = 1;
            break;
        }
    }
    fclose(fp);
    if(!found)
        printf("Account not found.\n");
}
int main() {
    int ch;
    while(1) {
        printf("\n1.Add\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d", &ch);
        if(ch == 1) addCustomer();
        else if(ch == 2) displayCustomer();
        else if(ch == 3) searchCustomer();
        else break;
    }
    return 0;
}
