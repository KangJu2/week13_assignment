#include <iostream>
using namespace std;
#include "Car1.h"
#include "SUV1.h"
int main() {
	SUV* newSUV = new SUV();

	newSUV->setPrice(5000);
	cout << "price " << newSUV->price << "\n"; // protected
	cout << "price " << newSUV->getPrice() << "\n";
	newSUV->speedChange(10.0);
	newSUV->speedUp(10.0); // protected
	newSUV->setSparewheels(2);
	cout << "Spare wheels are " << newSUV->getSparewheels() << endl;

	cout << newSUV->engine << newSUV->number << newSUV->option << endl;
	// engine is public, number is private, option is protected
	delete newSUV;
	return 0;
}