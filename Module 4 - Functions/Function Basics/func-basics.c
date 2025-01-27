#include "stdio.h"
/*
// Functions should be declared before they are called later in the program
int addTwo(int a, int b) {
    return a + b;
}
*/
int main() {

    printf("Enter two whole numbers to sum together\n");

    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    // Function prototypes - promise to the compiler
    int addTwo(int a, int b);

    int sum = addTwo(n1, n2);

    printf("The sum is: %d\n", sum);

    return 0;
}
// If you tell compiler that this function exists, then it will still compile
int addTwo(int a, int b) {
    void echo(int numToEcho);
    echo(a + b);
    return a + b;
}

void echo(int numToEcho) {
    printf("Echoing value: %d\n", numToEcho);
}