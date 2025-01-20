#include "stdio.h"

int main() {

    // getchar() - capture single characters
    /*
    printf("Please enter your initial\n");
    char initial = getchar();

    printf("Your initial is: %c\n", initial);
    getchar();
    */

    // scanf()
    /*
    int fooInt;
    char fooChar;

    printf("Please enter a number followed by a space and a single character\n");
    scanf("%d %c", &fooInt, &fooChar);

    printf("Number - %d, Char - %c\n", fooInt, fooChar);
    */

    // fgets() - Good for multiple word strings

    printf("Enter your full name, including middle\n");

    // Internal representation of "Justin" - ['J', 'u', 's', 't', 'i', 'n', '\0']
    // \0 is the "null termination character" - The end of the string
    char buffer[30];

    fgets(buffer, sizeof(buffer) / sizeof(char) -1, stdin);

    printf("Your full name is: %s\n", buffer);

    // buffer[30]
    // ['J', 'u', 's', 't', 'i', 'n', ' ', 'T', 'i', 'm', 'o', 't', 'h', 'y', ' ', 'K', 'a', 'u', 'l', 'b', 'a', 'c', 'k', '\n', '\0']

    // buffer[10]
    // ['J', 'u', 's', 't', 'i', 'n', ' ', 'T', '\0']
    
    return 0;
}