#include <iostream>
using namespace std;
#include "Car2.h"
#include "SUV2.h"
#include "Engineer2.h"
int main() {
	SUV* newSUV = new SUV();

	newSUV->setPrice(5000);
	newSUV->setWheels(4);
	newSUV->setSparewheels(2);
	
	Engineer engineer;
	cout << "Price is " << engineer.getCarPrice(newSUV) << " dollars\n"; // use private member data
	cout << "The number of wheels are " << engineer.getCarWheels(newSUV) << " wheels\n"; // use protected member data
	cout << "Speed is " << engineer.getCarSpeed(newSUV) << " m/s"; // use public member data

	delete newSUV;
	return 0;
}