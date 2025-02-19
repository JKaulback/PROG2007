#include "stdio.h"

int main() {
    // ----- Question 1 -----
    // Set up loop
    int isTrue = 0;
    while (!isTrue) {
        // Get initial
        printf("Please enter the first letter of your name: ");
        char firstInitial = getchar();
        getchar();
        // Check case
        if (firstInitial >= 65 && firstInitial <= 90) {
            printf("You entered an uppercase character\n");
            isTrue = 1;
        } else if (firstInitial >= 97 && firstInitial <=122 ) {
            printf("You entered a lowercase character\n");
            isTrue = 1;
        } else {
            printf("Please enter a character between A and Z, or a and z\n");
        }
    }
    // ----- Question 2 -----
    for (int i = 0; i < 5; i++) {
        // Enter day of the week
        printf("\n%d input(s) remaining\n",5 - i);
        printf("Enter a character which represents a day of the week (ex. 'm' or 'M' for Monday): ");
        char weekDayChar = getchar();
        getchar();
        // Check day of the week
        switch (weekDayChar) {
            case 's':
            case 'S':
                printf("Hello, it is either Saturday or Sunday\n");
                break;
            case 'm':
            case 'M':
                printf("Hello, it is Monday\n");
                break;
            case 't':
            case 'T':
                printf("Hello, it is either Tuesday or Thursday\n");
                break;
            case 'w':
            case 'W':
                printf("Hello, it is Wednesday\n");
                break;
            case 'f':
            case 'F':
                printf("Hello, it is Friday\n");
                break;
            default:
                printf("%c isn't a day of the week!\n",weekDayChar);
        }
    }
    // Exit program
    return 0;
}