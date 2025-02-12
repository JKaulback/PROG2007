#include <stdio.h>

int main() {

    // Arrays in C - primitive arrays in Java

    // Declaring arrays
    int gradesA[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Fixed-size of 10 forever
    int gradesB[10];
    // Iterate through the array
    for (int i = 0; i < sizeof(gradesB)/sizeof(int); i++) {
        gradesB[i] = i + 1;
    }
    // gradesB = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
    int gradesZeros[10] = {}; // { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    int gradesFunky[10] = { 10, 20, [5] = 100, 1000, [9] = 10000}; // {10, 20, 0, 0, 0, 100, 1000, 0, 0, 10000};

    // 2-D Arrays
    int twoDArr[][3] = { 
        { 1, 2, 3 }, 
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    for (int i = 0; i < sizeof(twoDArr) / sizeof(twoDArr[i]); i++) {
        for (int j = 0; j < sizeof(twoDArr[i]) / sizeof(int); j++) {
            printf(" %d ", twoDArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}