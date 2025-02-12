#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
} 

int main() {

    // A pointer is a variable which contains a memory address
    // Declare a pointer
    int *intPtr;

    int fooNum = 100;

    // Initialize a pointer with the address of (&) operator
    intPtr = &fooNum;

    // Adding to number stored in fooNum
    *intPtr += 1; // * is the dereferenceing operator
    fooNum += 1;
    printf("intPtr: %d\nfooNUm: %d\n", *intPtr, fooNum);

    // Printing some memory addresses
    printf("Address stored in intPrt: %p\n", intPtr);
    printf("Address of fooNum: %p\n", &fooNum);
    printf("Address of intPtr: %p\n", &intPtr);

    // Write a function that takes two int arguments, and swaps them
    int x = 10;
    int y = 20;
    printf("Before swap\nx = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap\nx = %d, y = %d\n", x, y);
    return 0;
}