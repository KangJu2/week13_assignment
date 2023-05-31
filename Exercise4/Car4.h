#pragma once
class Car {
public:
	Car() { speed = 0.1; wheels = 0; price = 0.2; }
	Car(float, int, float);

	float speed; int wheels; float price;

	void setPrice(float);
	float getPrice();
	void speedChange(float);
	void setWheels(int);
	int getWheels();
	float getSpeed();
	void klaxon(int);
	Car& operator=(const Car&);
	Car& operator+(const Car&);

	friend class Engineer;

private:
	
	void speedUp(float);
	void speedDown(float);
};