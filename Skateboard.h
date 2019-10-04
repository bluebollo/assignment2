// Joseph Jimpie
// Assignment 2

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

class Skateboard : public Vehicle {

public:

    explicit Skateboard(string brand, string model);
    virtual ~Skateboard();

    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
