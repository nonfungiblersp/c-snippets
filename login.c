#include <stdio.h>
#include <conio.h>
#include<string.h>

#define MAX_USERS 5
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20


struct User {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};


struct User users[MAX_USERS];
int numUsers = 0;


void registerUser() {
    if (numUsers == MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return;
    }


    struct User newUser;


    printf("Enter username: ");
    scanf("%s", newUser.username);


    printf("Enter password: ");
    scanf("%s", newUser.password);


    users[numUsers] = newUser;
    numUsers++;


    printf("Registration successful.\n");
}


int loginUser() {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
int i;
    printf("Enter username: ");
    scanf("%s", username);


    printf("Enter password: ");
    scanf("%s", password);


    for (i = 0; i < numUsers; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            printf("Login successful.\n");
            return 1;
        }
    }


    printf("Invalid username or password.\n");
    return 0;
}


int main() {
    int choice;


    do {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (loginUser()) {
                    // Perform actions for logged-in user
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);


    return 0;
}
