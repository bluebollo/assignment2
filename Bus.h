// Joseph Jimpie
// Assignment 2

#ifndef DRIVINGSIMULATOR_BUS_H
#define DRIVINGSIMULATOR_BUS_H

#include "PoweredVehicle.h"

class Bus : public PoweredVehicle {

private:
    int numberOfSeats;			//number of seats available for passengers

public:
    Bus();

    explicit Bus(string brand, string model, string fuelType,
                 int numberOfSeats);

    virtual ~Bus();
    int getNumberOfSeats();
    void setNumberOfSeats(int number);
    virtual double mileageEstimate(double t);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
