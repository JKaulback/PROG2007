#include "stdio.h"
// Sums two numbers and returns the result
int add(int n1, int n2) {
    return n1 + n2;   
}
// Returns 1 if the number passed in is even, and 0 if odd
int evenOrOdd(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    return 0;
}
// Returns the max number of three passed in integers
int findMax(int n1, int n2, int n3) {
    if (n1 >= n2 && n1 >= n3) {
        return n1;
    } else if (n2 >= n1 && n2 >= n3) {
        return n2;
    }
    return n3;
}

int main() {
    void loopGreet(); // Function prototype
    // Setting up vars
    int n1 = 5;
    int n2 = 6;
    int n3 = 7;
    // Calling add
    int result = add(n1, n2);
    printf("The result of calling add(%d, %d) is: %d\n", n1, n2, result);
    // Calling evenOrOdd
    printf("The result of calling evenOrOdd(%d) is: %d\n", n1, evenOrOdd(n1));
    printf("The result of calling evenOrOdd(%d) is: %d\n", n2, evenOrOdd(n2));
    // Calling findMax
    printf("The result of calling findMax(%d, %d, %d) is: %d\n", 
        n1, n2, n3, findMax(n1, n2, n3));
    printf("The result of calling findMax(%d, %d, %d) is: %d\n", 
        n1 + n3, n2-n3, n3, findMax(n1 + n3, n2 - n3, n3));
    // Calling loopGreet
    printf("Below is the result of calling loopGreet():\n");
    loopGreet();
    // Shutting down
    return 0;
}
// Uses a loop to call echo five times, passing in a different int
// each time echo is called
void loopGreet() {
    void echo(int num); // Function prototype
    for (int i = 0; i < 5; i++) {
        // Just messing around with numbers
        echo((148 * i - (37 * i * i)) * (i % 2 * -2 + 1));
    }
}
// Prints a passed in int to standard output
void echo(int num) {
    printf("%d\n", num);
}