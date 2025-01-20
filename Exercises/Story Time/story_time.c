#include "stdio.h"

int main() {

    // Prompt user for first initial using getchar()
    printf("Enter your first initial: ");
    char firstInitial = getchar();
    getchar();
    
    // Prompt user for last initial using getchar()
    printf("Enter your last initial: ");
    char lastInitial = getchar();
    getchar();

    // Prompt user for first name using scanf()
    printf("Enter your first name: ");
    char firstName[32];
    scanf("%s",firstName);
    while (getchar() != '\n');

    // Prompt user for full name using fgets()
    printf("Enter your full name: ");
    char fullName[32];
    fgets(fullName, sizeof(fullName) / sizeof(char) - 1, stdin);

    // Prompt user for age using scanf()
    printf("Enter your age: ");
    short age;
    scanf("%hi", &age);

    // Prompt user for height using scanf()
    printf("Enter your height in cm: ");
    float height;
    scanf("%f", &height);

    // Prompt user to enter weight using scanf()
    printf("Enter your weight in lbs: ");
    float weight;
    scanf("%f", &weight);

    // Prompt user to enter number of siblings they have using scanf()
    printf("Enter the number of siblings you have: ");
    short siblingCount;
    scanf("%hi", &siblingCount);

    // Short story
    printf("\nYour full name is %s",fullName);
    printf("%s, your initials are %c %c.\n", firstName, firstInitial, lastInitial);
    printf("You are %hi years old\n", age);
    printf("You are %.2f cm tall and weigh %.2f lbs\n", height, weight);
    printf("You have %hi siblings.\n", siblingCount);

    // Exit program
    return 0;
}