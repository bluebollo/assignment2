vehicles: main.o Vehicle.o PoweredVehicle.o Bicycle.o Car.o Skateboard.o
	g++ -std=c++11 -o vehicles main.o Vehicle.o PoweredVehicle.o Bicycle.o Car.o Skateboard.o
main.o: main.cpp
	g++ -std=c++11 -c main.cpp
Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -std=c++11 -c Vehicle.cpp
PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -std=c++11 -c PoweredVehicle.cpp
Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -std=c++11 -c Bicycle.cpp
Car.o: Car.cpp Car.h
	g++ -std=c++11 -c Car.cpp
Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -std=c++11 -c Skateboard.cpp

clean:
	rm *.o vehicles
