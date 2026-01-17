#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50
#define MAX_USERS 10

// Structure to store user credentials
typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    char security_question[100];
    char security_answer[100];
} User;

User users[MAX_USERS];
int user_count = 0;

// Function prototypes
void registerUser();
int loginUser();
void forgotPassword();
void resetPassword(const char *username);
int isValidPassword(const char *password);
int usernameExists(const char *username);
int findUserIndex(const char *username);

int main() {
    int choice;

    while (1) {
        printf("\n--- Basic Authentication System ---\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Forgot Password\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Consume the newline character left by scanf
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (loginUser()) {
                    printf("Login successful!\n");
                    // You can add more functionalities here after successful login
                } else {
                    printf("Login failed. Please check your username and password.\n");
                }
                break;
            case 3:
                forgotPassword();
                break;
            case 4:
                printf("Exiting the system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void registerUser() {
    if (user_count >= MAX_USERS) {
        printf("Maximum number of users reached. Cannot register more users.\n");
        return;
    }

    printf("\n--- User Registration ---\n");
    printf("Enter username: ");
    fgets(users[user_count].username, MAX_USERNAME_LENGTH, stdin);
    users[user_count].username[strcspn(users[user_count].username, "\n")] = 0; // Remove trailing newline

    if (usernameExists(users[user_count].username)) {
        printf("Username already exists. Please choose a different one.\n");
        return;
    }

    char password[MAX_PASSWORD_LENGTH];
    int validPassword = 0;
    while (!validPassword) {
        printf("Enter password (at least 8 characters, including uppercase, lowercase, and digit): ");
        fgets(password, MAX_PASSWORD_LENGTH, stdin);
        password[strcspn(password, "\n")] = 0; // Remove trailing newline

        if (isValidPassword(password)) {
            strncpy(users[user_count].password, password, MAX_PASSWORD_LENGTH - 1);
            users[user_count].password[MAX_PASSWORD_LENGTH - 1] = '\0';
            validPassword = 1;
        } else {
            printf("Invalid password. Please follow the password requirements.\n");
        }
    }

    printf("Enter security question: ");
    fgets(users[user_count].security_question, sizeof(users[user_count].security_question), stdin);
    users[user_count].security_question[strcspn(users[user_count].security_question, "\n")] = 0;

    printf("Enter answer to security question: ");
    fgets(users[user_count].security_answer, sizeof(users[user_count].security_answer), stdin);
    users[user_count].security_answer[strcspn(users[user_count].security_answer, "\n")] = 0;

    printf("User '%s' registered successfully!\n", users[user_count].username);
    user_count++;
}

int loginUser() {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("\n--- User Login ---\n");
    printf("Enter username: ");
    fgets(username, MAX_USERNAME_LENGTH, stdin);
    username[strcspn(username, "\n")] = 0;

    printf("Enter password: ");
    fgets(password, MAX_PASSWORD_LENGTH, stdin);
    password[strcspn(password, "\n")] = 0;

    for (int i = 0; i < user_count; ++i) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return 1; // Successful login
        }
    }

    return 0; // Failed login
}

void forgotPassword() {
    char username[MAX_USERNAME_LENGTH];
    char answer[100];
    int userIndex;

    printf("\n--- Forgot Password ---\n");
    printf("Enter your username: ");
    fgets(username, MAX_USERNAME_LENGTH, stdin);
    username[strcspn(username, "\n")] = 0;

    userIndex = findUserIndex(username);

    if (userIndex == -1) {
        printf("Username not found.\n");
        return;
    }

    printf("Security Question: %s\n", users[userIndex].security_question);
    printf("Enter the answer to your security question: ");
    fgets(answer, sizeof(answer), stdin);
    answer[strcspn(answer, "\n")] = 0;

    if (strcmp(users[userIndex].security_answer, answer) == 0) {
        printf("Answer is correct.\n");
        resetPassword(username);
    } else {
        printf("Incorrect answer to security question.\n");
    }
}

void resetPassword(const char *username) {
    char newPassword[MAX_PASSWORD_LENGTH];
    int validPassword = 0;
    int userIndex = findUserIndex(username);

    if (userIndex == -1) {
        printf("Error: User not found for password reset.\n");
        return;
    }

    while (!validPassword) {
        printf("Enter new password (at least 8 characters, including uppercase, lowercase, and digit): ");
        fgets(newPassword, MAX_PASSWORD_LENGTH, stdin);
        newPassword[strcspn(newPassword, "\n")] = 0; // Remove trailing newline

        if (isValidPassword(newPassword)) {
            strncpy(users[userIndex].password, newPassword, MAX_PASSWORD_LENGTH - 1);
            users[userIndex].password[MAX_PASSWORD_LENGTH - 1] = '\0';
            printf("Password reset successfully for user '%s'.\n", username);
            validPassword = 1;
        } else {
            printf("Invalid password. Please follow the password requirements.\n");
        }
    }
}

int isValidPassword(const char *password) {
    int length = strlen(password);
    if (length < 8) {
        return 0; // Too short
    }

    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;

    for (int i = 0; i < length; ++i) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        }
    }

    return hasUpper && hasLower && hasDigit;
}

int usernameExists(const char *username) {
    for (int i = 0; i < user_count; ++i) {
        if (strcmp(users[i].username, username) == 0) {
            return 1;
        }
    }
    return 0;
}

int findUserIndex(const char *username) {
    for (int i = 0; i < user_count; ++i) {
        if (strcmp(users[i].username, username) == 0) {
            return i;
        }
    }
    return -1; // User not found
}