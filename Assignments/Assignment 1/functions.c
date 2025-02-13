#include <stdio.h>
#include "functions.h"

void greetUser() {
    printf("Please enter your full name: ");
    char name[100];
    fgets(name, sizeof(name) / sizeof(char) - 1, stdin);
    printf("Welcome, %s", name);
}

void printMenu() {
    printf("1 - Add two numbers\n");
    printf("2 - Encrypt a password\n");
    printf("3 - Check if prime number\n");
    printf("4 - Quit\n");
    printf("\nEnter a menu option: ");
}

void add() {
    int num1 = 0, num2 = 0;
    printf("Welcome to the number adder\n");
    printf("Enter the first number to get started: ");
    scanf("%d", &num1);
    printf("Now, enter a second number: ");
    scanf("%d", &num2);

    int result = num1 + num2;
    printf("The result of %d + %d is %d\n", num1, num2, result);
}