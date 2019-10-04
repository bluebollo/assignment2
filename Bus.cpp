// Joseph Jimpie
// Assignment 2

#include "Bus.h"
#include <ctime>
#include <cstdlib>

Bus::Bus() {
    numberOfSeats = 1;
}

Bus::Bus(string brand, string model, string fuelType, int numberOfSeats) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfSeats(numberOfSeats);				//number of seats for passengers
}

Bus::~Bus() = default;

int Bus::getNumberOfSeats() {
    return numberOfSeats;
}

void Bus::setNumberOfSeats(int number) {
	numberOfSeats = number;
}


/* For mileageEstimate, there is a mileage penalty when numberOfSeats > 10 (10%)
   and a bonus when fuel type == diesel */
double Bus::mileageEstimate(double t) {
    
	srand(time(NULL));
	double mileage = 10.0;					//bus drives 10 miles per minute by default 
	if (getNumberOfSeats() > 10){
		double penalty = .1 * getNumberOfSeats();	//10% mileage penalty for a certain number of seats
		mileage -= penalty;
	}
	
	if (getFuelType() == "diesel"){				//add 10 miles if diesel is the fuel type
		double addedMileage = 10;
		mileage += addedMileage;
	}
	return mileage;
}

string Bus::toString() {
    return "-> Bus\n" + PoweredVehicle::toString() + "\n\tNumber of Seats: " +
           to_string(getNumberOfSeats());
}
