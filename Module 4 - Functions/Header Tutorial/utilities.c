#include <stdio.h>
#include "utilities.h"

// Global variables
int ballsBounced = 0;

// Prototype for bouncedBall()
static void bouncedBall();

// Functions
void printFibonacci(int num) {
    int next = 1;
    int prev = 0;
    printf("0\n");
    for (int i = 1; i < num; i++) {
        printf("%d\n", next);
        int temp = prev;
        prev = next;
        next = next + temp;
    }
}

void bouncyBall() {
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
    bouncedBall();
}

static void bouncedBall() {
    static int _ballsBounced = 0;
    _ballsBounced++;
    ballsBounced = _ballsBounced;
}