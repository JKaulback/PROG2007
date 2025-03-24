#include <stdio.h>
#include <string.h>

typedef struct car car;
typedef struct person person;

struct person {
	char* name;
	int age;
	int licenseNum;
};

// Create a struct that models a car
// 	- It should contain half a dozen members
// 	- One member should itself be a struct (see stuct person)
struct car {
	char* make;
	char* model;
	int odometer;
	int seats;
	int year;
	person owner;

};

void printCar(car* car) {
	person currentOwner = car->owner;
	printf("Car information:\n\tName\tAge\tLicense Number\n\t%s\t%d\t%d\n\n", 
		currentOwner.name, currentOwner.age, currentOwner.licenseNum);
	printf("\tMake\tModel\tKMs\t# of seats\tYear\n\t%s\t%s\t%d\t%d\t\t%d\n",
		car->make, car->model, car->odometer, car->seats, car->year);
}

void printCarArray(car* cars, car* lastCar) {
	
	for (car* currentCar = cars; currentCar < lastCar; currentCar++) {
		printCar(currentCar);
	}
}

int isSameCar(car* car1, car* car2) {
	if (strcmp(car1->owner.name, car2->owner.name)) return 0;
	else if (car1->owner.age != car2->owner.age) return 0;
	else if (car1->owner.licenseNum != car2->owner.licenseNum) return 0;
	else if (car1->odometer != car2->odometer) return 0;
	else if (car1->seats != car2->seats) return 0;
	else if (car1->year != car2->year) return 0;
	else if (strcmp(car1->make, car2->make)) return 0;
	else if (strcmp(car1->model, car2->model)) return 0;
	return 1;
}

int main() {

	// Create two struct variables
	// 	- Initialize one at the same time that you declare it
	person leah = {"Leah", 25, 1234567};
	car leahCar = {"Toyota", "Camry", 160000, 5, 2012, leah};
	// 	- Initialize the members of the second struct after you have defined it
	person justin;
	justin.name = "Justin";
	justin.age = 25;
	justin.licenseNum = 1234567;

	car justinCar;
	justinCar.make = "Toyota";
	justinCar.model = "Corolla";
	justinCar.odometer = 62882;
	justinCar.seats = 5;
	justinCar.year = 2023;
	justinCar.owner = justin;
	
	car justinCarCopy = justinCar;

	// Write a function called printCar that taked your car structure as an argument.
	// 	- Within the function, print out all the details of your car structure
	// 	- Call your function two times from within main(), passing in your struct
	//	variables as arguments to the function
	printCar(&leahCar);
	printCar(&justinCar);
	
	// Write a function called printCarArray that takes an array of your car structures
	// as an argument
	// 	- Within the function, iterate through all the car structures in the array, 
	// 	calling printCar passing in each car structure as an argument
	// 	- Call your function from within main(), passing in an array of structs as
	// 	an argument to the function
	// 		- Eg. struct car cars[]
	car cars[] = {justinCar, leahCar};
	car* lastCar = cars + sizeof(cars) / sizeof(cars[0]);
	printCarArray(cars, lastCar);

	// Write a function called isSameCar that returns a value that could be interpreted
	// as a boolean (remember C has no bool type)
	// 	- The function should define two parameters, both of which are of the type
	// 	of your car structure.
	// 	- Do a comparison on all of the members of the two car structures, returning
	// 	a value out of the function representing if all of the car member variables
	// 	are equal or not.
	// 	- Call your function from within main(), passing in your struct variables
	// 	as arguments to the function
	if (isSameCar(&leahCar, &justinCar)) {
		printf("These cars are the same\n");
	} else {
		printf("These cars are different\n");
	}

	if (isSameCar(&justinCar, &justinCarCopy)) {
		printf("These cars are the same\n");
	} else {
		printf("These cars are different\n");
	}
	return 0;
}
