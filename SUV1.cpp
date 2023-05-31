#include "SUV1.h"
#include <iostream>
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
};
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price); 
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}
float SUV::getengine() {
	return this->engine; // engine is public
}
int SUV::getnumber() {
	return this->number; // number is private
}
float SUV::getoption() {
	return this->option; // option is protected
}