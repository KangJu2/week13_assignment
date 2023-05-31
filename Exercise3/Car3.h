#pragma once
class Car {
public:
	Car() { speed = 0.1; wheels = 0; price = 0.2; }
	Car(float, int, float);

	float speed; int wheels;

	void setPrice(float);
	float getPrice();
	void speedChange(float);
	void setWheels(int);
	int getWheels();
	void klaxon(int);

	virtual void Warningmassage(int);

	friend class Engineer;

private:
	float price;
	void speedUp(float);
	void speedDown(float);
};