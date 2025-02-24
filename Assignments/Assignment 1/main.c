#include <stdio.h>
#include "functions.h"

int main() {
    greetUser();
    while (1) {
        printMenu();
        int userChoice;
        scanf("%d", &userChoice);
        getchar();
        if (userChoice == 1) {
            printf("Welcome to the number adder\n");
            add();
        } else if (userChoice == 2) {
            char password[100];
            printf("Make sure your password has no spaces in it...\n");
            printf("Enter the password to encrypt:");
            scanf("%s", password);
            while (getchar() != '\n');

            encrypt(password, sizeof(password) / sizeof(char));
        } else if (userChoice == 3) {
            printf("Welcome to the prime checker.\n");
            printf("Enter a number to check if it is a prime number: ");
            int number;
            scanf("%d", &number);
            primeChecker(number);
        } else if (userChoice == 4) {
            printf("Bye for now!\n");
            return 0;
        } else {
            printf("\nInvalid input, please enter a menu option.\n(press enter to continue)\n");
            while (getchar() != '\n');
        }
    }
}