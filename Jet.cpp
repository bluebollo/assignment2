// Joseph Jimpie
// Assignment 2

#include "Jet.h"
#include <ctime>
#include <cstdlib>

Jet::Jet() {
    numberOfEngines = 1;
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int number) {
	numberOfEngines = number;
}

double Jet::mileageEstimate(double t) {
    
	srand(time(NULL));
	double randomNumber = rand() % 40 + 60;			//random number is between 40 and 100
	double mileage = randomNumber;
	
	if ((getNumberOfEngines() > 2) && (getFuelType() == "Rocket" || getFuelType() == "rocket")){
		mileage += 5.5 * getNumberOfEngines();	
	}
	return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getNumberOfEngines());
}
