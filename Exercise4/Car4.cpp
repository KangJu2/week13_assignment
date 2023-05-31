#include "Car4.h"
#include <iostream>  //  for cout
using namespace std;

Car::Car(float ss, int ww, float pp) {
	speed = ss;
	wheels = ww;
	price = pp;
	cout << " new Car \n";
}
void Car::speedUp(float x) { speed += x; }
void Car::speedDown(float x) { speed -= x; }
void Car::setPrice(float x) { price = x; }
float Car::getPrice() { return price; }
float Car::getSpeed() { return speed; }
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);
}
void Car::setWheels(int n) { wheels = n; }
int Car::getWheels() { return wheels; }
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		cout << "  no horn \n";
	}
}
Car& Car::operator=(const Car& AA) {
	this->wheels = AA.wheels;
	this->price = AA.price;
	return *this;
}
Car& Car::operator+(const Car& AA) {
	Car CC;
	CC.speed = this->speed + AA.speed;
	CC.wheels = this->wheels + AA.wheels;
	CC.price = this->price + AA.price;
	return CC;
}