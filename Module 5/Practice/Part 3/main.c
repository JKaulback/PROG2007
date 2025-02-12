#include <stdio.h>

void analyzeGrades(int grades[], int* min, int* max, double* average, int sizeOfGrades) {
    double total = 0;
    *min = grades[0];
    *max = grades[0];
    for (int i = 0; i < sizeOfGrades; i++) {
        total += grades[i];
        if (grades[i] < *min) {
            *min = grades[i];
        }
        if (grades[i] > *max) {
            *max = grades[i];
        }
    }
    *average = total / sizeOfGrades;
}

int main() {

    int grades[] = { 87, 92, 75, 65, 98, 83, 56, 72, 89, 74 };
    int min, max;
    double average;

    analyzeGrades(grades, &min, &max, &average, sizeof(grades) / sizeof(int));

    printf("Result of analyze function:\nMIN: %d\nMAX: %d\nAVERAGE: %f\n",  min, max, average);

    return 0;
}