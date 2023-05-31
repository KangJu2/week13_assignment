#include <iostream>
using namespace std;
#include "Car4.h"
#include "SUV4.h"

int main() {
	Car* myCar = new Car(5, 4, 10000);
	Car* myCar2 = new Car(3, 8, 20000);
	Car usedCar = *myCar + *myCar2;

	cout << "The speed is " << usedCar.getSpeed() << endl;
	cout << "The wheels are " << usedCar.getWheels() << endl;
	cout << "The price is " << usedCar.getPrice() << endl;
	
	delete myCar;
	return 0;
}