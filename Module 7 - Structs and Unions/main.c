#include <stdio.h>

// Create a struct
struct car {
	int age;
	char* model;
	char* make;
	int kms;
};

typedef struct car car;

void drive(car* car, int distTravelled) {
	car->kms += distTravelled;
}

int main() {

	// 3 ways to initialize a struct in C
	car vw = { 4, "Jetta", "VW", 100};
	car sx = { .kms = 183000, .age = 23, 
		.make = "Nissan", .model = "Nissan"};
	car vwCopy = vw; // Copy of another struct -> not a pointer

	printf("Car details: age = %d, make = %s, model = %s, kms = %d\n",
		vw.age, vw.make, vw.model, vw.kms);
	printf("Car details: age = %d, make = %s, model = %s, kms = %d\n",
		sx.age, sx.make, sx.model, sx.kms);
	
	drive(&vw, 100);
	printf("VW now has %d kms\n", vw.kms);

	return 0;
}
