/*
    Project: County Library management system.
    Author:  Nancy Ketere
    Date:    Oct,2021
    Compiler: GNU GCC
    Language: C99
    License: MIT
*/

/*
Users - view users,Add new user, edit,delete,login,change password,logout
catalogue
Issuance
Serial
Acquisition
Navigation
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu(); // prototype
void execute_action (int action);
int main()
{
    int action;
    action = menu();
    execute_action(action);
    return 0;
}

int menu() //header
{
    int action;
    do {
        printf("\tCounty Library\n");
        printf("Welcome Mr. Titus. \n");
        printf("What would you like to do?\n");
        printf("1. View Users.\n");
        printf("2. Add new User\n");
        printf("3. Edit User.\n");
        printf("4. Delete User.\n");
        printf("5. Change Password\n");
        printf("6. Logout.\n");
        printf("7. Exit.\n");
        printf("Selected action(1-7): ");
        scanf("%d",&action);
        if(action < 1 || action > 7) {
            system("cls");
            printf("Invalid Action. Try again.\n");
        }
    } while (action < 1 || action > 7);

    return action;
}

void execute_action (int action) {
    switch(action) {
    case 1:
        printf("List of users\n");
        break;
    case 2:
        printf("Add new users\n");
        break;
    case 3:
        printf("Editing users\n");
        break;
    case 4:
        printf("Delete User\n");
        break;
    case 5:
        printf("Change Password\n");
        break;
    case 6:
        printf("You have been logged out\n");
        break;
    case 7:
        printf("bye\n");
        break;
    default:
        printf("Invalid action\n");

    }
}

    void close () {
        printf("Thanks for using the system\n");
        printf("Created by Nancy Ketere\n");
        printf("Bye\n");
        Sleep (2000);
        exit(0);

    }
