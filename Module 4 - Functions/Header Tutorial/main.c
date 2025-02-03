/*
	In this C program we are going to work with multiple source files. Ideally as programs grow in complexity
	we begin to split our code out into separate translation units (source files). This serves multiple purposes
	with a key one being the ability to re-use code across multiple programs. 

	It is standard practice in C to achieve this through the use of header (.h) files. 

	We use the pre-processing directive #include to tell the pre-processor to search for the related header file,
	then copy its contents (declarations of any functions or variables) directly into this source file. This makes
	all of those declarations available to us to utilize in this source file. 
*/

#include <stdio.h> // The <> brackets tells the pre-processor to search for this .h file in a set of standard directories
#include "calculator.h" // The "" tells the pre-processor to search for this .h file in the current directory
#include "utilities.h"

int main() {

	printf("The number of calculations our computer has performed: %d\n", calculations);		

	int addResult = add(1, 1);
	printf("Result of using the calculator's addition function: %d\n", addResult);

	int subtractResult = subtract(10, 100);
	printf("Result of using the calculator's subtraction function: %d\n", subtractResult);

	float divideResult = divide(100, 10);
	printf("Result of using the calculator's divide function: %f\n", divideResult);

	int multiplyResult = multiply(10, 10);
	printf("Result of using the calculator's multiply function: %d\n", multiplyResult);

    printf("The number of calculations our computer has performed: %d\n", calculations);		

	multiply(add(10, 10), add(10, 10));
	
	printf("The number of calculations our computer has performed: %d\n", calculations);		

	printf("The calculator's brand name is: %s", calculatorBrand);
    // Added isEven to calculator
    int userInput;
    printf("Enter a number to check if it is even: ");
    scanf("%d", &userInput);

    if (isEven(userInput)) {
        printf("%d is an even number\n", userInput);
    } else {
        printf("%d is an odd number\n", userInput);
    }
    // Added variable to calculator
    printf("%s",youFoundMe);
    // Added bouncyBall to utilities
    while (1) {
        printf("Would you like to bounce a ball? (y or n): ");
        getchar();
        char isBounce = getchar();
        if (isBounce == 'y') {
            bouncyBall();
        } else if (isBounce == 'n') {
            break;
        } else {
            printf("Try again\n");
        }
    }
    // Added printFibonacci to utilities
    printf("Enter the number of Fibonacci numbers to print: ");
    int numFib;
    scanf("%d", &numFib);
    printFibonacci(numFib);

    // incrementCalculations(); // try un-commenting this here and in the header file then re-compiling
}