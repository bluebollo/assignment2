// Joseph Jimpie
// Assignment 2

#include "Skateboard.h"
#include <iostream>
Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double t) {

    srand(time(NULL));					//seed for rand() function
    double randomNum = rand() % 5 + 1;			//random number between 1 and 5
    randomNum = (randomNum / 10);			//random number between .1 and .5
    double mileage = t * randomNum;

    if (t > 25 && t < 250){
	double oneThird = t / 3;
	int floorOneThird = floor(oneThird);			//equals roughly (1/3) * t
    	double moreMileage = (rand() % floorOneThird) + 1;	//random number between 1 and (1/3 * time)
	mileage += moreMileage;
    }
   
    return mileage;
}
string Skateboard::toString(){
    return "-> Skateboard\n" + Vehicle::toString();
}
