#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Skateboard.h"
#include "Jet.h"
#include "Bus.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
    std::cout << "Driving simulator" << std::endl;
    int size = 12;
    int capacity = 20;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Skateboard("Birdhouse", "THAWK99");
    vehiclesArray[7] = new Skateboard("Baker", "PX1000");
    vehiclesArray[8] = new Jet("Boeing", "737", "rocket", 5);
    vehiclesArray[9] = new Jet("Air Canada", "800", "jet", 1);
    vehiclesArray[10] = new Bus("Greyhound", "Y11", "diesel", 30);
    vehiclesArray[11] = new Bus("School_Bus", "X12", "regular", 20);

    printVehiclesRoster(vehiclesArray, size);
    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
