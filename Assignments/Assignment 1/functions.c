#include <stdio.h>
#include "functions.h"

void greetUser() {
    printf("Please enter your full name: ");
    char name[100];
    fgets(name, sizeof(name) / sizeof(char) - 1, stdin);
    printf("Welcome, %s", name);
}

void printMenu() {
    printf("\n1 - Add two numbers\n");
    printf("2 - Encrypt a password\n");
    printf("3 - Check if prime number\n");
    printf("4 - Quit\n");
    printf("\nEnter a menu option: ");
}

void add() {
    int num1, num2;
    printf("Enter the first number to get started: ");
    scanf("%d", &num1);
    printf("Now, enter a second number: ");
    scanf("%d", &num2);

    int result = num1 + num2;
    printf("The result of %d + %d is %d\n", num1, num2, result);
}

void encrypt(char password[100], int passwordLength) {
    for (int i = 0; i < passwordLength; i++) {
        // Break if last character
        if (password[i] == '\0') {
            break;
        }
        // High-tech encryption method
        int temp = password[i] + 10 + -20 * (i % 2 == 0);
        if (temp > '~') {
            temp -= 93;
        } else if (temp < 33) {
            temp += 93;
        }
        password[i] = temp;
    }
    printf("Your encrypted password is: %s\n...This is completely secure\n\n", password);
}

void primeChecker(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            printf("%d is not a prime number!\n", number);
            return;
        }
    }
    printf("%d is a prime number!\n", number);
}
