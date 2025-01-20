#include "stdio.h"

int main() {
    // Declare and initialize one variable per data type in C
    int fooInt = -250251;
    float fooFloat = 37.375;
    short fooShort = 256;
    long fooLong = 8446744073709551615;
    double fooDouble = 123.321654;
    char fooChar= 'A';
    char* fooString = "Hello world";
    // Print to standard output each variable value, truncating any decimal number to
    // 2 points past the decimal
    printf("fooInt = %d\n",fooInt);
    printf("fooFloat = %.2f\n", fooFloat);
    printf("fooShort = %hi\n", fooShort);
    printf("fooLong = %li\n", fooLong);
    printf("fooDouble = %.2lf\n", fooDouble);
    printf("fooChar = %c\n", fooChar);
    printf("fooString = %s\n", fooString);
    printf("\n");
    // Print to standard output the number of bytes used by each variable you've created
    // using the sizeof() function
    printf("Size of fooInt: %lu\n", sizeof(fooInt));
    printf("Size of fooFloat: %lu\n", sizeof(fooFloat));
    printf("Size of fooShort: %lu\n", sizeof(fooShort));
    printf("Size of fooLong: %lu\n", sizeof(fooLong));
    printf("Size of fooDouble: %lu\n", sizeof(fooDouble));
    printf("Size of fooChar: %lu\n", sizeof(fooChar));
    printf("Size of fooString: %lu\n", sizeof(fooString));
    printf("\n");
    // Print out a table of values that matches the table
    
    return 0;
}