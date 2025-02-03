#include "calculator.h"

// Definition of various global variables, These definitions cause memory to actually be allocated for these variables
// These definitions should match our declarations in the public interface (calculator.h)

// A global variable used to keep track of the amount of functions called in the calculator
int calculations = 0;

// Another global variable used to represent the brand of this calculator
char *calculatorBrand = "Compute Pro 1000\n";

// Global variable used for funsies
char *youFoundMe = "How did you find this message\n";

// Function prototype for incrementCalculations(), marked as static so that it is private to this source file
// Notice how this isn't part of the public interface (calculator.h)
static void incrementCalculations();

// The functions of the calculator, all of which have global scope

int add(int n1, int n2) {
	incrementCalculations();
	return n1 + n2;
}

int subtract(int n1, int n2) {
	incrementCalculations();
	return n1 - n2;
}

float divide(int n1, int n2) {
	incrementCalculations();
	return n1 / n2;
}

int multiply(int n1, int n2) {
	incrementCalculations();
	return n1 * n2;
}

int isEven(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    return 0;
}

static void incrementCalculations() {
  	// A static local variable is kept in memory throughout the lifetime of the program
    static int _calculations = 0;
    _calculations++;
	calculations = _calculations;
}