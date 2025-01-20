#include "stdio.h"

int main() {

    // printf   - basic output
    // getchar  - single character
    // scanf    - provide a format string for input pattern
    // fgets    - multi-word strings

    /* PRINTF ----------------------------
    // int printf(const char* format, ...)
    // ... -> variatic parameter
    printf("%s - %s - %s\n", "Nick", "Tyler", "Spencer");
    printf("%2$s - %3$s - %1$s\n", "Nick", "Tyler", "Spencer");
    */

    /* GETCHAR --------------------------------
    // int getchar(void)
    // leaves the \n in the buffer
    char initial;
    printf("Please enter a single character\n");
    initial = getchar();
    getchar();
    printf("Your initial is: %c\n", initial);

    // let's experiment with initial
    printf("Your initial is also: %d\n", initial);
    // ints and chars are interchangable (as long as the variable is a valid ASCII character)
    // chars are short unsigned ints encoded with and ASCII table


    // Clearing the entire buffer
    // while (getchar() != EOF);


    int fooInt;
    if ((fooInt = getchar()) == 'N') {
        printf("You entered an N character\n");
    }
    */

    /* SCANF ------------------------------------
    // int scanf(const char* format, ...) -> inverse of printf()
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3); // & in C is the "Address of" operator
    printf("%d %d %d\n", n1, n2, n3);


    char name[10]; // A variable which is in an array, its value is the memory address of element #1
    printf("Enter your name\n");
    scanf("%s", name);
    printf("Your name is: %s\n", name);
    */
   

    return 0;
}