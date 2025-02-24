#include <stdio.h>

// Write a function called printIntArray that returns void and defines
// two parameters:
    // The first parameter is the size of the array
    // The second parameter is the array itself
    // The function should iterate over the array contents and print the values
    // to standard input.
void printIntArray(int sizeOfArray, int* array) {
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%d\n", array[i]);
    }
}

int main() {
    // Declare an array of ints called nums1 that will store 10 numbers
    int nums1[10];
    int sizeOfNums1 = sizeof(nums1) / sizeof(int);
    // Manually put a value of 10 in the first position
    nums1[0] = 10;
    // Write a loop that populates the rest of the array with the value of
    // the previous position in the array * 2
    for (int i = 1; i < sizeOfNums1; i++) {
        nums1[i] = nums1[i - 1] * 2;
    }

    // Declare another array of 10 ints called nums2
    int nums2[10];
    int sizeOfNums2 = sizeof(nums2) / sizeof(int);
    // Write a loop that populates the array with the values stored in nums1,
    // but backwards (ex. the value stored in the last position in num1 is
    // what gets assigned to the first position in nums2)
    int nums2Index = 0;
    for (int i = sizeOfNums1 - 1; i >= 0; i--) {
        nums2[nums2Index++] = nums1[i];
    }

    // Declare and initialize an array of 5 ints called nums3 using the
    // array initialization syntax {}
    int nums3[] = { 1, 2, 3, 4, 5 };

    // Declare and initialize an array of 10 ints called nums4 using the
    // array initialization syntax, but only initialize the values in odd 
    // numbered positions
    int nums4[] = { [1] = 1, [3] = 2, [5] = 3, [7] = 4, [9] = 5 };
    
    // Call your function (printIntArray(int, int*)), passing in one of your
    // previously declared int arrays from earlier steps.
    printIntArray(sizeOfNums2, nums2);

    return 0;
}