#include <stdio.h>
#include "utils.h"

void printValues(int num1, int num2, int result) {
    printf("num1: %d\nnum2: %d\nresult: %d\n\n", num1, num2, result);
}

int main() {
    // Declare
    int num1 = 5;
    int num2 = 6;
    int result = 0;
    // Initialize
    // Print numbers
    printValues(num1, num2, result);
    // Increment num1
    increment(&num1);
    printValues(num1, num2, result);
    // Round to nearest five
    roundToNearestFive(&num2);
    printValues(num1, num2, result);
    // Perform sum
    sum(&num1, &num2, &result);
    printValues(num1, num2, result);
    return 0;
}
