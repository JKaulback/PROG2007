#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 306;
    int b = 2;
    printf("Before swap\n");
    printf("a: %d\nb: %d\n", a, b);
    swap(&a, &b);
    printf("After swap\n");
    printf("a: %d\nb: %d\n", a, b);
}