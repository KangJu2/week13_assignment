#include <iostream>
using namespace std;
#include "Car3.h"
#include "SUV3.h"
#include "Engineer3.h"
int main() {
	Car* newSUV = new SUV();
	newSUV->setPrice(45000);
	cout << "The wheels are " << newSUV->getWheels() << endl;
	Engineer engineer;
	cout << "Price is " << engineer.getCarPrice(newSUV) << " dollars\n";

	cout << "with virtual\n";
	newSUV->Warningmassage(3); // with virtual

	delete newSUV;
	return 0;
}