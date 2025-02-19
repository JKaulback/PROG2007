#include "stdio.h"

int main() {
    // Set up variables
    int numberBounces;
    float currentHeight;
    float bouncinessIndex;
    float totalDistance;
    // Get user input
    printf("Enter the initial height of the ball: ");
    scanf("%f", &currentHeight);
    printf("Enter the number of bounces: ");
    scanf("%d", &numberBounces);
    printf("Enter the bounciness index: ");
    scanf("%f", &bouncinessIndex);
    // Evaluate total vertical distance of ball
    totalDistance = currentHeight;
    for (int i = 0; i < numberBounces; i++) {
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight * 2;
    }
    // Output the total vertical distance of the ball
    printf("The ball travelled %.2f ft.\n", totalDistance);
    // Exit program
    return 0;
}