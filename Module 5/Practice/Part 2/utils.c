#include <stdio.h>
#include "utils.h"

void increment(int* num) {
    *num += 1;
}

void roundToNearestFive(int* num) {
    while (*num % 5 != 0) {
        *num += 1;
    }
}

void sum(int* num1, int* num2, int* result) {
    *result = *num1 + *num2;
    *num1 = 0;
    *num2 = 0;
}