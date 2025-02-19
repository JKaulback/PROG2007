#include <stdio.h>

void iterateArray(int* arrPtr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *arrPtr++);        
    }
    printf("\n");
}

int main() {
    // Relationship between pointers and arrays
    int nums[] = { 10, 20, 30, 40, 50 };

    iterateArray(nums, sizeof(nums) / sizeof(int));

    int* arrPtr = &nums[0];

    printf("Value of 1st element: %d\n", nums[0]);
    printf("Value arrPtr points to: %d\n", *arrPtr);
    
    //printf("The value of our array is: %d\n", *nums);
    
    printf("The memory address of the nums variable is: %p\n", nums);
    printf("The memory address stored in arrPtr is: %p\n", arrPtr);

    // An array variable is just a pointer to the first element in the array
    printf("The value of the first item in the array is: %d\n", nums[0]); // *nums
    printf("The value of the second item in the array is: %d\n", nums[1]); // *(nums + 1) Jumps by 1 unit of memory based on data type
    // Pointer arithmetic
    printf("The value of *nums is: %d\n", *nums);
    printf("The value of *(nums + 1) is: %d\n", *(nums + 1));

    arrPtr += 2;
    printf("Value arrPtr points to: %d\n", *arrPtr);
    arrPtr--;
    printf("Value arrPtr points to: %d\n", *arrPtr);
    

    // char charArr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    // printf("The value in *charArr is: %c\n", *charArr);
    // printf("The value in *(charArr + 1) is: %c\n", *(charArr + 1));
    

    return 0;
}