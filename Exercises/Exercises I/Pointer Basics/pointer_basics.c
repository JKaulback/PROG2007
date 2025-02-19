#include <stdio.h>

void valueSwitch(int* num, int value) {
    *num = value;
}

int main() {
    // Create three new variables a, b, c, one of each type int, char, float
    int a = 0;
    char b = 'a';
    float c = 0.1;
    // Print the memory address where each of those variables is stored using
    // the address of & operator
    printf("a is stored at %p\n", &a);
    printf("b is stored at %p\n", &b);
    printf("c is stored at %p\n", &c);
    // Create three pointers ptrA, ptrB, ptrC, one of each type int *, char *,
    // float *, which will each point to your three non pointer variables a, b, c
    int* ptrA = &a;
    char* ptrB = &b;
    float* ptrC = &c;
    // Modify the values of a, b, and c indirectly using ptrA, ptrB, and ptrC
    *ptrA = 25;
    *ptrB = 'L';
    *ptrC = 35.25;
    // Indirectly print the values that ptrA, ptrB, and ptrC point to using the
    // pointers
    printf("The value of a is: %d\n", *ptrA);
    printf("The value of b is: %c\n", *ptrB);
    printf("The value of c is: %f\n", *ptrC);
    // Print each of the memory addresses where ptrA, ptrB, and ptrC are stored
    // (not the address of that they point to)
    printf("The address of ptrA is: %p\n", &ptrA);
    printf("The address of ptrB is: %p\n", &ptrB);
    printf("The address of ptrC is: %p\n", &ptrC);
    // Within the main function, call your valueSwitch function, passing in the
    // appropiate arguments of your choice
    //      Immediately before and after calling the function, print out the value
    //      that the pointer you pass into the valueSwitch function points to
    int initialNum = 15;
    int newNum = 32;
    
    int* numPtr = &initialNum;
    printf("BEFORE SWITCH:\nValue stored in address pointed to by numPtr: %d\n", *numPtr);
    valueSwitch(numPtr, newNum);
    printf("AFTER SWITCH:\nValue stored in address pointed to by numPtr: %d\n", *numPtr);
    return 0;
}