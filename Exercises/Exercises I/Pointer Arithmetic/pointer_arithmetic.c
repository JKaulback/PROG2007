#include <stdio.h>

// Write a function called printSizeOf
    // Defines a single parameter of type size_t
    // Prints to standard output the value stored in the parameter
void printSizeOf(size_t size) {
    printf("The size is: %lu\n", size);
}

// Write a swap function that defines two char pointer parameters,
// and swaps what they point to
void swap(char* ptrA, char* ptrB) {
    char temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {

    // Call your printSizeOf function
    int numbers[10];
    size_t sizeNumbers = sizeof(numbers)/sizeof(int);
    printSizeOf(sizeNumbers);

    // Declare and initialize an array of chars called letters
    char letters[] = { 'J', 'u', 's', 't', 'i', 'n' };
    
    // Declare a char pointer called charPtr and initialize it to point
    // to the memory address of position 0 in the letters array.
    char* charPtr = letters;

    // Write a for loop like so that iterates over the items in letters
        // - Within the loop, print out the value of each letter in the
        // letters array using only the pointer, not an index
        // - You'll need to increment the pointer at some point in your
        // loop for this to work
    for (int i = 0; i < 6; i++) {
        printf("Current letter: %c\n", *charPtr++);
    }

    // Write another for loop that does the exact same thing, except this
    // time you aren't going to use an incrementor variable in the loop header,
    // you will use your charPtr instead. Some hints:
        // - First part of the loop header should be setting charPtr to an 
        // appropiate value.
        // - Second part of the loop header, loop should continue to increment
        // while charPtr is less than or equal to the memory address of the last
        // item in the letters array
        // - Third part of the loop header should increment your pointer
    char* endOfLetters = letters + (sizeof(letters) / sizeof(char));
    for (charPtr = letters; charPtr <= endOfLetters; charPtr++) {
        printf("Current letter w/o i is: %c\n", *charPtr);
    }

    // Write another loop that does the exact same thing, but this time iterates
    // backwards over the letters array using pointer arithmetic
    for (charPtr = endOfLetters; charPtr >= letters; charPtr--) {
        printf("Current letter w/o i reversed is: %c\n", *charPtr);
    }

    // OPTIONAL CHALLENGE
    
    // Declare and initialize a string called dinosaur
    char dinosaur[] = "Billy the dinosaur";
    int sizeOfDinosaur = sizeof(dinosaur) / sizeof(char);
    // Declare and initialize two pointers, ptrA, ptrB
    // ptrA should point to position 0 of dinosaur
    char* ptrA = &dinosaur[0];
    // ptrB should point to the last position of dinosaur (exclude \0)
    char* ptrB = dinosaur + (sizeof(dinosaur) / sizeof(char)) - 2;
    // Iterate over your dinosaur array, during each iteration call the swap
    // function that swaps what is pointed at by ptrA and ptrB
    printf("Before reverse: %s\n", dinosaur);
    for (;ptrA < ptrB;) {
        swap(ptrA++, ptrB--);
    }
    printf("After reverse: %s\n", dinosaur);
    return 0;
}