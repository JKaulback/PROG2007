/*
	A header (.h) file serves as the public interface for a corresponding source (.c) file of the same name.
	If we want to call any of the functions or use any of the variables defined in this headers corresponding source
	file (calculator.c), it is proper form to declare the function prototypes and variables in this header file, then import
	this header file with an #include in the source file we want to use them in. 

	You DO NOT compile header files. It is the responsibility of the pre-processor to substitute the contents of this header
	file directly into the source file that includes it. 

	Another important item of note is that a header file should only include declarations, not definitions, in order to avoid
	duplicate definitions if this header file is included by multiple source files. 
*/

// These are declarations that the variables exist somewhere else in the program (the corresponding source file)
// Note that it is NOT a definition, no memory has been reserved at this point for this variable
extern int calculations; // The compiler trusts that it will find the definition of this variable somewhere in the program
extern char *calculatorBrand; // Same thing here
extern char *youFoundMe; // Can the compiler find me?

// For functions, extern is implicit, and does not need to be included, although it redundantly can be
int add(int n1, int n2);
int subtract(int n1, int n2);
float divide(int n1, int n2);
int multiply(int n1, int n2);
int isEven(int num);

// void incrementCalculations(); // try un-commenting this both here and in main.c then recompile