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
            add();
        } else if (userChoice == 2) {
            // encrypt();
        } else if (userChoice == 3) {
            // primeChecker();
        } else if (userChoice == 4) {
            printf("Bye for now!\n");
            return 0;
        } else {
            printf("\nInvalid input, please enter a menu option.\n(press enter to continue)\n");
            while (getchar() != '\n');
        }
    }

}