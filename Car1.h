#pragma once
class Car {
public:
	Car() { speed = 0.1; wheels = 0; price = 0.2; }
	Car(float, int, float);

	float speed, engine;

	void setPrice(float);
	float getPrice();
	void speedChange(float);
	void setWheels(int);
	int getWheels();
	void klaxon(int);

private:
	int wheels, number;

protected:
	float price, option;
	void speedUp(float);
	void speedDown(float);
};