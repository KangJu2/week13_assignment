#pragma once
#include "Car3.h"
class SUV : public Car {
private:
	int spareWheels;
public:
	void klaxon(int);
	void Warningmassage(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
};