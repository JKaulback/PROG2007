#include <stdio.h>

int main() {
    
    int fooNums[] = { 10, 20, 30, 40, 50 };
    int* ptrToArr = fooNums;
    printf("The address of our array is: %p\n", fooNums);
    printf("The address of the first element in the array is: %p\n", &fooNums[0]);
    printf("ptrToArr points to %p, and the value stored there is: %d\n", ptrToArr, *ptrToArr);

    int* end = fooNums + (sizeof(fooNums) / sizeof(int));

    for (;ptrToArr < end; ptrToArr++) {
        printf("%d\n",*ptrToArr);
    }
    
    /*char name[] = "Justin";

    char* names[] = { "Homer", "Marge", "Maggie", "Bart", "Lisa"}; 
    int namesSize = sizeof(names) / sizeof(char*);
    printf
    ("The names are:\n");
    for (int i = 0; i < namesSize; i++) {
        printf("Name #%d: %s\n", i + 1, names[i]);
    }

    printf("Name is: %s\n", name);
   
    for (int i = 0; i < sizeof(name) / sizeof(char); i++) {
        printf("Char value: %c\n", name[i]);
    }
    */
    return 0;
}