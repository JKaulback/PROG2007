#include <stdio.h>

// Write a function called ptrToMax that meets the following requirements
    // - Returns a pointer to int
    // - Defines two parameters, one being the size of an array of integers,
    // the second being the array of integers
    // - The function should iterate through the array of integers, and return
    // a pointer to the address of the largest number in the array 
int* ptrToMax(int size, int* array) {
    int* maxValuePtr = array;
    for (int i = 0; i < size; i++) {
        if (array[i] > *maxValuePtr) {
            maxValuePtr = &array[i];
        }
    }
    return maxValuePtr;
}

int main() {
    // Declare and initialize a new int array of 10 ints called nums1 using
    // array initializer syntax {}
    int nums1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    // Declare a new int pointer called intPtr that points to the second item
    // in nums1
    int* intPtr = &nums1[1];
    
    // Print the value that intPtr points to as well as the value stored in
    // intPtr itself
    printf("intPtr points to the value: %d\n", *intPtr);
    printf("The value stored in intPtr is: %p\n", intPtr);
    
    // Print the value of the nums1 variable, followed by pringing the address of
    // the item in position 0 of the nums1 array. If done correctly you should see
    // they both print the same value
    printf("Value of the nums1 variable: %p\n", nums1);
    printf("Address of item in position 0 of nums1 array: %p\n", &nums1[0]);
    
    // Declare a new int pointer called secondPtr and initialize it with the value
    // stored in intPtr
    int* secondPtr = intPtr;
    // Confirm this by printing both the address that secondPtr points to, as well
    // as the value stored at that address
    printf("secondPtr points to the value: %d\n", *secondPtr);
    printf("The value stored in secondPtr is: %p\n", secondPtr);
    
    // Print the addresses of both pointer variables (not the addresses they point to)
    printf("The address of intPtr: %p\n", &intPtr);
    printf("The address of secondPtr: %p\n", &secondPtr);
    
    // Initialize and declare a new array of chars called letters. Initialize it using
    // array initializer syntax. The values stored should be the individual characters
    // of your name eg. { 'N', 'I', 'C', 'K' }
    char letters[] = { 'J', 'U', 'S', 'T', 'I', 'N' };
    // Write a loop that iterates enough times to cover the size of your letters array
    int sizeOfLetters = sizeof(letters) / sizeof(char);
    for (int i = 0; i < sizeOfLetters; i++) {
        // Within the loop body, print the value stored in each position of the array,
        // but do not use index values such as letters[i] or letters[1]. Instead, refer
        // to the sample code (line 50) and use arithmetic operations to achieve the 
        // desired result
        printf("The current character is: %c\n",*(letters + i));
    }

    // Call your ptrToMax function and print out the value that the pointer returned
    // from the function points to. If done correctly, it should be the largest number
    // in your integers array.
    int array[] = { 63, 39, 66, 93, 98, 69, 22, 58, 85, 2 };
    int sizeOfArray = sizeof(array) / sizeof(int);
    int* maxInArr = ptrToMax(sizeOfArray, array);
    printf("Value at address stored in maxInArr: %d\n", *maxInArr);
    return 0;
}