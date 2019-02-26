#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
	enum car_type type;
	double km;
	double gas;
};

void statsOfCar (struct car *ride);

int main()
{
	struct car snoccRide;
	snoccRide.type = TESLA;
	snoccRide.gas = 0;
	snoccRide.km = 13.31;

	struct car sylvieRide;
	sylvieRide.type = TOYOTA;
	sylvieRide.gas = 35.35;
	sylvieRide.km = 1.11;

	statsOfCar(&snoccRide);
	statsOfCar(&sylvieRide);

	return 0;
}

void statsOfCar (struct car *ride){
    if (ride->type == TESLA) {
        printf("The car has run %.2lf km.\n", ride->km);
    } else {
        printf("The car %.2lf gallons of gas and has run %.2lf km.\n", ride->gas, ride->km);
    }
}