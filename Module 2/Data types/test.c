#include "stdio.h"

int main() {

    // Data types in C
    int fooInt;
    float fooFloat; // imprecise decimal
    double fooDouble; // precise decimal
    char fooChar; // represents a single character
    char* fooNotString = "Hello"; // This is a char pointer
    char fooBuffer[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int fooNums[] = {1, 2, 3, 4, 5};

    // New data types
    short fooShort; // whole number - save some space if storing a very small number
    long fooLong; // whole number - will allow us to store a larger number than an int can handle


    // Missing from Java

    // boolean fooBool;     // may use int 1 - true, 0 - false
    // if (fooBool == 1) {
    //      // fooBool represents a true boolean
    // }

    // String fooString     // No String type in C
    // We will have to build our strings ourselves.

    printf("%s %s - %lu\n", "int", "Size", sizeof(int));
    printf("%s %s - %lu\n", "char", "Size", sizeof(char));
    printf("%s %s - %lu\n", "float", "Size", sizeof(float));
    printf("%s %s - %lu\n", "double", "Size", sizeof(double));
    printf("%s %s - %lu\n", "char array", "Size", sizeof(fooBuffer));
    printf("%s %s - %lu\n", "int array", "Size", sizeof(fooNums));

    return 0;
}